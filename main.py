import sys
from antlr4 import FileStream, CommonTokenStream
from llvmlite import ir, binding

from OberonLexer import OberonLexer
from OberonParser import OberonParser
from OberonVisitor import OberonVisitor

binding.initialize()
binding.initialize_native_target()
binding.initialize_native_asmprinter()  # Для вывода сгенерированного кода

class OberonLLVMVisitor(OberonVisitor):
    def __init__(self):
        self.builder = None
        self.module = ir.Module(name='oberon_module')
        self.module.triple = binding.get_default_triple()
        self.function = None
        
    def visitVarDecl(self, ctx:OberonParser.VariableDeclarationContext):
        var_name = ctx.Ident().getText()
        var_type = ctx.type().getText()  # Простой пример, необходимы доп. проверки и преобразования
        llvm_type = ir.IntType(32) if var_type == "INTEGER" else ir.VoidType()

        # Регистрация переменной в модуле
        g_var = ir.GlobalVariable(self.module, llvm_type, name=var_name)
        g_var.linkage = 'common'
        g_var.initializer = ir.Constant(llvm_type, 0)
        g_var.align = 4

    def visitAssignment(self, ctx:OberonParser.AssignmentContext):
        var_name = ctx.Ident().getText()
        value = int(ctx.expression().getText())  # Упрощенно, нужен другой visitor для выражений
        llvm_var = self.module.get_global(var_name)
        llvm_value = ir.Constant(ir.IntType(32), value)
        self.builder.store(llvm_value, llvm_var)

    def visitProcedureDeclaration(self, ctx:OberonParser.ProcedureDeclarationContext):
        func_name = ctx.Ident().getText()
        func_type = ir.FunctionType(ir.VoidType(), [])
        func = ir.Function(self.module, func_type, name=func_name)
        block = func.append_basic_block(name="entry")
        self.builder = ir.IRBuilder(block)
        self.builder.ret_void()

# Инициализация и вызов компиляции
def compile_oberon(file_path):
    input_stream = FileStream(file_path)
    lexer = OberonLexer(input_stream)
    stream = CommonTokenStream(lexer)
    parser = OberonParser(stream)
    tree = parser.module()

    visitor = OberonLLVMVisitor()
    visitor.visit(tree)

    # Сохранение кода в файл
    with open('output.ll', 'w') as f:
        f.write(str(visitor.module))

    # Вывод содержимого .ll файла
    print(visitor.module)

if __name__ == '__main__':
    if len(sys.argv) > 1:
        compile_oberon(sys.argv[1])