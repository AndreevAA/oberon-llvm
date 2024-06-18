
// Generated from Oberon.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "OberonVisitor.h"


/**
 * This class provides an empty implementation of OberonVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  OberonBaseVisitor : public OberonVisitor {
public:

  virtual std::any visitIdent(OberonParser::IdentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQualident(OberonParser::QualidentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentdef(OberonParser::IdentdefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInteger(OberonParser::IntegerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReal(OberonParser::RealContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumber(OberonParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstDeclaration(OberonParser::ConstDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstExpression(OberonParser::ConstExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeDeclaration(OberonParser::TypeDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType_(OberonParser::Type_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrayType(OberonParser::ArrayTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLength(OberonParser::LengthContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentList(OberonParser::IdentListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariableDeclaration(OberonParser::VariableDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(OberonParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelation(OberonParser::RelationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleExpression(OberonParser::SimpleExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddOperator(OberonParser::AddOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTerm(OberonParser::TermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMulOperator(OberonParser::MulOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFactor(OberonParser::FactorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDesignator(OberonParser::DesignatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelector(OberonParser::SelectorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSet_(OberonParser::Set_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElement(OberonParser::ElementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpList(OberonParser::ExpListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitActualParameters(OberonParser::ActualParametersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(OberonParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment(OberonParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatementSequence(OberonParser::StatementSequenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfStatement(OberonParser::IfStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhileStatement(OberonParser::WhileStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForStatement(OberonParser::ForStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclarationSequence(OberonParser::DeclarationSequenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModule(OberonParser::ModuleContext *ctx) override {
    return visitChildren(ctx);
  }


};

