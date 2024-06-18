
// Generated from Oberon.g4 by ANTLR 4.11.1


#include "OberonListener.h"
#include "OberonVisitor.h"

#include "OberonParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct OberonParserStaticData final {
  OberonParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  OberonParserStaticData(const OberonParserStaticData&) = delete;
  OberonParserStaticData(OberonParserStaticData&&) = delete;
  OberonParserStaticData& operator=(const OberonParserStaticData&) = delete;
  OberonParserStaticData& operator=(OberonParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag oberonParserOnceFlag;
OberonParserStaticData *oberonParserStaticData = nullptr;

void oberonParserInitialize() {
  assert(oberonParserStaticData == nullptr);
  auto staticData = std::make_unique<OberonParserStaticData>(
    std::vector<std::string>{
      "ident", "qualident", "identdef", "integer", "real", "number", "constDeclaration", 
      "constExpression", "typeDeclaration", "type_", "arrayType", "length", 
      "identList", "variableDeclaration", "expression", "relation", "simpleExpression", 
      "addOperator", "term", "mulOperator", "factor", "designator", "selector", 
      "set_", "element", "expList", "actualParameters", "statement", "assignment", 
      "statementSequence", "ifStatement", "whileStatement", "forStatement", 
      "declarationSequence", "module"
    },
    std::vector<std::string>{
      "", "'*'", "'.'", "'='", "','", "':'", "'#'", "'<'", "'<='", "'>'", 
      "'>='", "'+'", "'-'", "'/'", "'&'", "'('", "')'", "'~'", "'['", "']'", 
      "'{'", "'}'", "'..'", "':='", "';'", "'ARRAY'", "'OF'", "'END'", "'TO'", 
      "'OR'", "'DIV'", "'MOD'", "'NIL'", "'TRUE'", "'FALSE'", "'IF'", "'THEN'", 
      "'ELSIF'", "'ELSE'", "'CASE'", "'WHILE'", "'DO'", "'FOR'", "'BY'", 
      "'BEGIN'", "'RETURN'", "'CONST'", "'TYPE'", "'VAR'", "'MODULE'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "ARRAY", "OF", "END", "TO", "OR", 
      "DIV", "MOD", "NIL", "TRUE", "FALSE", "IF", "THEN", "ELSIF", "ELSE", 
      "CASE", "WHILE", "DO", "FOR", "BY", "BEGIN", "RETURN", "CONST", "TYPE", 
      "VAR", "MODULE", "STRING", "IDENT", "LETTER", "DIGIT", "COMMENT", 
      "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,55,344,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,1,0,1,
  	0,1,1,1,1,1,2,1,2,3,2,77,8,2,1,3,4,3,80,8,3,11,3,12,3,81,1,4,4,4,85,8,
  	4,11,4,12,4,86,1,4,1,4,5,4,91,8,4,10,4,12,4,94,9,4,1,5,1,5,3,5,98,8,5,
  	1,6,1,6,1,6,1,6,1,7,1,7,1,8,1,8,1,8,1,8,1,9,1,9,3,9,112,8,9,1,10,1,10,
  	1,10,1,10,1,10,1,11,1,11,1,12,1,12,1,12,5,12,124,8,12,10,12,12,12,127,
  	9,12,1,13,1,13,1,13,1,13,1,14,1,14,1,14,1,14,3,14,137,8,14,1,15,1,15,
  	1,16,3,16,142,8,16,1,16,1,16,1,16,1,16,5,16,148,8,16,10,16,12,16,151,
  	9,16,1,17,1,17,1,18,1,18,1,18,1,18,5,18,159,8,18,10,18,12,18,162,9,18,
  	1,19,1,19,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,3,20,174,8,20,1,20,
  	1,20,1,20,1,20,1,20,1,20,3,20,182,8,20,1,21,1,21,5,21,186,8,21,10,21,
  	12,21,189,9,21,1,22,1,22,1,22,1,22,1,23,1,23,1,23,1,23,5,23,199,8,23,
  	10,23,12,23,202,9,23,3,23,204,8,23,1,23,1,23,1,24,1,24,1,24,3,24,211,
  	8,24,1,25,1,25,1,25,5,25,216,8,25,10,25,12,25,219,9,25,1,26,1,26,3,26,
  	223,8,26,1,26,1,26,1,27,1,27,1,27,1,27,3,27,231,8,27,1,28,1,28,1,28,1,
  	28,1,29,1,29,1,29,5,29,240,8,29,10,29,12,29,243,9,29,1,30,1,30,1,30,1,
  	30,1,30,1,30,1,30,1,30,1,30,5,30,254,8,30,10,30,12,30,257,9,30,1,30,1,
  	30,3,30,261,8,30,1,30,1,30,1,31,1,31,1,31,1,31,1,31,1,31,1,31,1,31,1,
  	31,5,31,274,8,31,10,31,12,31,277,9,31,1,31,1,31,1,32,1,32,1,32,1,32,1,
  	32,1,32,1,32,1,32,3,32,289,8,32,1,32,1,32,1,32,1,32,1,33,1,33,1,33,1,
  	33,5,33,299,8,33,10,33,12,33,302,9,33,3,33,304,8,33,1,33,1,33,1,33,1,
  	33,5,33,310,8,33,10,33,12,33,313,9,33,3,33,315,8,33,1,33,1,33,1,33,1,
  	33,5,33,321,8,33,10,33,12,33,324,9,33,3,33,326,8,33,1,34,1,34,1,34,1,
  	34,1,34,1,34,3,34,334,8,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,
  	34,0,0,35,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,
  	44,46,48,50,52,54,56,58,60,62,64,66,68,0,4,2,0,3,3,6,10,1,0,11,12,2,0,
  	11,12,29,29,3,0,1,1,13,14,30,31,350,0,70,1,0,0,0,2,72,1,0,0,0,4,74,1,
  	0,0,0,6,79,1,0,0,0,8,84,1,0,0,0,10,97,1,0,0,0,12,99,1,0,0,0,14,103,1,
  	0,0,0,16,105,1,0,0,0,18,111,1,0,0,0,20,113,1,0,0,0,22,118,1,0,0,0,24,
  	120,1,0,0,0,26,128,1,0,0,0,28,132,1,0,0,0,30,138,1,0,0,0,32,141,1,0,0,
  	0,34,152,1,0,0,0,36,154,1,0,0,0,38,163,1,0,0,0,40,181,1,0,0,0,42,183,
  	1,0,0,0,44,190,1,0,0,0,46,194,1,0,0,0,48,207,1,0,0,0,50,212,1,0,0,0,52,
  	220,1,0,0,0,54,230,1,0,0,0,56,232,1,0,0,0,58,236,1,0,0,0,60,244,1,0,0,
  	0,62,264,1,0,0,0,64,280,1,0,0,0,66,303,1,0,0,0,68,327,1,0,0,0,70,71,5,
  	51,0,0,71,1,1,0,0,0,72,73,3,0,0,0,73,3,1,0,0,0,74,76,3,0,0,0,75,77,5,
  	1,0,0,76,75,1,0,0,0,76,77,1,0,0,0,77,5,1,0,0,0,78,80,5,53,0,0,79,78,1,
  	0,0,0,80,81,1,0,0,0,81,79,1,0,0,0,81,82,1,0,0,0,82,7,1,0,0,0,83,85,5,
  	53,0,0,84,83,1,0,0,0,85,86,1,0,0,0,86,84,1,0,0,0,86,87,1,0,0,0,87,88,
  	1,0,0,0,88,92,5,2,0,0,89,91,5,53,0,0,90,89,1,0,0,0,91,94,1,0,0,0,92,90,
  	1,0,0,0,92,93,1,0,0,0,93,9,1,0,0,0,94,92,1,0,0,0,95,98,3,6,3,0,96,98,
  	3,8,4,0,97,95,1,0,0,0,97,96,1,0,0,0,98,11,1,0,0,0,99,100,3,4,2,0,100,
  	101,5,3,0,0,101,102,3,14,7,0,102,13,1,0,0,0,103,104,3,28,14,0,104,15,
  	1,0,0,0,105,106,3,4,2,0,106,107,5,3,0,0,107,108,3,18,9,0,108,17,1,0,0,
  	0,109,112,3,2,1,0,110,112,3,20,10,0,111,109,1,0,0,0,111,110,1,0,0,0,112,
  	19,1,0,0,0,113,114,5,25,0,0,114,115,3,22,11,0,115,116,5,26,0,0,116,117,
  	3,18,9,0,117,21,1,0,0,0,118,119,3,14,7,0,119,23,1,0,0,0,120,125,3,4,2,
  	0,121,122,5,4,0,0,122,124,3,4,2,0,123,121,1,0,0,0,124,127,1,0,0,0,125,
  	123,1,0,0,0,125,126,1,0,0,0,126,25,1,0,0,0,127,125,1,0,0,0,128,129,3,
  	24,12,0,129,130,5,5,0,0,130,131,3,18,9,0,131,27,1,0,0,0,132,136,3,32,
  	16,0,133,134,3,30,15,0,134,135,3,32,16,0,135,137,1,0,0,0,136,133,1,0,
  	0,0,136,137,1,0,0,0,137,29,1,0,0,0,138,139,7,0,0,0,139,31,1,0,0,0,140,
  	142,7,1,0,0,141,140,1,0,0,0,141,142,1,0,0,0,142,143,1,0,0,0,143,149,3,
  	36,18,0,144,145,3,34,17,0,145,146,3,36,18,0,146,148,1,0,0,0,147,144,1,
  	0,0,0,148,151,1,0,0,0,149,147,1,0,0,0,149,150,1,0,0,0,150,33,1,0,0,0,
  	151,149,1,0,0,0,152,153,7,2,0,0,153,35,1,0,0,0,154,160,3,40,20,0,155,
  	156,3,38,19,0,156,157,3,40,20,0,157,159,1,0,0,0,158,155,1,0,0,0,159,162,
  	1,0,0,0,160,158,1,0,0,0,160,161,1,0,0,0,161,37,1,0,0,0,162,160,1,0,0,
  	0,163,164,7,3,0,0,164,39,1,0,0,0,165,182,3,10,5,0,166,182,5,50,0,0,167,
  	182,5,32,0,0,168,182,5,33,0,0,169,182,5,34,0,0,170,182,3,46,23,0,171,
  	173,3,42,21,0,172,174,3,52,26,0,173,172,1,0,0,0,173,174,1,0,0,0,174,182,
  	1,0,0,0,175,176,5,15,0,0,176,177,3,28,14,0,177,178,5,16,0,0,178,182,1,
  	0,0,0,179,180,5,17,0,0,180,182,3,40,20,0,181,165,1,0,0,0,181,166,1,0,
  	0,0,181,167,1,0,0,0,181,168,1,0,0,0,181,169,1,0,0,0,181,170,1,0,0,0,181,
  	171,1,0,0,0,181,175,1,0,0,0,181,179,1,0,0,0,182,41,1,0,0,0,183,187,3,
  	2,1,0,184,186,3,44,22,0,185,184,1,0,0,0,186,189,1,0,0,0,187,185,1,0,0,
  	0,187,188,1,0,0,0,188,43,1,0,0,0,189,187,1,0,0,0,190,191,5,18,0,0,191,
  	192,3,50,25,0,192,193,5,19,0,0,193,45,1,0,0,0,194,203,5,20,0,0,195,200,
  	3,48,24,0,196,197,5,4,0,0,197,199,3,48,24,0,198,196,1,0,0,0,199,202,1,
  	0,0,0,200,198,1,0,0,0,200,201,1,0,0,0,201,204,1,0,0,0,202,200,1,0,0,0,
  	203,195,1,0,0,0,203,204,1,0,0,0,204,205,1,0,0,0,205,206,5,21,0,0,206,
  	47,1,0,0,0,207,210,3,28,14,0,208,209,5,22,0,0,209,211,3,28,14,0,210,208,
  	1,0,0,0,210,211,1,0,0,0,211,49,1,0,0,0,212,217,3,28,14,0,213,214,5,4,
  	0,0,214,216,3,28,14,0,215,213,1,0,0,0,216,219,1,0,0,0,217,215,1,0,0,0,
  	217,218,1,0,0,0,218,51,1,0,0,0,219,217,1,0,0,0,220,222,5,15,0,0,221,223,
  	3,50,25,0,222,221,1,0,0,0,222,223,1,0,0,0,223,224,1,0,0,0,224,225,5,16,
  	0,0,225,53,1,0,0,0,226,231,3,56,28,0,227,231,3,60,30,0,228,231,3,62,31,
  	0,229,231,3,64,32,0,230,226,1,0,0,0,230,227,1,0,0,0,230,228,1,0,0,0,230,
  	229,1,0,0,0,230,231,1,0,0,0,231,55,1,0,0,0,232,233,3,42,21,0,233,234,
  	5,23,0,0,234,235,3,28,14,0,235,57,1,0,0,0,236,241,3,54,27,0,237,238,5,
  	24,0,0,238,240,3,54,27,0,239,237,1,0,0,0,240,243,1,0,0,0,241,239,1,0,
  	0,0,241,242,1,0,0,0,242,59,1,0,0,0,243,241,1,0,0,0,244,245,5,35,0,0,245,
  	246,3,28,14,0,246,247,5,36,0,0,247,255,3,58,29,0,248,249,5,37,0,0,249,
  	250,3,28,14,0,250,251,5,36,0,0,251,252,3,58,29,0,252,254,1,0,0,0,253,
  	248,1,0,0,0,254,257,1,0,0,0,255,253,1,0,0,0,255,256,1,0,0,0,256,260,1,
  	0,0,0,257,255,1,0,0,0,258,259,5,38,0,0,259,261,3,58,29,0,260,258,1,0,
  	0,0,260,261,1,0,0,0,261,262,1,0,0,0,262,263,5,27,0,0,263,61,1,0,0,0,264,
  	265,5,40,0,0,265,266,3,28,14,0,266,267,5,41,0,0,267,275,3,58,29,0,268,
  	269,5,37,0,0,269,270,3,28,14,0,270,271,5,41,0,0,271,272,3,58,29,0,272,
  	274,1,0,0,0,273,268,1,0,0,0,274,277,1,0,0,0,275,273,1,0,0,0,275,276,1,
  	0,0,0,276,278,1,0,0,0,277,275,1,0,0,0,278,279,5,27,0,0,279,63,1,0,0,0,
  	280,281,5,42,0,0,281,282,3,0,0,0,282,283,5,23,0,0,283,284,3,28,14,0,284,
  	285,5,28,0,0,285,288,3,28,14,0,286,287,5,43,0,0,287,289,3,14,7,0,288,
  	286,1,0,0,0,288,289,1,0,0,0,289,290,1,0,0,0,290,291,5,41,0,0,291,292,
  	3,58,29,0,292,293,5,27,0,0,293,65,1,0,0,0,294,300,5,46,0,0,295,296,3,
  	12,6,0,296,297,5,24,0,0,297,299,1,0,0,0,298,295,1,0,0,0,299,302,1,0,0,
  	0,300,298,1,0,0,0,300,301,1,0,0,0,301,304,1,0,0,0,302,300,1,0,0,0,303,
  	294,1,0,0,0,303,304,1,0,0,0,304,314,1,0,0,0,305,311,5,47,0,0,306,307,
  	3,16,8,0,307,308,5,24,0,0,308,310,1,0,0,0,309,306,1,0,0,0,310,313,1,0,
  	0,0,311,309,1,0,0,0,311,312,1,0,0,0,312,315,1,0,0,0,313,311,1,0,0,0,314,
  	305,1,0,0,0,314,315,1,0,0,0,315,325,1,0,0,0,316,322,5,48,0,0,317,318,
  	3,26,13,0,318,319,5,24,0,0,319,321,1,0,0,0,320,317,1,0,0,0,321,324,1,
  	0,0,0,322,320,1,0,0,0,322,323,1,0,0,0,323,326,1,0,0,0,324,322,1,0,0,0,
  	325,316,1,0,0,0,325,326,1,0,0,0,326,67,1,0,0,0,327,328,5,49,0,0,328,329,
  	3,0,0,0,329,330,5,24,0,0,330,333,3,66,33,0,331,332,5,44,0,0,332,334,3,
  	58,29,0,333,331,1,0,0,0,333,334,1,0,0,0,334,335,1,0,0,0,335,336,5,45,
  	0,0,336,337,3,40,20,0,337,338,5,24,0,0,338,339,5,27,0,0,339,340,3,0,0,
  	0,340,341,5,2,0,0,341,342,5,0,0,1,342,69,1,0,0,0,32,76,81,86,92,97,111,
  	125,136,141,149,160,173,181,187,200,203,210,217,222,230,241,255,260,275,
  	288,300,303,311,314,322,325,333
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  oberonParserStaticData = staticData.release();
}

}

OberonParser::OberonParser(TokenStream *input) : OberonParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

OberonParser::OberonParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  OberonParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *oberonParserStaticData->atn, oberonParserStaticData->decisionToDFA, oberonParserStaticData->sharedContextCache, options);
}

