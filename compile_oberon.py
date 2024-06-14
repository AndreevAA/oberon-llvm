from antlr4 import *
from OberonLexer import OberonLexer
from OberonParser import OberonParser
from OberonListener import OberonListener
from llvmlite import ir, binding
import sys
import re
import subprocess
import os
import operator
import inspect

ops = {
    '+': operator.add,
    '-': operator.sub,
    '*': operator.mul,
    '/': operator.floordiv,
    '<': operator.lt,
    '>': operator.gt,
    '<=': operator.le,
    '>=': operator.ge,
    '==': operator.eq,
    '!=': operator.ne,
}

class OberonToLLVM(OberonListener):
    def __init__(self):
        self.module = ir.Module(name='oberon_module')
        self.builder = None
        self.symbols = {}
        self.current_function = None
        self.printf = None

    def enterModule(self, ctx: OberonParser.ModuleContext):
        voidptr_ty = ir.IntType(8).as_pointer()

        # Declare printf
        self.printf = ir.Function(
            self.module, ir.FunctionType(ir.IntType(32), [voidptr_ty], var_arg=True), name="printf"
        )

        # Create main function
        func_type = ir.FunctionType(ir.IntType(32), [], False)
        self.current_function = ir.Function(self.module, func_type, name='main')
        block = self.current_function.append_basic_block(name='entry')
        self.builder = ir.IRBuilder(block)

    def exitModule(self, ctx: OberonParser.ModuleContext):
        # return the value of n
        if 'n' in self.symbols:
            self.builder.ret(self.builder.load(self.symbols['n']))
        else:
            self.builder.ret(ir.Constant(ir.IntType(32), 0))

    def declare_global_string(self, string_value):
        string_type = ir.ArrayType(ir.IntType(8), len(string_value) + 1)
        global_string = ir.GlobalVariable(self.module, string_type, name=f".str{len(self.symbols)}")
        global_string.initializer = ir.Constant(string_type, bytearray(string_value.encode("utf8") + b'\00'))
        global_string.global_constant = True
        return global_string

    def enterVariableDeclaration(self, ctx: OberonParser.VariableDeclarationContext):
        var_type_name = ctx.type_().getText().upper()
        var_names = ctx.identList().getText().split(',')

        var_type = None
        array_pattern = re.compile(r"ARRAY\s*(\d+)\s*OF\s*(\w+)", re.IGNORECASE)
        match = array_pattern.match(var_type_name)

        if match:
            size = int(match.group(1))
            element_type_str = match.group(2).upper()
            if element_type_str == "INTEGER":
                var_type = ir.ArrayType(ir.IntType(32), size)
            else:
                print(f"Error: Unsupported array element type {element_type_str}")
                sys.exit(1)
        else:
            if var_type_name == "INTEGER":
                var_type = ir.IntType(32)
            else:
                print(f"Error: Unsupported variable type {var_type_name}")
                sys.exit(1)

        if var_type is not None:
            for var_name in var_names:
                var = self.builder.alloca(var_type, name=var_name.strip())
                self.builder.store(ir.Constant(var_type, 0), var)
                self.symbols[var_name.strip()] = var

    def enterAssignment(self, ctx: OberonParser.AssignmentContext):
        designator = ctx.designator().getText()
        expression = ctx.expression().getText()

        llvm_value = self.evaluate_expression(expression)

        if '[' in designator and ']' in designator:
            var_name, index_str = designator[:-1].split('[')
            index = self.evaluate_expression(index_str)
            var = self.symbols.get(var_name.strip(), None)
            if var is None:
                print(f"Variable {var_name} not declared!")
                sys.exit(1)
            array_element_ptr = self.builder.gep(var, [ir.Constant(ir.IntType(32), 0), index])
            self.builder.store(llvm_value, array_element_ptr)
        else:
            var = self.symbols.get(designator, None)
            if var is None:
                print(f"Variable {designator} not declared!")
                sys.exit(1)
            self.builder.store(llvm_value, var)

    def evaluate_expression(self, expression):
        if expression.isdigit():
            return ir.Constant(ir.IntType(32), int(expression))

        if expression in self.symbols:
            return self.builder.load(self.symbols[expression])

        for op in ('+', '-', '*', '/', '<', '>', '<=', '>=', '==', '!='):
            if op in expression:
                left_expr, right_expr = expression.split(op, 1)
                left_val = self.evaluate_expression(left_expr.strip())
                right_val = self.evaluate_expression(right_expr.strip())

                if op == '+':
                    return self.builder.add(left_val, right_val)
                elif op == '-':
                    return self.builder.sub(left_val, right_val)
                elif op == '*':
                    return self.builder.mul(left_val, right_val)
                elif op == '/':
                    return self.builder.sdiv(left_val, right_val)
                elif op == '<':
                    return self.builder.icmp_signed('<', left_val, right_val)
                elif op == '>':
                    return self.builder.icmp_signed('>', left_val, right_val)
                elif op == '<=':
                    return self.builder.icmp_signed('<=', left_val, right_val)
                elif op == '>=':
                    return self.builder.icmp_signed('>=', left_val, right_val)
                elif op == '==':
                    return self.builder.icmp_signed('==', left_val, right_val)
                elif op == '!=':
                    return self.builder.icmp_signed('!=', left_val, right_val)

        raise ValueError(f"Unable to evaluate expression: {expression}")

    def enterWhileStatement(self, ctx: OberonParser.WhileStatementContext):
        loop_entry = self.builder.append_basic_block('loop_entry')
        loop_body = self.builder.append_basic_block('loop_body')
        loop_exit = self.builder.append_basic_block('loop_exit')

        self.builder.branch(loop_entry)
        self.builder.position_at_end(loop_entry)

        while_expr_ctx = ctx.expression(0)
        while_condition = self.evaluate_expression(while_expr_ctx.getText())
        self.builder.cbranch(while_condition, loop_body, loop_exit)

        self.builder.position_at_end(loop_body)
        self.enterStatementSequence(ctx.statementSequence())
        self.builder.branch(loop_entry)

        self.builder.position_at_end(loop_exit)

    def enterStatementSequence(self, ctx):
        # ctx is the context that should represent a list of statements
        for statement in ctx.statement():
            if isinstance(statement, OberonParser.AssignmentContext):
                self.enterAssignmentStatement(statement)
            elif isinstance(statement, OberonParser.IfStatementContext):
                self.enterIfStatement(statement)
            elif isinstance(statement, OberonParser.WhileStatementContext):
                self.enterWhileStatement(statement)
            elif isinstance(statement, OberonParser.StatementContext):
                self.enterStatement(statement)
            else:
                print(f"Unknown statement type: {type(statement)}")

    # Placeholder for enterAssignmentStatement
    def enterAssignmentStatement(self, ctx):
        pass

    # Placeholder for enterIfStatement
    def enterIfStatement(self, ctx):
        pass

    # Placeholder for enterProcedureCall
    def enterProcedureCall(self, ctx):
        pass

    def enterStatement(self, ctx: OberonParser.StatementContext):
        if hasattr(ctx, 'procedureCall'):
            self.enterProcedureCall(ctx.procedureCall())
        else:
            print(f"Unhandled statement type in enterStatement: {type(ctx)}")

    def enterForStatement(self, ctx: OberonParser.ForStatementContext):
        var_name = ctx.ID().getText()
        if var_name not in self.symbols:
            var_type = ir.IntType(32)
            var = self.builder.alloca(var_type, name=var_name)
            self.symbols[var_name] = var


