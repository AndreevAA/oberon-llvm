
// Generated from Oberon.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "OberonParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by OberonParser.
 */
class  OberonListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterIdent(OberonParser::IdentContext *ctx) = 0;
  virtual void exitIdent(OberonParser::IdentContext *ctx) = 0;

  virtual void enterQualident(OberonParser::QualidentContext *ctx) = 0;
  virtual void exitQualident(OberonParser::QualidentContext *ctx) = 0;

  virtual void enterIdentdef(OberonParser::IdentdefContext *ctx) = 0;
  virtual void exitIdentdef(OberonParser::IdentdefContext *ctx) = 0;

  virtual void enterInteger(OberonParser::IntegerContext *ctx) = 0;
  virtual void exitInteger(OberonParser::IntegerContext *ctx) = 0;

  virtual void enterReal(OberonParser::RealContext *ctx) = 0;
  virtual void exitReal(OberonParser::RealContext *ctx) = 0;

  virtual void enterNumber(OberonParser::NumberContext *ctx) = 0;
  virtual void exitNumber(OberonParser::NumberContext *ctx) = 0;

  virtual void enterConstDeclaration(OberonParser::ConstDeclarationContext *ctx) = 0;
  virtual void exitConstDeclaration(OberonParser::ConstDeclarationContext *ctx) = 0;

  virtual void enterConstExpression(OberonParser::ConstExpressionContext *ctx) = 0;
  virtual void exitConstExpression(OberonParser::ConstExpressionContext *ctx) = 0;

  virtual void enterTypeDeclaration(OberonParser::TypeDeclarationContext *ctx) = 0;
  virtual void exitTypeDeclaration(OberonParser::TypeDeclarationContext *ctx) = 0;

  virtual void enterType_(OberonParser::Type_Context *ctx) = 0;
  virtual void exitType_(OberonParser::Type_Context *ctx) = 0;

  virtual void enterArrayType(OberonParser::ArrayTypeContext *ctx) = 0;
  virtual void exitArrayType(OberonParser::ArrayTypeContext *ctx) = 0;

  virtual void enterLength(OberonParser::LengthContext *ctx) = 0;
  virtual void exitLength(OberonParser::LengthContext *ctx) = 0;

  virtual void enterIdentList(OberonParser::IdentListContext *ctx) = 0;
  virtual void exitIdentList(OberonParser::IdentListContext *ctx) = 0;

  virtual void enterVariableDeclaration(OberonParser::VariableDeclarationContext *ctx) = 0;
  virtual void exitVariableDeclaration(OberonParser::VariableDeclarationContext *ctx) = 0;

  virtual void enterExpression(OberonParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(OberonParser::ExpressionContext *ctx) = 0;

  virtual void enterRelation(OberonParser::RelationContext *ctx) = 0;
  virtual void exitRelation(OberonParser::RelationContext *ctx) = 0;

  virtual void enterSimpleExpression(OberonParser::SimpleExpressionContext *ctx) = 0;
  virtual void exitSimpleExpression(OberonParser::SimpleExpressionContext *ctx) = 0;

  virtual void enterAddOperator(OberonParser::AddOperatorContext *ctx) = 0;
  virtual void exitAddOperator(OberonParser::AddOperatorContext *ctx) = 0;

  virtual void enterTerm(OberonParser::TermContext *ctx) = 0;
  virtual void exitTerm(OberonParser::TermContext *ctx) = 0;

  virtual void enterMulOperator(OberonParser::MulOperatorContext *ctx) = 0;
  virtual void exitMulOperator(OberonParser::MulOperatorContext *ctx) = 0;

  virtual void enterFactor(OberonParser::FactorContext *ctx) = 0;
  virtual void exitFactor(OberonParser::FactorContext *ctx) = 0;

  virtual void enterDesignator(OberonParser::DesignatorContext *ctx) = 0;
  virtual void exitDesignator(OberonParser::DesignatorContext *ctx) = 0;

  virtual void enterSelector(OberonParser::SelectorContext *ctx) = 0;
  virtual void exitSelector(OberonParser::SelectorContext *ctx) = 0;

  virtual void enterSet_(OberonParser::Set_Context *ctx) = 0;
  virtual void exitSet_(OberonParser::Set_Context *ctx) = 0;

  virtual void enterElement(OberonParser::ElementContext *ctx) = 0;
  virtual void exitElement(OberonParser::ElementContext *ctx) = 0;

  virtual void enterExpList(OberonParser::ExpListContext *ctx) = 0;
  virtual void exitExpList(OberonParser::ExpListContext *ctx) = 0;

  virtual void enterActualParameters(OberonParser::ActualParametersContext *ctx) = 0;
  virtual void exitActualParameters(OberonParser::ActualParametersContext *ctx) = 0;

  virtual void enterStatement(OberonParser::StatementContext *ctx) = 0;
  virtual void exitStatement(OberonParser::StatementContext *ctx) = 0;

  virtual void enterAssignment(OberonParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(OberonParser::AssignmentContext *ctx) = 0;

  virtual void enterStatementSequence(OberonParser::StatementSequenceContext *ctx) = 0;
  virtual void exitStatementSequence(OberonParser::StatementSequenceContext *ctx) = 0;

  virtual void enterIfStatement(OberonParser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(OberonParser::IfStatementContext *ctx) = 0;

  virtual void enterWhileStatement(OberonParser::WhileStatementContext *ctx) = 0;
  virtual void exitWhileStatement(OberonParser::WhileStatementContext *ctx) = 0;

  virtual void enterForStatement(OberonParser::ForStatementContext *ctx) = 0;
  virtual void exitForStatement(OberonParser::ForStatementContext *ctx) = 0;

  virtual void enterDeclarationSequence(OberonParser::DeclarationSequenceContext *ctx) = 0;
  virtual void exitDeclarationSequence(OberonParser::DeclarationSequenceContext *ctx) = 0;

  virtual void enterModule(OberonParser::ModuleContext *ctx) = 0;
  virtual void exitModule(OberonParser::ModuleContext *ctx) = 0;


};