OberonParser::~OberonParser() {
  delete _interpreter;
}

const atn::ATN& OberonParser::getATN() const {
  return *oberonParserStaticData->atn;
}

std::string OberonParser::getGrammarFileName() const {
  return "Oberon.g4";
}

const std::vector<std::string>& OberonParser::getRuleNames() const {
  return oberonParserStaticData->ruleNames;
}

const dfa::Vocabulary& OberonParser::getVocabulary() const {
  return oberonParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView OberonParser::getSerializedATN() const {
  return oberonParserStaticData->serializedATN;
}


//----------------- IdentContext ------------------------------------------------------------------

OberonParser::IdentContext::IdentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OberonParser::IdentContext::IDENT() {
  return getToken(OberonParser::IDENT, 0);
}


size_t OberonParser::IdentContext::getRuleIndex() const {
  return OberonParser::RuleIdent;
}

void OberonParser::IdentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdent(this);
}

void OberonParser::IdentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdent(this);
}


std::any OberonParser::IdentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OberonVisitor*>(visitor))
    return parserVisitor->visitIdent(this);
  else
    return visitor->visitChildren(this);
}

OberonParser::IdentContext* OberonParser::ident() {
  IdentContext *_localctx = _tracker.createInstance<IdentContext>(_ctx, getState());
  enterRule(_localctx, 0, OberonParser::RuleIdent);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(70);
    match(OberonParser::IDENT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QualidentContext ------------------------------------------------------------------

OberonParser::QualidentContext::QualidentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OberonParser::IdentContext* OberonParser::QualidentContext::ident() {
  return getRuleContext<OberonParser::IdentContext>(0);
}


size_t OberonParser::QualidentContext::getRuleIndex() const {
  return OberonParser::RuleQualident;
}

void OberonParser::QualidentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQualident(this);
}

void OberonParser::QualidentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQualident(this);
}