def compile_oberon_code(oberon_code):
    input_stream = InputStream(oberon_code)
    lexer = OberonLexer(input_stream)
    stream = CommonTokenStream(lexer)
    parser = OberonParser(stream)
    tree = parser.module()
    llvm_listener = OberonToLLVM()
    walker = ParseTreeWalker()
    walker.walk(llvm_listener, tree)
    return llvm_listener.module


def main():
    if len(sys.argv) != 2:
        print("Usage: python oberon_compiler.py <source>")
        sys.exit(1)

    source_file = sys.argv[1]
    with open(source_file, 'r') as file:
        oberon_code = file.read()

    llvm_module = compile_oberon_code(oberon_code)
    llvm_ir = str(llvm_module)

    print("LLVM IR:")
    print(llvm_ir)

    # Save LLVM IR to a file
    llvm_ir_file = "output.ll"
    with open(llvm_ir_file, 'w') as f:
        f.write(llvm_ir)

    binding.initialize()
    binding.initialize_native_target()
    binding.initialize_native_asmprinter()

    target = binding.Target.from_default_triple()
    target_machine = target.create_target_machine()

    mod = binding.parse_assembly(llvm_ir)
    mod.verify()

    # Create object file from LLVM IR
    obj_file = "output.o"
    with open(obj_file, 'wb') as f:
        f.write(target_machine.emit_object(mod))

    # Link the object file to create an executable
    exe_file = "output"
    subprocess.run(["gcc", "-o", exe_file, obj_file])

if __name__ == "__main__":
    main()