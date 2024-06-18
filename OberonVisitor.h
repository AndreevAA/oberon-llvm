
// Generated from Oberon.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "OberonParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by OberonParser.
 */
class  OberonVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by OberonParser.
   */
    virtual std::any visitIdent(OberonParser::IdentContext *context) = 0;

    virtual std::any visitQualident(OberonParser::QualidentContext *context) = 0;

    virtual std::any visitIdentdef(OberonParser::IdentdefContext *context) = 0;

    virtual std::any visitInteger(OberonParser::IntegerContext *context) = 0;

    virtual std::any visitReal(OberonParser::RealContext *context) = 0;

    virtual std::any visitNumber(OberonParser::NumberContext *context) = 0;

    virtual std::any visitConstDeclaration(OberonParser::ConstDeclarationContext *context) = 0;

    virtual std::any visitConstExpression(OberonParser::ConstExpressionContext *context) = 0;

    virtual std::any visitTypeDeclaration(OberonParser::TypeDeclarationContext *context) = 0;

    virtual std::any visitType_(OberonParser::Type_Context *context) = 0;

    virtual std::any visitArrayType(OberonParser::ArrayTypeContext *context) = 0;

    virtual std::any visitLength(OberonParser::LengthContext *context) = 0;

    virtual std::any visitIdentList(OberonParser::IdentListContext *context) = 0;

    virtual std::any visitVariableDeclaration(OberonParser::VariableDeclarationContext *context) = 0;

    virtual std::any visitExpression(OberonParser::ExpressionContext *context) = 0;

    virtual std::any visitRelation(OberonParser::RelationContext *context) = 0;

    virtual std::any visitSimpleExpression(OberonParser::SimpleExpressionContext *context) = 0;

    virtual std::any visitAddOperator(OberonParser::AddOperatorContext *context) = 0;

    virtual std::any visitTerm(OberonParser::TermContext *context) = 0;

    virtual std::any visitMulOperator(OberonParser::MulOperatorContext *context) = 0;

    virtual std::any visitFactor(OberonParser::FactorContext *context) = 0;

    virtual std::any visitDesignator(OberonParser::DesignatorContext *context) = 0;

    virtual std::any visitSelector(OberonParser::SelectorContext *context) = 0;

    virtual std::any visitSet_(OberonParser::Set_Context *context) = 0;

    virtual std::any visitElement(OberonParser::ElementContext *context) = 0;

    virtual std::any visitExpList(OberonParser::ExpListContext *context) = 0;

    virtual std::any visitActualParameters(OberonParser::ActualParametersContext *context) = 0;

    virtual std::any visitStatement(OberonParser::StatementContext *context) = 0;

    virtual std::any visitAssignment(OberonParser::AssignmentContext *context) = 0;

    virtual std::any visitStatementSequence(OberonParser::StatementSequenceContext *context) = 0;

    virtual std::any visitIfStatement(OberonParser::IfStatementContext *context) = 0;

    virtual std::any visitWhileStatement(OberonParser::WhileStatementContext *context) = 0;

    virtual std::any visitForStatement(OberonParser::ForStatementContext *context) = 0;

    virtual std::any visitDeclarationSequence(OberonParser::DeclarationSequenceContext *context) = 0;

    virtual std::any visitModule(OberonParser::ModuleContext *context) = 0;


};