std::any OberonParser::QualidentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OberonVisitor*>(visitor))
    return parserVisitor->visitQualident(this);
  else
    return visitor->visitChildren(this);
}

OberonParser::QualidentContext* OberonParser::qualident() {
  QualidentContext *_localctx = _tracker.createInstance<QualidentContext>(_ctx, getState());
  enterRule(_localctx, 2, OberonParser::RuleQualident);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(72);
    ident();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentdefContext ------------------------------------------------------------------

OberonParser::IdentdefContext::IdentdefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OberonParser::IdentContext* OberonParser::IdentdefContext::ident() {
  return getRuleContext<OberonParser::IdentContext>(0);
}


size_t OberonParser::IdentdefContext::getRuleIndex() const {
  return OberonParser::RuleIdentdef;
}

void OberonParser::IdentdefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentdef(this);
}

void OberonParser::IdentdefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentdef(this);
}


std::any OberonParser::IdentdefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OberonVisitor*>(visitor))
    return parserVisitor->visitIdentdef(this);
  else
    return visitor->visitChildren(this);
}

OberonParser::IdentdefContext* OberonParser::identdef() {
  IdentdefContext *_localctx = _tracker.createInstance<IdentdefContext>(_ctx, getState());
  enterRule(_localctx, 4, OberonParser::RuleIdentdef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(74);
    ident();
    setState(76);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == OberonParser::T__0) {
      setState(75);
      match(OberonParser::T__0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntegerContext ------------------------------------------------------------------

OberonParser::IntegerContext::IntegerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> OberonParser::IntegerContext::DIGIT() {
  return getTokens(OberonParser::DIGIT);
}

tree::TerminalNode* OberonParser::IntegerContext::DIGIT(size_t i) {
  return getToken(OberonParser::DIGIT, i);
}


size_t OberonParser::IntegerContext::getRuleIndex() const {
  return OberonParser::RuleInteger;
}

void OberonParser::IntegerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInteger(this);
}

void OberonParser::IntegerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInteger(this);
}


std::any OberonParser::IntegerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OberonVisitor*>(visitor))
    return parserVisitor->visitInteger(this);
  else
    return visitor->visitChildren(this);
}

OberonParser::IntegerContext* OberonParser::integer() {
  IntegerContext *_localctx = _tracker.createInstance<IntegerContext>(_ctx, getState());
  enterRule(_localctx, 6, OberonParser::RuleInteger);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(79); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(78);
      match(OberonParser::DIGIT);
      setState(81); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == OberonParser::DIGIT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RealContext ------------------------------------------------------------------

OberonParser::RealContext::RealContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> OberonParser::RealContext::DIGIT() {
  return getTokens(OberonParser::DIGIT);
}

tree::TerminalNode* OberonParser::RealContext::DIGIT(size_t i) {
  return getToken(OberonParser::DIGIT, i);
}


size_t OberonParser::RealContext::getRuleIndex() const {
  return OberonParser::RuleReal;
}

void OberonParser::RealContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReal(this);
}

void OberonParser::RealContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReal(this);
}


std::any OberonParser::RealContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OberonVisitor*>(visitor))
    return parserVisitor->visitReal(this);
  else
    return visitor->visitChildren(this);
}

OberonParser::RealContext* OberonParser::real() {
  RealContext *_localctx = _tracker.createInstance<RealContext>(_ctx, getState());
  enterRule(_localctx, 8, OberonParser::RuleReal);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(84); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(83);
      match(OberonParser::DIGIT);
      setState(86); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == OberonParser::DIGIT);
    setState(88);
    match(OberonParser::T__1);
    setState(92);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == OberonParser::DIGIT) {
      setState(89);
      match(OberonParser::DIGIT);
      setState(94);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

OberonParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OberonParser::IntegerContext* OberonParser::NumberContext::integer() {
  return getRuleContext<OberonParser::IntegerContext>(0);
}

OberonParser::RealContext* OberonParser::NumberContext::real() {
  return getRuleContext<OberonParser::RealContext>(0);
}


size_t OberonParser::NumberContext::getRuleIndex() const {
  return OberonParser::RuleNumber;
}

void OberonParser::NumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumber(this);
}

void OberonParser::NumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumber(this);
}


std::any OberonParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OberonVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}

OberonParser::NumberContext* OberonParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 10, OberonParser::RuleNumber);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(97);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(95);
      integer();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(96);
      real();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstDeclarationContext ------------------------------------------------------------------

OberonParser::ConstDeclarationContext::ConstDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OberonParser::IdentdefContext* OberonParser::ConstDeclarationContext::identdef() {
  return getRuleContext<OberonParser::IdentdefContext>(0);
}

OberonParser::ConstExpressionContext* OberonParser::ConstDeclarationContext::constExpression() {
  return getRuleContext<OberonParser::ConstExpressionContext>(0);
}


size_t OberonParser::ConstDeclarationContext::getRuleIndex() const {
  return OberonParser::RuleConstDeclaration;
}

void OberonParser::ConstDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstDeclaration(this);
}

void OberonParser::ConstDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstDeclaration(this);
}


std::any OberonParser::ConstDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OberonVisitor*>(visitor))
    return parserVisitor->visitConstDeclaration(this);
  else
    return visitor->visitChildren(this);
}

OberonParser::ConstDeclarationContext* OberonParser::constDeclaration() {
  ConstDeclarationContext *_localctx = _tracker.createInstance<ConstDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 12, OberonParser::RuleConstDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(99);
    identdef();
    setState(100);
    match(OberonParser::T__2);
    setState(101);
    constExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstExpressionContext ------------------------------------------------------------------

OberonParser::ConstExpressionContext::ConstExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OberonParser::ExpressionContext* OberonParser::ConstExpressionContext::expression() {
  return getRuleContext<OberonParser::ExpressionContext>(0);
}


size_t OberonParser::ConstExpressionContext::getRuleIndex() const {
  return OberonParser::RuleConstExpression;
}

void OberonParser::ConstExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstExpression(this);
}

void OberonParser::ConstExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstExpression(this);
}


std::any OberonParser::ConstExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OberonVisitor*>(visitor))
    return parserVisitor->visitConstExpression(this);
  else
    return visitor->visitChildren(this);
}

