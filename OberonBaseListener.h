
// Generated from Oberon.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "OberonListener.h"


/**
 * This class provides an empty implementation of OberonListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  OberonBaseListener : public OberonListener {
public:

  virtual void enterIdent(OberonParser::IdentContext * /*ctx*/) override { }
  virtual void exitIdent(OberonParser::IdentContext * /*ctx*/) override { }

  virtual void enterQualident(OberonParser::QualidentContext * /*ctx*/) override { }
  virtual void exitQualident(OberonParser::QualidentContext * /*ctx*/) override { }

  virtual void enterIdentdef(OberonParser::IdentdefContext * /*ctx*/) override { }
  virtual void exitIdentdef(OberonParser::IdentdefContext * /*ctx*/) override { }

  virtual void enterInteger(OberonParser::IntegerContext * /*ctx*/) override { }
  virtual void exitInteger(OberonParser::IntegerContext * /*ctx*/) override { }

  virtual void enterReal(OberonParser::RealContext * /*ctx*/) override { }
  virtual void exitReal(OberonParser::RealContext * /*ctx*/) override { }

  virtual void enterNumber(OberonParser::NumberContext * /*ctx*/) override { }
  virtual void exitNumber(OberonParser::NumberContext * /*ctx*/) override { }

  virtual void enterConstDeclaration(OberonParser::ConstDeclarationContext * /*ctx*/) override { }
  virtual void exitConstDeclaration(OberonParser::ConstDeclarationContext * /*ctx*/) override { }

  virtual void enterConstExpression(OberonParser::ConstExpressionContext * /*ctx*/) override { }
  virtual void exitConstExpression(OberonParser::ConstExpressionContext * /*ctx*/) override { }

  virtual void enterTypeDeclaration(OberonParser::TypeDeclarationContext * /*ctx*/) override { }
  virtual void exitTypeDeclaration(OberonParser::TypeDeclarationContext * /*ctx*/) override { }

  virtual void enterType_(OberonParser::Type_Context * /*ctx*/) override { }
  virtual void exitType_(OberonParser::Type_Context * /*ctx*/) override { }

  virtual void enterArrayType(OberonParser::ArrayTypeContext * /*ctx*/) override { }
  virtual void exitArrayType(OberonParser::ArrayTypeContext * /*ctx*/) override { }

  virtual void enterLength(OberonParser::LengthContext * /*ctx*/) override { }
  virtual void exitLength(OberonParser::LengthContext * /*ctx*/) override { }

  virtual void enterIdentList(OberonParser::IdentListContext * /*ctx*/) override { }
  virtual void exitIdentList(OberonParser::IdentListContext * /*ctx*/) override { }

  virtual void enterVariableDeclaration(OberonParser::VariableDeclarationContext * /*ctx*/) override { }
  virtual void exitVariableDeclaration(OberonParser::VariableDeclarationContext * /*ctx*/) override { }

  virtual void enterExpression(OberonParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(OberonParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterRelation(OberonParser::RelationContext * /*ctx*/) override { }
  virtual void exitRelation(OberonParser::RelationContext * /*ctx*/) override { }

  virtual void enterSimpleExpression(OberonParser::SimpleExpressionContext * /*ctx*/) override { }
  virtual void exitSimpleExpression(OberonParser::SimpleExpressionContext * /*ctx*/) override { }

  virtual void enterAddOperator(OberonParser::AddOperatorContext * /*ctx*/) override { }
  virtual void exitAddOperator(OberonParser::AddOperatorContext * /*ctx*/) override { }

  virtual void enterTerm(OberonParser::TermContext * /*ctx*/) override { }
  virtual void exitTerm(OberonParser::TermContext * /*ctx*/) override { }

  virtual void enterMulOperator(OberonParser::MulOperatorContext * /*ctx*/) override { }
  virtual void exitMulOperator(OberonParser::MulOperatorContext * /*ctx*/) override { }

  virtual void enterFactor(OberonParser::FactorContext * /*ctx*/) override { }
  virtual void exitFactor(OberonParser::FactorContext * /*ctx*/) override { }

  virtual void enterDesignator(OberonParser::DesignatorContext * /*ctx*/) override { }
  virtual void exitDesignator(OberonParser::DesignatorContext * /*ctx*/) override { }

  virtual void enterSelector(OberonParser::SelectorContext * /*ctx*/) override { }
  virtual void exitSelector(OberonParser::SelectorContext * /*ctx*/) override { }

  virtual void enterSet_(OberonParser::Set_Context * /*ctx*/) override { }
  virtual void exitSet_(OberonParser::Set_Context * /*ctx*/) override { }

  virtual void enterElement(OberonParser::ElementContext * /*ctx*/) override { }
  virtual void exitElement(OberonParser::ElementContext * /*ctx*/) override { }

  virtual void enterExpList(OberonParser::ExpListContext * /*ctx*/) override { }
  virtual void exitExpList(OberonParser::ExpListContext * /*ctx*/) override { }

  virtual void enterActualParameters(OberonParser::ActualParametersContext * /*ctx*/) override { }
  virtual void exitActualParameters(OberonParser::ActualParametersContext * /*ctx*/) override { }

  virtual void enterStatement(OberonParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(OberonParser::StatementContext * /*ctx*/) override { }

  virtual void enterAssignment(OberonParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(OberonParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterStatementSequence(OberonParser::StatementSequenceContext * /*ctx*/) override { }
  virtual void exitStatementSequence(OberonParser::StatementSequenceContext * /*ctx*/) override { }

  virtual void enterIfStatement(OberonParser::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(OberonParser::IfStatementContext * /*ctx*/) override { }

  virtual void enterWhileStatement(OberonParser::WhileStatementContext * /*ctx*/) override { }
  virtual void exitWhileStatement(OberonParser::WhileStatementContext * /*ctx*/) override { }

  virtual void enterForStatement(OberonParser::ForStatementContext * /*ctx*/) override { }
  virtual void exitForStatement(OberonParser::ForStatementContext * /*ctx*/) override { }

  virtual void enterDeclarationSequence(OberonParser::DeclarationSequenceContext * /*ctx*/) override { }
  virtual void exitDeclarationSequence(OberonParser::DeclarationSequenceContext * /*ctx*/) override { }

  virtual void enterModule(OberonParser::ModuleContext * /*ctx*/) override { }
  virtual void exitModule(OberonParser::ModuleContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