OberonParser::ConstExpressionContext* OberonParser::constExpression() {
  ConstExpressionContext *_localctx = _tracker.createInstance<ConstExpressionContext>(_ctx, getState());
  enterRule(_localctx, 14, OberonParser::RuleConstExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(103);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeDeclarationContext ------------------------------------------------------------------

OberonParser::TypeDeclarationContext::TypeDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OberonParser::IdentdefContext* OberonParser::TypeDeclarationContext::identdef() {
  return getRuleContext<OberonParser::IdentdefContext>(0);
}

OberonParser::Type_Context* OberonParser::TypeDeclarationContext::type_() {
  return getRuleContext<OberonParser::Type_Context>(0);
}


size_t OberonParser::TypeDeclarationContext::getRuleIndex() const {
  return OberonParser::RuleTypeDeclaration;
}

void OberonParser::TypeDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeDeclaration(this);
}

void OberonParser::TypeDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeDeclaration(this);
}


std::any OberonParser::TypeDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OberonVisitor*>(visitor))
    return parserVisitor->visitTypeDeclaration(this);
  else
    return visitor->visitChildren(this);
}

OberonParser::TypeDeclarationContext* OberonParser::typeDeclaration() {
  TypeDeclarationContext *_localctx = _tracker.createInstance<TypeDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 16, OberonParser::RuleTypeDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(105);
    identdef();
    setState(106);
    match(OberonParser::T__2);
    setState(107);
    type_();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_Context ------------------------------------------------------------------

OberonParser::Type_Context::Type_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OberonParser::QualidentContext* OberonParser::Type_Context::qualident() {
  return getRuleContext<OberonParser::QualidentContext>(0);
}

OberonParser::ArrayTypeContext* OberonParser::Type_Context::arrayType() {
  return getRuleContext<OberonParser::ArrayTypeContext>(0);
}


size_t OberonParser::Type_Context::getRuleIndex() const {
  return OberonParser::RuleType_;
}

void OberonParser::Type_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType_(this);
}

void OberonParser::Type_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType_(this);
}


std::any OberonParser::Type_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OberonVisitor*>(visitor))
    return parserVisitor->visitType_(this);
  else
    return visitor->visitChildren(this);
}

OberonParser::Type_Context* OberonParser::type_() {
  Type_Context *_localctx = _tracker.createInstance<Type_Context>(_ctx, getState());
  enterRule(_localctx, 18, OberonParser::RuleType_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(111);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case OberonParser::IDENT: {
        enterOuterAlt(_localctx, 1);
        setState(109);
        qualident();
        break;
      }

      case OberonParser::ARRAY: {
        enterOuterAlt(_localctx, 2);
        setState(110);
        arrayType();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayTypeContext ------------------------------------------------------------------

OberonParser::ArrayTypeContext::ArrayTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OberonParser::ArrayTypeContext::ARRAY() {
  return getToken(OberonParser::ARRAY, 0);
}

OberonParser::LengthContext* OberonParser::ArrayTypeContext::length() {
  return getRuleContext<OberonParser::LengthContext>(0);
}

tree::TerminalNode* OberonParser::ArrayTypeContext::OF() {
  return getToken(OberonParser::OF, 0);
}

OberonParser::Type_Context* OberonParser::ArrayTypeContext::type_() {
  return getRuleContext<OberonParser::Type_Context>(0);
}


size_t OberonParser::ArrayTypeContext::getRuleIndex() const {
  return OberonParser::RuleArrayType;
}

void OberonParser::ArrayTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayType(this);
}

void OberonParser::ArrayTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayType(this);
}


std::any OberonParser::ArrayTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OberonVisitor*>(visitor))
    return parserVisitor->visitArrayType(this);
  else
    return visitor->visitChildren(this);
}

OberonParser::ArrayTypeContext* OberonParser::arrayType() {
  ArrayTypeContext *_localctx = _tracker.createInstance<ArrayTypeContext>(_ctx, getState());
  enterRule(_localctx, 20, OberonParser::RuleArrayType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(113);
    match(OberonParser::ARRAY);
    setState(114);
    length();
    setState(115);
    match(OberonParser::OF);
    setState(116);
    type_();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LengthContext ------------------------------------------------------------------

OberonParser::LengthContext::LengthContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OberonParser::ConstExpressionContext* OberonParser::LengthContext::constExpression() {
  return getRuleContext<OberonParser::ConstExpressionContext>(0);
}


size_t OberonParser::LengthContext::getRuleIndex() const {
  return OberonParser::RuleLength;
}

void OberonParser::LengthContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLength(this);
}

void OberonParser::LengthContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLength(this);
}


std::any OberonParser::LengthContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OberonVisitor*>(visitor))
    return parserVisitor->visitLength(this);
  else
    return visitor->visitChildren(this);
}

OberonParser::LengthContext* OberonParser::length() {
  LengthContext *_localctx = _tracker.createInstance<LengthContext>(_ctx, getState());
  enterRule(_localctx, 22, OberonParser::RuleLength);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(118);
    constExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentListContext ------------------------------------------------------------------

OberonParser::IdentListContext::IdentListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<OberonParser::IdentdefContext *> OberonParser::IdentListContext::identdef() {
  return getRuleContexts<OberonParser::IdentdefContext>();
}

OberonParser::IdentdefContext* OberonParser::IdentListContext::identdef(size_t i) {
  return getRuleContext<OberonParser::IdentdefContext>(i);
}


size_t OberonParser::IdentListContext::getRuleIndex() const {
  return OberonParser::RuleIdentList;
}

void OberonParser::IdentListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentList(this);
}

void OberonParser::IdentListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentList(this);
}


std::any OberonParser::IdentListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OberonVisitor*>(visitor))
    return parserVisitor->visitIdentList(this);
  else
    return visitor->visitChildren(this);
}

OberonParser::IdentListContext* OberonParser::identList() {
  IdentListContext *_localctx = _tracker.createInstance<IdentListContext>(_ctx, getState());
  enterRule(_localctx, 24, OberonParser::RuleIdentList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(120);
    identdef();
    setState(125);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == OberonParser::T__3) {
      setState(121);
      match(OberonParser::T__3);
      setState(122);
      identdef();
      setState(127);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationContext ------------------------------------------------------------------

OberonParser::VariableDeclarationContext::VariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OberonParser::IdentListContext* OberonParser::VariableDeclarationContext::identList() {
  return getRuleContext<OberonParser::IdentListContext>(0);
}

OberonParser::Type_Context* OberonParser::VariableDeclarationContext::type_() {
  return getRuleContext<OberonParser::Type_Context>(0);
}


size_t OberonParser::VariableDeclarationContext::getRuleIndex() const {
  return OberonParser::RuleVariableDeclaration;
}

void OberonParser::VariableDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclaration(this);
}

void OberonParser::VariableDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclaration(this);
}


std::any OberonParser::VariableDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OberonVisitor*>(visitor))
    return parserVisitor->visitVariableDeclaration(this);
  else
    return visitor->visitChildren(this);
}

OberonParser::VariableDeclarationContext* OberonParser::variableDeclaration() {
  VariableDeclarationContext *_localctx = _tracker.createInstance<VariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 26, OberonParser::RuleVariableDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(128);
    identList();
    setState(129);
    match(OberonParser::T__4);
    setState(130);
    type_();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

OberonParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<OberonParser::SimpleExpressionContext *> OberonParser::ExpressionContext::simpleExpression() {
  return getRuleContexts<OberonParser::SimpleExpressionContext>();
}

OberonParser::SimpleExpressionContext* OberonParser::ExpressionContext::simpleExpression(size_t i) {
  return getRuleContext<OberonParser::SimpleExpressionContext>(i);
}

OberonParser::RelationContext* OberonParser::ExpressionContext::relation() {
  return getRuleContext<OberonParser::RelationContext>(0);
}


size_t OberonParser::ExpressionContext::getRuleIndex() const {
  return OberonParser::RuleExpression;
}

void OberonParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void OberonParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


std::any OberonParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OberonVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

OberonParser::ExpressionContext* OberonParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 28, OberonParser::RuleExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(132);
    simpleExpression();
    setState(136);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1992) != 0) {
      setState(133);
      relation();
      setState(134);
      simpleExpression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RelationContext ------------------------------------------------------------------

OberonParser::RelationContext::RelationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t OberonParser::RelationContext::getRuleIndex() const {
  return OberonParser::RuleRelation;
}

void OberonParser::RelationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelation(this);
}

void OberonParser::RelationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelation(this);
}


std::any OberonParser::RelationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OberonVisitor*>(visitor))
    return parserVisitor->visitRelation(this);
  else
    return visitor->visitChildren(this);
}

OberonParser::RelationContext* OberonParser::relation() {
  RelationContext *_localctx = _tracker.createInstance<RelationContext>(_ctx, getState());
  enterRule(_localctx, 30, OberonParser::RuleRelation);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(138);
    _la = _input->LA(1);
    if (!(((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1992) != 0)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleExpressionContext ------------------------------------------------------------------

OberonParser::SimpleExpressionContext::SimpleExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<OberonParser::TermContext *> OberonParser::SimpleExpressionContext::term() {
  return getRuleContexts<OberonParser::TermContext>();
}

OberonParser::TermContext* OberonParser::SimpleExpressionContext::term(size_t i) {
  return getRuleContext<OberonParser::TermContext>(i);
}

std::vector<OberonParser::AddOperatorContext *> OberonParser::SimpleExpressionContext::addOperator() {
  return getRuleContexts<OberonParser::AddOperatorContext>();
}

OberonParser::AddOperatorContext* OberonParser::SimpleExpressionContext::addOperator(size_t i) {
  return getRuleContext<OberonParser::AddOperatorContext>(i);
}


size_t OberonParser::SimpleExpressionContext::getRuleIndex() const {
  return OberonParser::RuleSimpleExpression;
}

void OberonParser::SimpleExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpleExpression(this);
}

void OberonParser::SimpleExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpleExpression(this);
}


std::any OberonParser::SimpleExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OberonVisitor*>(visitor))
    return parserVisitor->visitSimpleExpression(this);
  else
    return visitor->visitChildren(this);
}

OberonParser::SimpleExpressionContext* OberonParser::simpleExpression() {
  SimpleExpressionContext *_localctx = _tracker.createInstance<SimpleExpressionContext>(_ctx, getState());
  enterRule(_localctx, 32, OberonParser::RuleSimpleExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(141);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == OberonParser::T__10

    || _la == OberonParser::T__11) {
      setState(140);
      _la = _input->LA(1);
      if (!(_la == OberonParser::T__10

      || _la == OberonParser::T__11)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(143);
    term();
    setState(149);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 536877056) != 0) {
      setState(144);
      addOperator();
      setState(145);
      term();
      setState(151);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddOperatorContext ------------------------------------------------------------------

OberonParser::AddOperatorContext::AddOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OberonParser::AddOperatorContext::OR() {
  return getToken(OberonParser::OR, 0);
}


size_t OberonParser::AddOperatorContext::getRuleIndex() const {
  return OberonParser::RuleAddOperator;
}

void OberonParser::AddOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddOperator(this);
}

void OberonParser::AddOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddOperator(this);
}


std::any OberonParser::AddOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OberonVisitor*>(visitor))
    return parserVisitor->visitAddOperator(this);
  else
    return visitor->visitChildren(this);
}

OberonParser::AddOperatorContext* OberonParser::addOperator() {
  AddOperatorContext *_localctx = _tracker.createInstance<AddOperatorContext>(_ctx, getState());
  enterRule(_localctx, 34, OberonParser::RuleAddOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(152);
    _la = _input->LA(1);
    if (!(((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 536877056) != 0)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TermContext ------------------------------------------------------------------

OberonParser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<OberonParser::FactorContext *> OberonParser::TermContext::factor() {
  return getRuleContexts<OberonParser::FactorContext>();
}

OberonParser::FactorContext* OberonParser::TermContext::factor(size_t i) {
  return getRuleContext<OberonParser::FactorContext>(i);
}

std::vector<OberonParser::MulOperatorContext *> OberonParser::TermContext::mulOperator() {
  return getRuleContexts<OberonParser::MulOperatorContext>();
}

OberonParser::MulOperatorContext* OberonParser::TermContext::mulOperator(size_t i) {
  return getRuleContext<OberonParser::MulOperatorContext>(i);
}


size_t OberonParser::TermContext::getRuleIndex() const {
  return OberonParser::RuleTerm;
}

void OberonParser::TermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTerm(this);
}

void OberonParser::TermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTerm(this);
}


std::any OberonParser::TermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OberonVisitor*>(visitor))
    return parserVisitor->visitTerm(this);
  else
    return visitor->visitChildren(this);
}

OberonParser::TermContext* OberonParser::term() {
  TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, getState());
  enterRule(_localctx, 36, OberonParser::RuleTerm);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(154);
    factor();
    setState(160);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3221250050) != 0) {
      setState(155);
      mulOperator();
      setState(156);
      factor();
      setState(162);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MulOperatorContext ------------------------------------------------------------------

OberonParser::MulOperatorContext::MulOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OberonParser::MulOperatorContext::DIV() {
  return getToken(OberonParser::DIV, 0);
}

tree::TerminalNode* OberonParser::MulOperatorContext::MOD() {
  return getToken(OberonParser::MOD, 0);
}


size_t OberonParser::MulOperatorContext::getRuleIndex() const {
  return OberonParser::RuleMulOperator;
}

void OberonParser::MulOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulOperator(this);
}

void OberonParser::MulOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulOperator(this);
}


std::any OberonParser::MulOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OberonVisitor*>(visitor))
    return parserVisitor->visitMulOperator(this);
  else
    return visitor->visitChildren(this);
}

OberonParser::MulOperatorContext* OberonParser::mulOperator() {
  MulOperatorContext *_localctx = _tracker.createInstance<MulOperatorContext>(_ctx, getState());
  enterRule(_localctx, 38, OberonParser::RuleMulOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(163);
    _la = _input->LA(1);
    if (!(((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3221250050) != 0)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FactorContext ------------------------------------------------------------------

OberonParser::FactorContext::FactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OberonParser::NumberContext* OberonParser::FactorContext::number() {
  return getRuleContext<OberonParser::NumberContext>(0);
}

tree::TerminalNode* OberonParser::FactorContext::STRING() {
  return getToken(OberonParser::STRING, 0);
}

tree::TerminalNode* OberonParser::FactorContext::NIL() {
  return getToken(OberonParser::NIL, 0);
}

tree::TerminalNode* OberonParser::FactorContext::TRUE() {
  return getToken(OberonParser::TRUE, 0);
}

tree::TerminalNode* OberonParser::FactorContext::FALSE() {
  return getToken(OberonParser::FALSE, 0);
}

OberonParser::Set_Context* OberonParser::FactorContext::set_() {
  return getRuleContext<OberonParser::Set_Context>(0);
}

OberonParser::DesignatorContext* OberonParser::FactorContext::designator() {
  return getRuleContext<OberonParser::DesignatorContext>(0);
}

OberonParser::ActualParametersContext* OberonParser::FactorContext::actualParameters() {
  return getRuleContext<OberonParser::ActualParametersContext>(0);
}

OberonParser::ExpressionContext* OberonParser::FactorContext::expression() {
  return getRuleContext<OberonParser::ExpressionContext>(0);
}

OberonParser::FactorContext* OberonParser::FactorContext::factor() {
  return getRuleContext<OberonParser::FactorContext>(0);
}


size_t OberonParser::FactorContext::getRuleIndex() const {
  return OberonParser::RuleFactor;
}

void OberonParser::FactorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFactor(this);
}

void OberonParser::FactorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFactor(this);
}


std::any OberonParser::FactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OberonVisitor*>(visitor))
    return parserVisitor->visitFactor(this);
  else
    return visitor->visitChildren(this);
}

OberonParser::FactorContext* OberonParser::factor() {
  FactorContext *_localctx = _tracker.createInstance<FactorContext>(_ctx, getState());
  enterRule(_localctx, 40, OberonParser::RuleFactor);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(181);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case OberonParser::DIGIT: {
        enterOuterAlt(_localctx, 1);
        setState(165);
        number();
        break;
      }

      case OberonParser::STRING: {
        enterOuterAlt(_localctx, 2);
        setState(166);
        match(OberonParser::STRING);
        break;
      }

      case OberonParser::NIL: {
        enterOuterAlt(_localctx, 3);
        setState(167);
        match(OberonParser::NIL);
        break;
      }

      case OberonParser::TRUE: {
        enterOuterAlt(_localctx, 4);
        setState(168);
        match(OberonParser::TRUE);
        break;
      }

      case OberonParser::FALSE: {
        enterOuterAlt(_localctx, 5);
        setState(169);
        match(OberonParser::FALSE);
        break;
      }

      case OberonParser::T__19: {
        enterOuterAlt(_localctx, 6);
        setState(170);
        set_();
        break;
      }

      case OberonParser::IDENT: {
        enterOuterAlt(_localctx, 7);
        setState(171);
        designator();
        setState(173);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == OberonParser::T__14) {
          setState(172);
          actualParameters();
        }
        break;
      }

      case OberonParser::T__14: {
        enterOuterAlt(_localctx, 8);
        setState(175);
        match(OberonParser::T__14);
        setState(176);
        expression();
        setState(177);
        match(OberonParser::T__15);
        break;
      }

      case OberonParser::T__16: {
        enterOuterAlt(_localctx, 9);
        setState(179);
        match(OberonParser::T__16);
        setState(180);
        factor();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DesignatorContext ------------------------------------------------------------------

OberonParser::DesignatorContext::DesignatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OberonParser::QualidentContext* OberonParser::DesignatorContext::qualident() {
  return getRuleContext<OberonParser::QualidentContext>(0);
}

std::vector<OberonParser::SelectorContext *> OberonParser::DesignatorContext::selector() {
  return getRuleContexts<OberonParser::SelectorContext>();
}

OberonParser::SelectorContext* OberonParser::DesignatorContext::selector(size_t i) {
  return getRuleContext<OberonParser::SelectorContext>(i);
}


size_t OberonParser::DesignatorContext::getRuleIndex() const {
  return OberonParser::RuleDesignator;
}

void OberonParser::DesignatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDesignator(this);
}

void OberonParser::DesignatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDesignator(this);
}


std::any OberonParser::DesignatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OberonVisitor*>(visitor))
    return parserVisitor->visitDesignator(this);
  else
    return visitor->visitChildren(this);
}

OberonParser::DesignatorContext* OberonParser::designator() {
  DesignatorContext *_localctx = _tracker.createInstance<DesignatorContext>(_ctx, getState());
  enterRule(_localctx, 42, OberonParser::RuleDesignator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(183);
    qualident();
    setState(187);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == OberonParser::T__17) {
      setState(184);
      selector();
      setState(189);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SelectorContext ------------------------------------------------------------------

OberonParser::SelectorContext::SelectorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OberonParser::ExpListContext* OberonParser::SelectorContext::expList() {
  return getRuleContext<OberonParser::ExpListContext>(0);
}


size_t OberonParser::SelectorContext::getRuleIndex() const {
  return OberonParser::RuleSelector;
}

void OberonParser::SelectorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSelector(this);
}

void OberonParser::SelectorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSelector(this);
}


std::any OberonParser::SelectorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OberonVisitor*>(visitor))
    return parserVisitor->visitSelector(this);
  else
    return visitor->visitChildren(this);
}

OberonParser::SelectorContext* OberonParser::selector() {
  SelectorContext *_localctx = _tracker.createInstance<SelectorContext>(_ctx, getState());
  enterRule(_localctx, 44, OberonParser::RuleSelector);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(190);
    match(OberonParser::T__17);
    setState(191);
    expList();
    setState(192);
    match(OberonParser::T__18);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Set_Context ------------------------------------------------------------------

OberonParser::Set_Context::Set_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<OberonParser::ElementContext *> OberonParser::Set_Context::element() {
  return getRuleContexts<OberonParser::ElementContext>();
}

OberonParser::ElementContext* OberonParser::Set_Context::element(size_t i) {
  return getRuleContext<OberonParser::ElementContext>(i);
}


size_t OberonParser::Set_Context::getRuleIndex() const {
  return OberonParser::RuleSet_;
}

void OberonParser::Set_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSet_(this);
}

void OberonParser::Set_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSet_(this);
}


std::any OberonParser::Set_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OberonVisitor*>(visitor))
    return parserVisitor->visitSet_(this);
  else
    return visitor->visitChildren(this);
}

OberonParser::Set_Context* OberonParser::set_() {
  Set_Context *_localctx = _tracker.createInstance<Set_Context>(_ctx, getState());
  enterRule(_localctx, 46, OberonParser::RuleSet_);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(194);
    match(OberonParser::T__19);
    setState(203);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 12384929041258496) != 0) {
      setState(195);
      element();
      setState(200);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == OberonParser::T__3) {
        setState(196);
        match(OberonParser::T__3);
        setState(197);
        element();
        setState(202);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(205);
    match(OberonParser::T__20);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElementContext ------------------------------------------------------------------

OberonParser::ElementContext::ElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<OberonParser::ExpressionContext *> OberonParser::ElementContext::expression() {
  return getRuleContexts<OberonParser::ExpressionContext>();
}

OberonParser::ExpressionContext* OberonParser::ElementContext::expression(size_t i) {
  return getRuleContext<OberonParser::ExpressionContext>(i);
}


size_t OberonParser::ElementContext::getRuleIndex() const {
  return OberonParser::RuleElement;
}

void OberonParser::ElementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElement(this);
}

void OberonParser::ElementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElement(this);
}


std::any OberonParser::ElementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OberonVisitor*>(visitor))
    return parserVisitor->visitElement(this);
  else
    return visitor->visitChildren(this);
}

OberonParser::ElementContext* OberonParser::element() {
  ElementContext *_localctx = _tracker.createInstance<ElementContext>(_ctx, getState());
  enterRule(_localctx, 48, OberonParser::RuleElement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(207);
    expression();
    setState(210);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == OberonParser::T__21) {
      setState(208);
      match(OberonParser::T__21);
      setState(209);
      expression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpListContext ------------------------------------------------------------------

OberonParser::ExpListContext::ExpListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<OberonParser::ExpressionContext *> OberonParser::ExpListContext::expression() {
  return getRuleContexts<OberonParser::ExpressionContext>();
}

OberonParser::ExpressionContext* OberonParser::ExpListContext::expression(size_t i) {
  return getRuleContext<OberonParser::ExpressionContext>(i);
}


size_t OberonParser::ExpListContext::getRuleIndex() const {
  return OberonParser::RuleExpList;
}

void OberonParser::ExpListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpList(this);
}

void OberonParser::ExpListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpList(this);
}


std::any OberonParser::ExpListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OberonVisitor*>(visitor))
    return parserVisitor->visitExpList(this);
  else
    return visitor->visitChildren(this);
}

OberonParser::ExpListContext* OberonParser::expList() {
  ExpListContext *_localctx = _tracker.createInstance<ExpListContext>(_ctx, getState());
  enterRule(_localctx, 50, OberonParser::RuleExpList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(212);
    expression();
    setState(217);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == OberonParser::T__3) {
      setState(213);
      match(OberonParser::T__3);
      setState(214);
      expression();
      setState(219);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ActualParametersContext ------------------------------------------------------------------

OberonParser::ActualParametersContext::ActualParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OberonParser::ExpListContext* OberonParser::ActualParametersContext::expList() {
  return getRuleContext<OberonParser::ExpListContext>(0);
}


size_t OberonParser::ActualParametersContext::getRuleIndex() const {
  return OberonParser::RuleActualParameters;
}

void OberonParser::ActualParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterActualParameters(this);
}

void OberonParser::ActualParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitActualParameters(this);
}


std::any OberonParser::ActualParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OberonVisitor*>(visitor))
    return parserVisitor->visitActualParameters(this);
  else
    return visitor->visitChildren(this);
}

OberonParser::ActualParametersContext* OberonParser::actualParameters() {
  ActualParametersContext *_localctx = _tracker.createInstance<ActualParametersContext>(_ctx, getState());
  enterRule(_localctx, 52, OberonParser::RuleActualParameters);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(220);
    match(OberonParser::T__14);
    setState(222);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 12384929041258496) != 0) {
      setState(221);
      expList();
    }
    setState(224);
    match(OberonParser::T__15);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

OberonParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OberonParser::AssignmentContext* OberonParser::StatementContext::assignment() {
  return getRuleContext<OberonParser::AssignmentContext>(0);
}

OberonParser::IfStatementContext* OberonParser::StatementContext::ifStatement() {
  return getRuleContext<OberonParser::IfStatementContext>(0);
}

OberonParser::WhileStatementContext* OberonParser::StatementContext::whileStatement() {
  return getRuleContext<OberonParser::WhileStatementContext>(0);
}

OberonParser::ForStatementContext* OberonParser::StatementContext::forStatement() {
  return getRuleContext<OberonParser::ForStatementContext>(0);
}


size_t OberonParser::StatementContext::getRuleIndex() const {
  return OberonParser::RuleStatement;
}

void OberonParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void OberonParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


std::any OberonParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OberonVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

OberonParser::StatementContext* OberonParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 54, OberonParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(230);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case OberonParser::IDENT: {
        setState(226);
        assignment();
        break;
      }

      case OberonParser::IF: {
        setState(227);
        ifStatement();
        break;
      }

      case OberonParser::WHILE: {
        setState(228);
        whileStatement();
        break;
      }

      case OberonParser::FOR: {
        setState(229);
        forStatement();
        break;
      }

      case OberonParser::T__23:
      case OberonParser::END:
      case OberonParser::ELSIF:
      case OberonParser::ELSE:
      case OberonParser::RETURN: {
        break;
      }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

OberonParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

OberonParser::DesignatorContext* OberonParser::AssignmentContext::designator() {
  return getRuleContext<OberonParser::DesignatorContext>(0);
}

OberonParser::ExpressionContext* OberonParser::AssignmentContext::expression() {
  return getRuleContext<OberonParser::ExpressionContext>(0);
}


size_t OberonParser::AssignmentContext::getRuleIndex() const {
  return OberonParser::RuleAssignment;
}

void OberonParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void OberonParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}


std::any OberonParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OberonVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}

OberonParser::AssignmentContext* OberonParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 56, OberonParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(232);
    designator();
    setState(233);
    match(OberonParser::T__22);
    setState(234);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementSequenceContext ------------------------------------------------------------------

OberonParser::StatementSequenceContext::StatementSequenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<OberonParser::StatementContext *> OberonParser::StatementSequenceContext::statement() {
  return getRuleContexts<OberonParser::StatementContext>();
}

OberonParser::StatementContext* OberonParser::StatementSequenceContext::statement(size_t i) {
  return getRuleContext<OberonParser::StatementContext>(i);
}


size_t OberonParser::StatementSequenceContext::getRuleIndex() const {
  return OberonParser::RuleStatementSequence;
}

void OberonParser::StatementSequenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatementSequence(this);
}

void OberonParser::StatementSequenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatementSequence(this);
}


std::any OberonParser::StatementSequenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OberonVisitor*>(visitor))
    return parserVisitor->visitStatementSequence(this);
  else
    return visitor->visitChildren(this);
}

OberonParser::StatementSequenceContext* OberonParser::statementSequence() {
  StatementSequenceContext *_localctx = _tracker.createInstance<StatementSequenceContext>(_ctx, getState());
  enterRule(_localctx, 58, OberonParser::RuleStatementSequence);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(236);
    statement();
    setState(241);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == OberonParser::T__23) {
      setState(237);
      match(OberonParser::T__23);
      setState(238);
      statement();
      setState(243);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

OberonParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OberonParser::IfStatementContext::IF() {
  return getToken(OberonParser::IF, 0);
}

std::vector<OberonParser::ExpressionContext *> OberonParser::IfStatementContext::expression() {
  return getRuleContexts<OberonParser::ExpressionContext>();
}

OberonParser::ExpressionContext* OberonParser::IfStatementContext::expression(size_t i) {
  return getRuleContext<OberonParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> OberonParser::IfStatementContext::THEN() {
  return getTokens(OberonParser::THEN);
}

tree::TerminalNode* OberonParser::IfStatementContext::THEN(size_t i) {
  return getToken(OberonParser::THEN, i);
}

std::vector<OberonParser::StatementSequenceContext *> OberonParser::IfStatementContext::statementSequence() {
  return getRuleContexts<OberonParser::StatementSequenceContext>();
}

OberonParser::StatementSequenceContext* OberonParser::IfStatementContext::statementSequence(size_t i) {
  return getRuleContext<OberonParser::StatementSequenceContext>(i);
}

tree::TerminalNode* OberonParser::IfStatementContext::END() {
  return getToken(OberonParser::END, 0);
}

std::vector<tree::TerminalNode *> OberonParser::IfStatementContext::ELSIF() {
  return getTokens(OberonParser::ELSIF);
}

tree::TerminalNode* OberonParser::IfStatementContext::ELSIF(size_t i) {
  return getToken(OberonParser::ELSIF, i);
}

tree::TerminalNode* OberonParser::IfStatementContext::ELSE() {
  return getToken(OberonParser::ELSE, 0);
}


size_t OberonParser::IfStatementContext::getRuleIndex() const {
  return OberonParser::RuleIfStatement;
}

void OberonParser::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}

void OberonParser::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}


std::any OberonParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OberonVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

OberonParser::IfStatementContext* OberonParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 60, OberonParser::RuleIfStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(244);
    match(OberonParser::IF);
    setState(245);
    expression();
    setState(246);
    match(OberonParser::THEN);
    setState(247);
    statementSequence();
    setState(255);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == OberonParser::ELSIF) {
      setState(248);
      match(OberonParser::ELSIF);
      setState(249);
      expression();
      setState(250);
      match(OberonParser::THEN);
      setState(251);
      statementSequence();
      setState(257);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(260);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == OberonParser::ELSE) {
      setState(258);
      match(OberonParser::ELSE);
      setState(259);
      statementSequence();
    }
    setState(262);
    match(OberonParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStatementContext ------------------------------------------------------------------

OberonParser::WhileStatementContext::WhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OberonParser::WhileStatementContext::WHILE() {
  return getToken(OberonParser::WHILE, 0);
}

std::vector<OberonParser::ExpressionContext *> OberonParser::WhileStatementContext::expression() {
  return getRuleContexts<OberonParser::ExpressionContext>();
}

OberonParser::ExpressionContext* OberonParser::WhileStatementContext::expression(size_t i) {
  return getRuleContext<OberonParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> OberonParser::WhileStatementContext::DO() {
  return getTokens(OberonParser::DO);
}

tree::TerminalNode* OberonParser::WhileStatementContext::DO(size_t i) {
  return getToken(OberonParser::DO, i);
}

std::vector<OberonParser::StatementSequenceContext *> OberonParser::WhileStatementContext::statementSequence() {
  return getRuleContexts<OberonParser::StatementSequenceContext>();
}

OberonParser::StatementSequenceContext* OberonParser::WhileStatementContext::statementSequence(size_t i) {
  return getRuleContext<OberonParser::StatementSequenceContext>(i);
}

tree::TerminalNode* OberonParser::WhileStatementContext::END() {
  return getToken(OberonParser::END, 0);
}

std::vector<tree::TerminalNode *> OberonParser::WhileStatementContext::ELSIF() {
  return getTokens(OberonParser::ELSIF);
}

tree::TerminalNode* OberonParser::WhileStatementContext::ELSIF(size_t i) {
  return getToken(OberonParser::ELSIF, i);
}


size_t OberonParser::WhileStatementContext::getRuleIndex() const {
  return OberonParser::RuleWhileStatement;
}

void OberonParser::WhileStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStatement(this);
}

void OberonParser::WhileStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStatement(this);
}


std::any OberonParser::WhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OberonVisitor*>(visitor))
    return parserVisitor->visitWhileStatement(this);
  else
    return visitor->visitChildren(this);
}

OberonParser::WhileStatementContext* OberonParser::whileStatement() {
  WhileStatementContext *_localctx = _tracker.createInstance<WhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 62, OberonParser::RuleWhileStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(264);
    match(OberonParser::WHILE);
    setState(265);
    expression();
    setState(266);
    match(OberonParser::DO);
    setState(267);
    statementSequence();
    setState(275);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == OberonParser::ELSIF) {
      setState(268);
      match(OberonParser::ELSIF);
      setState(269);
      expression();
      setState(270);
      match(OberonParser::DO);
      setState(271);
      statementSequence();
      setState(277);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(278);
    match(OberonParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStatementContext ------------------------------------------------------------------

OberonParser::ForStatementContext::ForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OberonParser::ForStatementContext::FOR() {
  return getToken(OberonParser::FOR, 0);
}

OberonParser::IdentContext* OberonParser::ForStatementContext::ident() {
  return getRuleContext<OberonParser::IdentContext>(0);
}

std::vector<OberonParser::ExpressionContext *> OberonParser::ForStatementContext::expression() {
  return getRuleContexts<OberonParser::ExpressionContext>();
}

OberonParser::ExpressionContext* OberonParser::ForStatementContext::expression(size_t i) {
  return getRuleContext<OberonParser::ExpressionContext>(i);
}

tree::TerminalNode* OberonParser::ForStatementContext::TO() {
  return getToken(OberonParser::TO, 0);
}

tree::TerminalNode* OberonParser::ForStatementContext::DO() {
  return getToken(OberonParser::DO, 0);
}

OberonParser::StatementSequenceContext* OberonParser::ForStatementContext::statementSequence() {
  return getRuleContext<OberonParser::StatementSequenceContext>(0);
}

tree::TerminalNode* OberonParser::ForStatementContext::END() {
  return getToken(OberonParser::END, 0);
}

tree::TerminalNode* OberonParser::ForStatementContext::BY() {
  return getToken(OberonParser::BY, 0);
}

OberonParser::ConstExpressionContext* OberonParser::ForStatementContext::constExpression() {
  return getRuleContext<OberonParser::ConstExpressionContext>(0);
}


size_t OberonParser::ForStatementContext::getRuleIndex() const {
  return OberonParser::RuleForStatement;
}

void OberonParser::ForStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForStatement(this);
}

void OberonParser::ForStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForStatement(this);
}


std::any OberonParser::ForStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OberonVisitor*>(visitor))
    return parserVisitor->visitForStatement(this);
  else
    return visitor->visitChildren(this);
}

OberonParser::ForStatementContext* OberonParser::forStatement() {
  ForStatementContext *_localctx = _tracker.createInstance<ForStatementContext>(_ctx, getState());
  enterRule(_localctx, 64, OberonParser::RuleForStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(280);
    match(OberonParser::FOR);
    setState(281);
    ident();
    setState(282);
    match(OberonParser::T__22);
    setState(283);
    expression();
    setState(284);
    match(OberonParser::TO);
    setState(285);
    expression();
    setState(288);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == OberonParser::BY) {
      setState(286);
      match(OberonParser::BY);
      setState(287);
      constExpression();
    }
    setState(290);
    match(OberonParser::DO);
    setState(291);
    statementSequence();
    setState(292);
    match(OberonParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationSequenceContext ------------------------------------------------------------------

OberonParser::DeclarationSequenceContext::DeclarationSequenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OberonParser::DeclarationSequenceContext::CONST() {
  return getToken(OberonParser::CONST, 0);
}

tree::TerminalNode* OberonParser::DeclarationSequenceContext::TYPE() {
  return getToken(OberonParser::TYPE, 0);
}

tree::TerminalNode* OberonParser::DeclarationSequenceContext::VAR() {
  return getToken(OberonParser::VAR, 0);
}

std::vector<OberonParser::ConstDeclarationContext *> OberonParser::DeclarationSequenceContext::constDeclaration() {
  return getRuleContexts<OberonParser::ConstDeclarationContext>();
}

OberonParser::ConstDeclarationContext* OberonParser::DeclarationSequenceContext::constDeclaration(size_t i) {
  return getRuleContext<OberonParser::ConstDeclarationContext>(i);
}

std::vector<OberonParser::TypeDeclarationContext *> OberonParser::DeclarationSequenceContext::typeDeclaration() {
  return getRuleContexts<OberonParser::TypeDeclarationContext>();
}

OberonParser::TypeDeclarationContext* OberonParser::DeclarationSequenceContext::typeDeclaration(size_t i) {
  return getRuleContext<OberonParser::TypeDeclarationContext>(i);
}

std::vector<OberonParser::VariableDeclarationContext *> OberonParser::DeclarationSequenceContext::variableDeclaration() {
  return getRuleContexts<OberonParser::VariableDeclarationContext>();
}

OberonParser::VariableDeclarationContext* OberonParser::DeclarationSequenceContext::variableDeclaration(size_t i) {
  return getRuleContext<OberonParser::VariableDeclarationContext>(i);
}


size_t OberonParser::DeclarationSequenceContext::getRuleIndex() const {
  return OberonParser::RuleDeclarationSequence;
}

void OberonParser::DeclarationSequenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationSequence(this);
}

void OberonParser::DeclarationSequenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationSequence(this);
}


std::any OberonParser::DeclarationSequenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OberonVisitor*>(visitor))
    return parserVisitor->visitDeclarationSequence(this);
  else
    return visitor->visitChildren(this);
}

OberonParser::DeclarationSequenceContext* OberonParser::declarationSequence() {
  DeclarationSequenceContext *_localctx = _tracker.createInstance<DeclarationSequenceContext>(_ctx, getState());
  enterRule(_localctx, 66, OberonParser::RuleDeclarationSequence);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(303);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == OberonParser::CONST) {
      setState(294);
      match(OberonParser::CONST);
      setState(300);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == OberonParser::IDENT) {
        setState(295);
        constDeclaration();
        setState(296);
        match(OberonParser::T__23);
        setState(302);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(314);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == OberonParser::TYPE) {
      setState(305);
      match(OberonParser::TYPE);
      setState(311);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == OberonParser::IDENT) {
        setState(306);
        typeDeclaration();
        setState(307);
        match(OberonParser::T__23);
        setState(313);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(325);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == OberonParser::VAR) {
      setState(316);
      match(OberonParser::VAR);
      setState(322);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == OberonParser::IDENT) {
        setState(317);
        variableDeclaration();
        setState(318);
        match(OberonParser::T__23);
        setState(324);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModuleContext ------------------------------------------------------------------

OberonParser::ModuleContext::ModuleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* OberonParser::ModuleContext::MODULE() {
  return getToken(OberonParser::MODULE, 0);
}

std::vector<OberonParser::IdentContext *> OberonParser::ModuleContext::ident() {
  return getRuleContexts<OberonParser::IdentContext>();
}

OberonParser::IdentContext* OberonParser::ModuleContext::ident(size_t i) {
  return getRuleContext<OberonParser::IdentContext>(i);
}

OberonParser::DeclarationSequenceContext* OberonParser::ModuleContext::declarationSequence() {
  return getRuleContext<OberonParser::DeclarationSequenceContext>(0);
}

tree::TerminalNode* OberonParser::ModuleContext::RETURN() {
  return getToken(OberonParser::RETURN, 0);
}

OberonParser::FactorContext* OberonParser::ModuleContext::factor() {
  return getRuleContext<OberonParser::FactorContext>(0);
}

tree::TerminalNode* OberonParser::ModuleContext::END() {
  return getToken(OberonParser::END, 0);
}

tree::TerminalNode* OberonParser::ModuleContext::EOF() {
  return getToken(OberonParser::EOF, 0);
}

tree::TerminalNode* OberonParser::ModuleContext::BEGIN() {
  return getToken(OberonParser::BEGIN, 0);
}

OberonParser::StatementSequenceContext* OberonParser::ModuleContext::statementSequence() {
  return getRuleContext<OberonParser::StatementSequenceContext>(0);
}


size_t OberonParser::ModuleContext::getRuleIndex() const {
  return OberonParser::RuleModule;
}

void OberonParser::ModuleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModule(this);
}

void OberonParser::ModuleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<OberonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModule(this);
}


std::any OberonParser::ModuleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<OberonVisitor*>(visitor))
    return parserVisitor->visitModule(this);
  else
    return visitor->visitChildren(this);
}

OberonParser::ModuleContext* OberonParser::module() {
  ModuleContext *_localctx = _tracker.createInstance<ModuleContext>(_ctx, getState());
  enterRule(_localctx, 68, OberonParser::RuleModule);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(327);
    match(OberonParser::MODULE);
    setState(328);
    ident();
    setState(329);
    match(OberonParser::T__23);
    setState(330);
    declarationSequence();
    setState(333);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == OberonParser::BEGIN) {
      setState(331);
      match(OberonParser::BEGIN);
      setState(332);
      statementSequence();
    }
    setState(335);
    match(OberonParser::RETURN);
    setState(336);
    factor();
    setState(337);
    match(OberonParser::T__23);
    setState(338);
    match(OberonParser::END);
    setState(339);
    ident();
    setState(340);
    match(OberonParser::T__1);
    setState(341);
    match(OberonParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void OberonParser::initialize() {
  ::antlr4::internal::call_once(oberonParserOnceFlag, oberonParserInitialize);
}
