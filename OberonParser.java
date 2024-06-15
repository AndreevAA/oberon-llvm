// Generated from Oberon.g4 by ANTLR 4.9.3
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class OberonParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.9.3", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, T__10=11, T__11=12, T__12=13, T__13=14, T__14=15, T__15=16, T__16=17, 
		T__17=18, T__18=19, T__19=20, T__20=21, T__21=22, T__22=23, T__23=24, 
		ARRAY=25, OF=26, END=27, TO=28, OR=29, DIV=30, MOD=31, NIL=32, TRUE=33, 
		FALSE=34, IF=35, THEN=36, ELSIF=37, ELSE=38, CASE=39, WHILE=40, DO=41, 
		FOR=42, BY=43, BEGIN=44, RETURN=45, CONST=46, TYPE=47, VAR=48, MODULE=49, 
		STRING=50, IDENT=51, LETTER=52, DIGIT=53, COMMENT=54, WS=55;
	public static final int
		RULE_ident = 0, RULE_qualident = 1, RULE_identdef = 2, RULE_integer = 3, 
		RULE_real = 4, RULE_number = 5, RULE_constDeclaration = 6, RULE_constExpression = 7, 
		RULE_typeDeclaration = 8, RULE_type_ = 9, RULE_arrayType = 10, RULE_length = 11, 
		RULE_identList = 12, RULE_variableDeclaration = 13, RULE_expression = 14, 
		RULE_relation = 15, RULE_simpleExpression = 16, RULE_addOperator = 17, 
		RULE_term = 18, RULE_mulOperator = 19, RULE_factor = 20, RULE_designator = 21, 
		RULE_selector = 22, RULE_set_ = 23, RULE_element = 24, RULE_expList = 25, 
		RULE_actualParameters = 26, RULE_statement = 27, RULE_assignment = 28, 
		RULE_statementSequence = 29, RULE_ifStatement = 30, RULE_whileStatement = 31, 
		RULE_forStatement = 32, RULE_declarationSequence = 33, RULE_module = 34;
	private static String[] makeRuleNames() {
		return new String[] {
			"ident", "qualident", "identdef", "integer", "real", "number", "constDeclaration", 
			"constExpression", "typeDeclaration", "type_", "arrayType", "length", 
			"identList", "variableDeclaration", "expression", "relation", "simpleExpression", 
			"addOperator", "term", "mulOperator", "factor", "designator", "selector", 
			"set_", "element", "expList", "actualParameters", "statement", "assignment", 
			"statementSequence", "ifStatement", "whileStatement", "forStatement", 
			"declarationSequence", "module"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'*'", "'.'", "'='", "','", "':'", "'#'", "'<'", "'<='", "'>'", 
			"'>='", "'+'", "'-'", "'/'", "'&'", "'('", "')'", "'~'", "'['", "']'", 
			"'{'", "'}'", "'..'", "':='", "';'", "'ARRAY'", "'OF'", "'END'", "'TO'", 
			"'OR'", "'DIV'", "'MOD'", "'NIL'", "'TRUE'", "'FALSE'", "'IF'", "'THEN'", 
			"'ELSIF'", "'ELSE'", "'CASE'", "'WHILE'", "'DO'", "'FOR'", "'BY'", "'BEGIN'", 
			"'RETURN'", "'CONST'", "'TYPE'", "'VAR'", "'MODULE'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, "ARRAY", "OF", "END", "TO", "OR", "DIV", "MOD", "NIL", "TRUE", 
			"FALSE", "IF", "THEN", "ELSIF", "ELSE", "CASE", "WHILE", "DO", "FOR", 
			"BY", "BEGIN", "RETURN", "CONST", "TYPE", "VAR", "MODULE", "STRING", 
			"IDENT", "LETTER", "DIGIT", "COMMENT", "WS"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "Oberon.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public OberonParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	public static class IdentContext extends ParserRuleContext {
		public TerminalNode IDENT() { return getToken(OberonParser.IDENT, 0); }
		public IdentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ident; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).enterIdent(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).exitIdent(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof OberonVisitor ) return ((OberonVisitor<? extends T>)visitor).visitIdent(this);
			else return visitor.visitChildren(this);
		}
	}

	public final IdentContext ident() throws RecognitionException {
		IdentContext _localctx = new IdentContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_ident);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(70);
			match(IDENT);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class QualidentContext extends ParserRuleContext {
		public IdentContext ident() {
			return getRuleContext(IdentContext.class,0);
		}
		public QualidentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_qualident; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).enterQualident(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).exitQualident(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof OberonVisitor ) return ((OberonVisitor<? extends T>)visitor).visitQualident(this);
			else return visitor.visitChildren(this);
		}
	}

	public final QualidentContext qualident() throws RecognitionException {
		QualidentContext _localctx = new QualidentContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_qualident);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(72);
			ident();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IdentdefContext extends ParserRuleContext {
		public IdentContext ident() {
			return getRuleContext(IdentContext.class,0);
		}
		public IdentdefContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_identdef; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).enterIdentdef(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).exitIdentdef(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof OberonVisitor ) return ((OberonVisitor<? extends T>)visitor).visitIdentdef(this);
			else return visitor.visitChildren(this);
		}
	}

	public final IdentdefContext identdef() throws RecognitionException {
		IdentdefContext _localctx = new IdentdefContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_identdef);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(74);
			ident();
			setState(76);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__0) {
				{
				setState(75);
				match(T__0);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IntegerContext extends ParserRuleContext {
		public List<TerminalNode> DIGIT() { return getTokens(OberonParser.DIGIT); }
		public TerminalNode DIGIT(int i) {
			return getToken(OberonParser.DIGIT, i);
		}
		public IntegerContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_integer; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).enterInteger(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).exitInteger(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof OberonVisitor ) return ((OberonVisitor<? extends T>)visitor).visitInteger(this);
			else return visitor.visitChildren(this);
		}
	}

	public final IntegerContext integer() throws RecognitionException {
		IntegerContext _localctx = new IntegerContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_integer);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(79); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(78);
				match(DIGIT);
				}
				}
				setState(81); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==DIGIT );
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class RealContext extends ParserRuleContext {
		public List<TerminalNode> DIGIT() { return getTokens(OberonParser.DIGIT); }
		public TerminalNode DIGIT(int i) {
			return getToken(OberonParser.DIGIT, i);
		}
		public RealContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_real; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).enterReal(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).exitReal(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof OberonVisitor ) return ((OberonVisitor<? extends T>)visitor).visitReal(this);
			else return visitor.visitChildren(this);
		}
	}

	public final RealContext real() throws RecognitionException {
		RealContext _localctx = new RealContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_real);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(84); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(83);
				match(DIGIT);
				}
				}
				setState(86); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==DIGIT );
			setState(88);
			match(T__1);
			setState(92);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==DIGIT) {
				{
				{
				setState(89);
				match(DIGIT);
				}
				}
				setState(94);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NumberContext extends ParserRuleContext {
		public IntegerContext integer() {
			return getRuleContext(IntegerContext.class,0);
		}
		public RealContext real() {
			return getRuleContext(RealContext.class,0);
		}
		public NumberContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_number; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).enterNumber(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).exitNumber(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof OberonVisitor ) return ((OberonVisitor<? extends T>)visitor).visitNumber(this);
			else return visitor.visitChildren(this);
		}
	}

	public final NumberContext number() throws RecognitionException {
		NumberContext _localctx = new NumberContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_number);
		try {
			setState(97);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,4,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(95);
				integer();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(96);
				real();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ConstDeclarationContext extends ParserRuleContext {
		public IdentdefContext identdef() {
			return getRuleContext(IdentdefContext.class,0);
		}
		public ConstExpressionContext constExpression() {
			return getRuleContext(ConstExpressionContext.class,0);
		}
		public ConstDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_constDeclaration; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).enterConstDeclaration(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).exitConstDeclaration(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof OberonVisitor ) return ((OberonVisitor<? extends T>)visitor).visitConstDeclaration(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ConstDeclarationContext constDeclaration() throws RecognitionException {
		ConstDeclarationContext _localctx = new ConstDeclarationContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_constDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(99);
			identdef();
			setState(100);
			match(T__2);
			setState(101);
			constExpression();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ConstExpressionContext extends ParserRuleContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public ConstExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_constExpression; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).enterConstExpression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).exitConstExpression(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof OberonVisitor ) return ((OberonVisitor<? extends T>)visitor).visitConstExpression(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ConstExpressionContext constExpression() throws RecognitionException {
		ConstExpressionContext _localctx = new ConstExpressionContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_constExpression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(103);
			expression();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TypeDeclarationContext extends ParserRuleContext {
		public IdentdefContext identdef() {
			return getRuleContext(IdentdefContext.class,0);
		}
		public Type_Context type_() {
			return getRuleContext(Type_Context.class,0);
		}
		public TypeDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeDeclaration; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).enterTypeDeclaration(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).exitTypeDeclaration(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof OberonVisitor ) return ((OberonVisitor<? extends T>)visitor).visitTypeDeclaration(this);
			else return visitor.visitChildren(this);
		}
	}

	public final TypeDeclarationContext typeDeclaration() throws RecognitionException {
		TypeDeclarationContext _localctx = new TypeDeclarationContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_typeDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(105);
			identdef();
			setState(106);
			match(T__2);
			setState(107);
			type_();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Type_Context extends ParserRuleContext {
		public QualidentContext qualident() {
			return getRuleContext(QualidentContext.class,0);
		}
		public ArrayTypeContext arrayType() {
			return getRuleContext(ArrayTypeContext.class,0);
		}
		public Type_Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type_; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).enterType_(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).exitType_(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof OberonVisitor ) return ((OberonVisitor<? extends T>)visitor).visitType_(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Type_Context type_() throws RecognitionException {
		Type_Context _localctx = new Type_Context(_ctx, getState());
		enterRule(_localctx, 18, RULE_type_);
		try {
			setState(111);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case IDENT:
				enterOuterAlt(_localctx, 1);
				{
				setState(109);
				qualident();
				}
				break;
			case ARRAY:
				enterOuterAlt(_localctx, 2);
				{
				setState(110);
				arrayType();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ArrayTypeContext extends ParserRuleContext {
		public TerminalNode ARRAY() { return getToken(OberonParser.ARRAY, 0); }
		public LengthContext length() {
			return getRuleContext(LengthContext.class,0);
		}
		public TerminalNode OF() { return getToken(OberonParser.OF, 0); }
		public Type_Context type_() {
			return getRuleContext(Type_Context.class,0);
		}
		public ArrayTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_arrayType; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).enterArrayType(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).exitArrayType(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof OberonVisitor ) return ((OberonVisitor<? extends T>)visitor).visitArrayType(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ArrayTypeContext arrayType() throws RecognitionException {
		ArrayTypeContext _localctx = new ArrayTypeContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_arrayType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(113);
			match(ARRAY);
			setState(114);
			length();
			setState(115);
			match(OF);
			setState(116);
			type_();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LengthContext extends ParserRuleContext {
		public ConstExpressionContext constExpression() {
			return getRuleContext(ConstExpressionContext.class,0);
		}
		public LengthContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_length; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).enterLength(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).exitLength(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof OberonVisitor ) return ((OberonVisitor<? extends T>)visitor).visitLength(this);
			else return visitor.visitChildren(this);
		}
	}

	public final LengthContext length() throws RecognitionException {
		LengthContext _localctx = new LengthContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_length);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(118);
			constExpression();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IdentListContext extends ParserRuleContext {
		public List<IdentdefContext> identdef() {
			return getRuleContexts(IdentdefContext.class);
		}
		public IdentdefContext identdef(int i) {
			return getRuleContext(IdentdefContext.class,i);
		}
		public IdentListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_identList; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).enterIdentList(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).exitIdentList(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof OberonVisitor ) return ((OberonVisitor<? extends T>)visitor).visitIdentList(this);
			else return visitor.visitChildren(this);
		}
	}

	public final IdentListContext identList() throws RecognitionException {
		IdentListContext _localctx = new IdentListContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_identList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(120);
			identdef();
			setState(125);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__3) {
				{
				{
				setState(121);
				match(T__3);
				setState(122);
				identdef();
				}
				}
				setState(127);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class VariableDeclarationContext extends ParserRuleContext {
		public IdentListContext identList() {
			return getRuleContext(IdentListContext.class,0);
		}
		public Type_Context type_() {
			return getRuleContext(Type_Context.class,0);
		}
		public VariableDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variableDeclaration; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).enterVariableDeclaration(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).exitVariableDeclaration(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof OberonVisitor ) return ((OberonVisitor<? extends T>)visitor).visitVariableDeclaration(this);
			else return visitor.visitChildren(this);
		}
	}

	public final VariableDeclarationContext variableDeclaration() throws RecognitionException {
		VariableDeclarationContext _localctx = new VariableDeclarationContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_variableDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(128);
			identList();
			setState(129);
			match(T__4);
			setState(130);
			type_();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExpressionContext extends ParserRuleContext {
		public List<SimpleExpressionContext> simpleExpression() {
			return getRuleContexts(SimpleExpressionContext.class);
		}
		public SimpleExpressionContext simpleExpression(int i) {
			return getRuleContext(SimpleExpressionContext.class,i);
		}
		public RelationContext relation() {
			return getRuleContext(RelationContext.class,0);
		}
		public ExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expression; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).enterExpression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).exitExpression(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof OberonVisitor ) return ((OberonVisitor<? extends T>)visitor).visitExpression(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ExpressionContext expression() throws RecognitionException {
		ExpressionContext _localctx = new ExpressionContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_expression);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(132);
			simpleExpression();
			setState(136);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__2) | (1L << T__5) | (1L << T__6) | (1L << T__7) | (1L << T__8) | (1L << T__9))) != 0)) {
				{
				setState(133);
				relation();
				setState(134);
				simpleExpression();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class RelationContext extends ParserRuleContext {
		public RelationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_relation; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).enterRelation(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).exitRelation(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof OberonVisitor ) return ((OberonVisitor<? extends T>)visitor).visitRelation(this);
			else return visitor.visitChildren(this);
		}
	}

	public final RelationContext relation() throws RecognitionException {
		RelationContext _localctx = new RelationContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_relation);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(138);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__2) | (1L << T__5) | (1L << T__6) | (1L << T__7) | (1L << T__8) | (1L << T__9))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SimpleExpressionContext extends ParserRuleContext {
		public List<TermContext> term() {
			return getRuleContexts(TermContext.class);
		}
		public TermContext term(int i) {
			return getRuleContext(TermContext.class,i);
		}
		public List<AddOperatorContext> addOperator() {
			return getRuleContexts(AddOperatorContext.class);
		}
		public AddOperatorContext addOperator(int i) {
			return getRuleContext(AddOperatorContext.class,i);
		}
		public SimpleExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_simpleExpression; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).enterSimpleExpression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).exitSimpleExpression(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof OberonVisitor ) return ((OberonVisitor<? extends T>)visitor).visitSimpleExpression(this);
			else return visitor.visitChildren(this);
		}
	}

	public final SimpleExpressionContext simpleExpression() throws RecognitionException {
		SimpleExpressionContext _localctx = new SimpleExpressionContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_simpleExpression);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(141);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__10 || _la==T__11) {
				{
				setState(140);
				_la = _input.LA(1);
				if ( !(_la==T__10 || _la==T__11) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
			}

			setState(143);
			term();
			setState(149);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__10) | (1L << T__11) | (1L << OR))) != 0)) {
				{
				{
				setState(144);
				addOperator();
				setState(145);
				term();
				}
				}
				setState(151);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AddOperatorContext extends ParserRuleContext {
		public TerminalNode OR() { return getToken(OberonParser.OR, 0); }
		public AddOperatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_addOperator; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).enterAddOperator(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).exitAddOperator(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof OberonVisitor ) return ((OberonVisitor<? extends T>)visitor).visitAddOperator(this);
			else return visitor.visitChildren(this);
		}
	}

	public final AddOperatorContext addOperator() throws RecognitionException {
		AddOperatorContext _localctx = new AddOperatorContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_addOperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(152);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__10) | (1L << T__11) | (1L << OR))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TermContext extends ParserRuleContext {
		public List<FactorContext> factor() {
			return getRuleContexts(FactorContext.class);
		}
		public FactorContext factor(int i) {
			return getRuleContext(FactorContext.class,i);
		}
		public List<MulOperatorContext> mulOperator() {
			return getRuleContexts(MulOperatorContext.class);
		}
		public MulOperatorContext mulOperator(int i) {
			return getRuleContext(MulOperatorContext.class,i);
		}
		public TermContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_term; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).enterTerm(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).exitTerm(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof OberonVisitor ) return ((OberonVisitor<? extends T>)visitor).visitTerm(this);
			else return visitor.visitChildren(this);
		}
	}

	public final TermContext term() throws RecognitionException {
		TermContext _localctx = new TermContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_term);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(154);
			factor();
			setState(160);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__0) | (1L << T__12) | (1L << T__13) | (1L << DIV) | (1L << MOD))) != 0)) {
				{
				{
				setState(155);
				mulOperator();
				setState(156);
				factor();
				}
				}
				setState(162);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class MulOperatorContext extends ParserRuleContext {
		public TerminalNode DIV() { return getToken(OberonParser.DIV, 0); }
		public TerminalNode MOD() { return getToken(OberonParser.MOD, 0); }
		public MulOperatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_mulOperator; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).enterMulOperator(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).exitMulOperator(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof OberonVisitor ) return ((OberonVisitor<? extends T>)visitor).visitMulOperator(this);
			else return visitor.visitChildren(this);
		}
	}

	public final MulOperatorContext mulOperator() throws RecognitionException {
		MulOperatorContext _localctx = new MulOperatorContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_mulOperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(163);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__0) | (1L << T__12) | (1L << T__13) | (1L << DIV) | (1L << MOD))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FactorContext extends ParserRuleContext {
		public NumberContext number() {
			return getRuleContext(NumberContext.class,0);
		}
		public TerminalNode STRING() { return getToken(OberonParser.STRING, 0); }
		public TerminalNode NIL() { return getToken(OberonParser.NIL, 0); }
		public TerminalNode TRUE() { return getToken(OberonParser.TRUE, 0); }
		public TerminalNode FALSE() { return getToken(OberonParser.FALSE, 0); }
		public Set_Context set_() {
			return getRuleContext(Set_Context.class,0);
		}
		public DesignatorContext designator() {
			return getRuleContext(DesignatorContext.class,0);
		}
		public ActualParametersContext actualParameters() {
			return getRuleContext(ActualParametersContext.class,0);
		}
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public FactorContext factor() {
			return getRuleContext(FactorContext.class,0);
		}
		public FactorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_factor; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).enterFactor(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).exitFactor(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof OberonVisitor ) return ((OberonVisitor<? extends T>)visitor).visitFactor(this);
			else return visitor.visitChildren(this);
		}
	}

	public final FactorContext factor() throws RecognitionException {
		FactorContext _localctx = new FactorContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_factor);
		int _la;
		try {
			setState(181);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DIGIT:
				enterOuterAlt(_localctx, 1);
				{
				setState(165);
				number();
				}
				break;
			case STRING:
				enterOuterAlt(_localctx, 2);
				{
				setState(166);
				match(STRING);
				}
				break;
			case NIL:
				enterOuterAlt(_localctx, 3);
				{
				setState(167);
				match(NIL);
				}
				break;
			case TRUE:
				enterOuterAlt(_localctx, 4);
				{
				setState(168);
				match(TRUE);
				}
				break;
			case FALSE:
				enterOuterAlt(_localctx, 5);
				{
				setState(169);
				match(FALSE);
				}
				break;
			case T__19:
				enterOuterAlt(_localctx, 6);
				{
				setState(170);
				set_();
				}
				break;
			case IDENT:
				enterOuterAlt(_localctx, 7);
				{
				setState(171);
				designator();
				setState(173);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__14) {
					{
					setState(172);
					actualParameters();
					}
				}

				}
				break;
			case T__14:
				enterOuterAlt(_localctx, 8);
				{
				setState(175);
				match(T__14);
				setState(176);
				expression();
				setState(177);
				match(T__15);
				}
				break;
			case T__16:
				enterOuterAlt(_localctx, 9);
				{
				setState(179);
				match(T__16);
				setState(180);
				factor();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DesignatorContext extends ParserRuleContext {
		public QualidentContext qualident() {
			return getRuleContext(QualidentContext.class,0);
		}
		public List<SelectorContext> selector() {
			return getRuleContexts(SelectorContext.class);
		}
		public SelectorContext selector(int i) {
			return getRuleContext(SelectorContext.class,i);
		}
		public DesignatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_designator; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).enterDesignator(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).exitDesignator(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof OberonVisitor ) return ((OberonVisitor<? extends T>)visitor).visitDesignator(this);
			else return visitor.visitChildren(this);
		}
	}

	public final DesignatorContext designator() throws RecognitionException {
		DesignatorContext _localctx = new DesignatorContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_designator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(183);
			qualident();
			setState(187);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__17) {
				{
				{
				setState(184);
				selector();
				}
				}
				setState(189);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SelectorContext extends ParserRuleContext {
		public ExpListContext expList() {
			return getRuleContext(ExpListContext.class,0);
		}
		public SelectorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_selector; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).enterSelector(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).exitSelector(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof OberonVisitor ) return ((OberonVisitor<? extends T>)visitor).visitSelector(this);
			else return visitor.visitChildren(this);
		}
	}

	public final SelectorContext selector() throws RecognitionException {
		SelectorContext _localctx = new SelectorContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_selector);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(190);
			match(T__17);
			setState(191);
			expList();
			setState(192);
			match(T__18);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Set_Context extends ParserRuleContext {
		public List<ElementContext> element() {
			return getRuleContexts(ElementContext.class);
		}
		public ElementContext element(int i) {
			return getRuleContext(ElementContext.class,i);
		}
		public Set_Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_set_; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).enterSet_(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).exitSet_(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof OberonVisitor ) return ((OberonVisitor<? extends T>)visitor).visitSet_(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Set_Context set_() throws RecognitionException {
		Set_Context _localctx = new Set_Context(_ctx, getState());
		enterRule(_localctx, 46, RULE_set_);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(194);
			match(T__19);
			setState(203);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__10) | (1L << T__11) | (1L << T__14) | (1L << T__16) | (1L << T__19) | (1L << NIL) | (1L << TRUE) | (1L << FALSE) | (1L << STRING) | (1L << IDENT) | (1L << DIGIT))) != 0)) {
				{
				setState(195);
				element();
				setState(200);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__3) {
					{
					{
					setState(196);
					match(T__3);
					setState(197);
					element();
					}
					}
					setState(202);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(205);
			match(T__20);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ElementContext extends ParserRuleContext {
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public ElementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_element; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).enterElement(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).exitElement(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof OberonVisitor ) return ((OberonVisitor<? extends T>)visitor).visitElement(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ElementContext element() throws RecognitionException {
		ElementContext _localctx = new ElementContext(_ctx, getState());
		enterRule(_localctx, 48, RULE_element);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(207);
			expression();
			setState(210);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__21) {
				{
				setState(208);
				match(T__21);
				setState(209);
				expression();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExpListContext extends ParserRuleContext {
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public ExpListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expList; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).enterExpList(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).exitExpList(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof OberonVisitor ) return ((OberonVisitor<? extends T>)visitor).visitExpList(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ExpListContext expList() throws RecognitionException {
		ExpListContext _localctx = new ExpListContext(_ctx, getState());
		enterRule(_localctx, 50, RULE_expList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(212);
			expression();
			setState(217);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__3) {
				{
				{
				setState(213);
				match(T__3);
				setState(214);
				expression();
				}
				}
				setState(219);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ActualParametersContext extends ParserRuleContext {
		public ExpListContext expList() {
			return getRuleContext(ExpListContext.class,0);
		}
		public ActualParametersContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_actualParameters; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).enterActualParameters(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).exitActualParameters(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof OberonVisitor ) return ((OberonVisitor<? extends T>)visitor).visitActualParameters(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ActualParametersContext actualParameters() throws RecognitionException {
		ActualParametersContext _localctx = new ActualParametersContext(_ctx, getState());
		enterRule(_localctx, 52, RULE_actualParameters);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(220);
			match(T__14);
			setState(222);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__10) | (1L << T__11) | (1L << T__14) | (1L << T__16) | (1L << T__19) | (1L << NIL) | (1L << TRUE) | (1L << FALSE) | (1L << STRING) | (1L << IDENT) | (1L << DIGIT))) != 0)) {
				{
				setState(221);
				expList();
				}
			}

			setState(224);
			match(T__15);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StatementContext extends ParserRuleContext {
		public AssignmentContext assignment() {
			return getRuleContext(AssignmentContext.class,0);
		}
		public IfStatementContext ifStatement() {
			return getRuleContext(IfStatementContext.class,0);
		}
		public WhileStatementContext whileStatement() {
			return getRuleContext(WhileStatementContext.class,0);
		}
		public ForStatementContext forStatement() {
			return getRuleContext(ForStatementContext.class,0);
		}
		public StatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statement; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).enterStatement(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).exitStatement(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof OberonVisitor ) return ((OberonVisitor<? extends T>)visitor).visitStatement(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StatementContext statement() throws RecognitionException {
		StatementContext _localctx = new StatementContext(_ctx, getState());
		enterRule(_localctx, 54, RULE_statement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(230);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case IDENT:
				{
				setState(226);
				assignment();
				}
				break;
			case IF:
				{
				setState(227);
				ifStatement();
				}
				break;
			case WHILE:
				{
				setState(228);
				whileStatement();
				}
				break;
			case FOR:
				{
				setState(229);
				forStatement();
				}
				break;
			case T__23:
			case END:
			case ELSIF:
			case ELSE:
			case RETURN:
				break;
			default:
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AssignmentContext extends ParserRuleContext {
		public DesignatorContext designator() {
			return getRuleContext(DesignatorContext.class,0);
		}
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public AssignmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assignment; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).enterAssignment(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).exitAssignment(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof OberonVisitor ) return ((OberonVisitor<? extends T>)visitor).visitAssignment(this);
			else return visitor.visitChildren(this);
		}
	}

	public final AssignmentContext assignment() throws RecognitionException {
		AssignmentContext _localctx = new AssignmentContext(_ctx, getState());
		enterRule(_localctx, 56, RULE_assignment);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(232);
			designator();
			setState(233);
			match(T__22);
			setState(234);
			expression();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StatementSequenceContext extends ParserRuleContext {
		public List<StatementContext> statement() {
			return getRuleContexts(StatementContext.class);
		}
		public StatementContext statement(int i) {
			return getRuleContext(StatementContext.class,i);
		}
		public StatementSequenceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statementSequence; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).enterStatementSequence(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).exitStatementSequence(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof OberonVisitor ) return ((OberonVisitor<? extends T>)visitor).visitStatementSequence(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StatementSequenceContext statementSequence() throws RecognitionException {
		StatementSequenceContext _localctx = new StatementSequenceContext(_ctx, getState());
		enterRule(_localctx, 58, RULE_statementSequence);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(236);
			statement();
			setState(241);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__23) {
				{
				{
				setState(237);
				match(T__23);
				setState(238);
				statement();
				}
				}
				setState(243);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IfStatementContext extends ParserRuleContext {
		public TerminalNode IF() { return getToken(OberonParser.IF, 0); }
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public List<TerminalNode> THEN() { return getTokens(OberonParser.THEN); }
		public TerminalNode THEN(int i) {
			return getToken(OberonParser.THEN, i);
		}
		public List<StatementSequenceContext> statementSequence() {
			return getRuleContexts(StatementSequenceContext.class);
		}
		public StatementSequenceContext statementSequence(int i) {
			return getRuleContext(StatementSequenceContext.class,i);
		}
		public TerminalNode END() { return getToken(OberonParser.END, 0); }
		public List<TerminalNode> ELSIF() { return getTokens(OberonParser.ELSIF); }
		public TerminalNode ELSIF(int i) {
			return getToken(OberonParser.ELSIF, i);
		}
		public TerminalNode ELSE() { return getToken(OberonParser.ELSE, 0); }
		public IfStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ifStatement; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).enterIfStatement(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).exitIfStatement(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof OberonVisitor ) return ((OberonVisitor<? extends T>)visitor).visitIfStatement(this);
			else return visitor.visitChildren(this);
		}
	}

	public final IfStatementContext ifStatement() throws RecognitionException {
		IfStatementContext _localctx = new IfStatementContext(_ctx, getState());
		enterRule(_localctx, 60, RULE_ifStatement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(244);
			match(IF);
			setState(245);
			expression();
			setState(246);
			match(THEN);
			setState(247);
			statementSequence();
			setState(255);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==ELSIF) {
				{
				{
				setState(248);
				match(ELSIF);
				setState(249);
				expression();
				setState(250);
				match(THEN);
				setState(251);
				statementSequence();
				}
				}
				setState(257);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(260);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==ELSE) {
				{
				setState(258);
				match(ELSE);
				setState(259);
				statementSequence();
				}
			}

			setState(262);
			match(END);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class WhileStatementContext extends ParserRuleContext {
		public TerminalNode WHILE() { return getToken(OberonParser.WHILE, 0); }
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public List<TerminalNode> DO() { return getTokens(OberonParser.DO); }
		public TerminalNode DO(int i) {
			return getToken(OberonParser.DO, i);
		}
		public List<StatementSequenceContext> statementSequence() {
			return getRuleContexts(StatementSequenceContext.class);
		}
		public StatementSequenceContext statementSequence(int i) {
			return getRuleContext(StatementSequenceContext.class,i);
		}
		public TerminalNode END() { return getToken(OberonParser.END, 0); }
		public List<TerminalNode> ELSIF() { return getTokens(OberonParser.ELSIF); }
		public TerminalNode ELSIF(int i) {
			return getToken(OberonParser.ELSIF, i);
		}
		public WhileStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_whileStatement; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).enterWhileStatement(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).exitWhileStatement(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof OberonVisitor ) return ((OberonVisitor<? extends T>)visitor).visitWhileStatement(this);
			else return visitor.visitChildren(this);
		}
	}

	public final WhileStatementContext whileStatement() throws RecognitionException {
		WhileStatementContext _localctx = new WhileStatementContext(_ctx, getState());
		enterRule(_localctx, 62, RULE_whileStatement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(264);
			match(WHILE);
			setState(265);
			expression();
			setState(266);
			match(DO);
			setState(267);
			statementSequence();
			setState(275);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==ELSIF) {
				{
				{
				setState(268);
				match(ELSIF);
				setState(269);
				expression();
				setState(270);
				match(DO);
				setState(271);
				statementSequence();
				}
				}
				setState(277);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(278);
			match(END);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ForStatementContext extends ParserRuleContext {
		public TerminalNode FOR() { return getToken(OberonParser.FOR, 0); }
		public IdentContext ident() {
			return getRuleContext(IdentContext.class,0);
		}
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public TerminalNode TO() { return getToken(OberonParser.TO, 0); }
		public TerminalNode DO() { return getToken(OberonParser.DO, 0); }
		public StatementSequenceContext statementSequence() {
			return getRuleContext(StatementSequenceContext.class,0);
		}
		public TerminalNode END() { return getToken(OberonParser.END, 0); }
		public TerminalNode BY() { return getToken(OberonParser.BY, 0); }
		public ConstExpressionContext constExpression() {
			return getRuleContext(ConstExpressionContext.class,0);
		}
		public ForStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_forStatement; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).enterForStatement(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).exitForStatement(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof OberonVisitor ) return ((OberonVisitor<? extends T>)visitor).visitForStatement(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ForStatementContext forStatement() throws RecognitionException {
		ForStatementContext _localctx = new ForStatementContext(_ctx, getState());
		enterRule(_localctx, 64, RULE_forStatement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(280);
			match(FOR);
			setState(281);
			ident();
			setState(282);
			match(T__22);
			setState(283);
			expression();
			setState(284);
			match(TO);
			setState(285);
			expression();
			setState(288);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==BY) {
				{
				setState(286);
				match(BY);
				setState(287);
				constExpression();
				}
			}

			setState(290);
			match(DO);
			setState(291);
			statementSequence();
			setState(292);
			match(END);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DeclarationSequenceContext extends ParserRuleContext {
		public TerminalNode CONST() { return getToken(OberonParser.CONST, 0); }
		public TerminalNode TYPE() { return getToken(OberonParser.TYPE, 0); }
		public TerminalNode VAR() { return getToken(OberonParser.VAR, 0); }
		public List<ConstDeclarationContext> constDeclaration() {
			return getRuleContexts(ConstDeclarationContext.class);
		}
		public ConstDeclarationContext constDeclaration(int i) {
			return getRuleContext(ConstDeclarationContext.class,i);
		}
		public List<TypeDeclarationContext> typeDeclaration() {
			return getRuleContexts(TypeDeclarationContext.class);
		}
		public TypeDeclarationContext typeDeclaration(int i) {
			return getRuleContext(TypeDeclarationContext.class,i);
		}
		public List<VariableDeclarationContext> variableDeclaration() {
			return getRuleContexts(VariableDeclarationContext.class);
		}
		public VariableDeclarationContext variableDeclaration(int i) {
			return getRuleContext(VariableDeclarationContext.class,i);
		}
		public DeclarationSequenceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declarationSequence; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).enterDeclarationSequence(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).exitDeclarationSequence(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof OberonVisitor ) return ((OberonVisitor<? extends T>)visitor).visitDeclarationSequence(this);
			else return visitor.visitChildren(this);
		}
	}

	public final DeclarationSequenceContext declarationSequence() throws RecognitionException {
		DeclarationSequenceContext _localctx = new DeclarationSequenceContext(_ctx, getState());
		enterRule(_localctx, 66, RULE_declarationSequence);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(303);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==CONST) {
				{
				setState(294);
				match(CONST);
				setState(300);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==IDENT) {
					{
					{
					setState(295);
					constDeclaration();
					setState(296);
					match(T__23);
					}
					}
					setState(302);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(314);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TYPE) {
				{
				setState(305);
				match(TYPE);
				setState(311);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==IDENT) {
					{
					{
					setState(306);
					typeDeclaration();
					setState(307);
					match(T__23);
					}
					}
					setState(313);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(325);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==VAR) {
				{
				setState(316);
				match(VAR);
				setState(322);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==IDENT) {
					{
					{
					setState(317);
					variableDeclaration();
					setState(318);
					match(T__23);
					}
					}
					setState(324);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ModuleContext extends ParserRuleContext {
		public TerminalNode MODULE() { return getToken(OberonParser.MODULE, 0); }
		public List<IdentContext> ident() {
			return getRuleContexts(IdentContext.class);
		}
		public IdentContext ident(int i) {
			return getRuleContext(IdentContext.class,i);
		}
		public DeclarationSequenceContext declarationSequence() {
			return getRuleContext(DeclarationSequenceContext.class,0);
		}
		public TerminalNode RETURN() { return getToken(OberonParser.RETURN, 0); }
		public FactorContext factor() {
			return getRuleContext(FactorContext.class,0);
		}
		public TerminalNode END() { return getToken(OberonParser.END, 0); }
		public TerminalNode EOF() { return getToken(OberonParser.EOF, 0); }
		public TerminalNode BEGIN() { return getToken(OberonParser.BEGIN, 0); }
		public StatementSequenceContext statementSequence() {
			return getRuleContext(StatementSequenceContext.class,0);
		}
		public ModuleContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_module; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).enterModule(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof OberonListener ) ((OberonListener)listener).exitModule(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof OberonVisitor ) return ((OberonVisitor<? extends T>)visitor).visitModule(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ModuleContext module() throws RecognitionException {
		ModuleContext _localctx = new ModuleContext(_ctx, getState());
		enterRule(_localctx, 68, RULE_module);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(327);
			match(MODULE);
			setState(328);
			ident();
			setState(329);
			match(T__23);
			setState(330);
			declarationSequence();
			setState(333);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==BEGIN) {
				{
				setState(331);
				match(BEGIN);
				setState(332);
				statementSequence();
				}
			}

			setState(335);
			match(RETURN);
			setState(336);
			factor();
			setState(337);
			match(T__23);
			setState(338);
			match(END);
			setState(339);
			ident();
			setState(340);
			match(T__1);
			setState(341);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\39\u015a\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\3\2\3\2\3\3\3\3\3\4\3\4\5\4O\n\4\3\5\6\5R\n\5"+
		"\r\5\16\5S\3\6\6\6W\n\6\r\6\16\6X\3\6\3\6\7\6]\n\6\f\6\16\6`\13\6\3\7"+
		"\3\7\5\7d\n\7\3\b\3\b\3\b\3\b\3\t\3\t\3\n\3\n\3\n\3\n\3\13\3\13\5\13r"+
		"\n\13\3\f\3\f\3\f\3\f\3\f\3\r\3\r\3\16\3\16\3\16\7\16~\n\16\f\16\16\16"+
		"\u0081\13\16\3\17\3\17\3\17\3\17\3\20\3\20\3\20\3\20\5\20\u008b\n\20\3"+
		"\21\3\21\3\22\5\22\u0090\n\22\3\22\3\22\3\22\3\22\7\22\u0096\n\22\f\22"+
		"\16\22\u0099\13\22\3\23\3\23\3\24\3\24\3\24\3\24\7\24\u00a1\n\24\f\24"+
		"\16\24\u00a4\13\24\3\25\3\25\3\26\3\26\3\26\3\26\3\26\3\26\3\26\3\26\5"+
		"\26\u00b0\n\26\3\26\3\26\3\26\3\26\3\26\3\26\5\26\u00b8\n\26\3\27\3\27"+
		"\7\27\u00bc\n\27\f\27\16\27\u00bf\13\27\3\30\3\30\3\30\3\30\3\31\3\31"+
		"\3\31\3\31\7\31\u00c9\n\31\f\31\16\31\u00cc\13\31\5\31\u00ce\n\31\3\31"+
		"\3\31\3\32\3\32\3\32\5\32\u00d5\n\32\3\33\3\33\3\33\7\33\u00da\n\33\f"+
		"\33\16\33\u00dd\13\33\3\34\3\34\5\34\u00e1\n\34\3\34\3\34\3\35\3\35\3"+
		"\35\3\35\5\35\u00e9\n\35\3\36\3\36\3\36\3\36\3\37\3\37\3\37\7\37\u00f2"+
		"\n\37\f\37\16\37\u00f5\13\37\3 \3 \3 \3 \3 \3 \3 \3 \3 \7 \u0100\n \f"+
		" \16 \u0103\13 \3 \3 \5 \u0107\n \3 \3 \3!\3!\3!\3!\3!\3!\3!\3!\3!\7!"+
		"\u0114\n!\f!\16!\u0117\13!\3!\3!\3\"\3\"\3\"\3\"\3\"\3\"\3\"\3\"\5\"\u0123"+
		"\n\"\3\"\3\"\3\"\3\"\3#\3#\3#\3#\7#\u012d\n#\f#\16#\u0130\13#\5#\u0132"+
		"\n#\3#\3#\3#\3#\7#\u0138\n#\f#\16#\u013b\13#\5#\u013d\n#\3#\3#\3#\3#\7"+
		"#\u0143\n#\f#\16#\u0146\13#\5#\u0148\n#\3$\3$\3$\3$\3$\3$\5$\u0150\n$"+
		"\3$\3$\3$\3$\3$\3$\3$\3$\3$\2\2%\2\4\6\b\n\f\16\20\22\24\26\30\32\34\36"+
		" \"$&(*,.\60\62\64\668:<>@BDF\2\6\4\2\5\5\b\f\3\2\r\16\4\2\r\16\37\37"+
		"\5\2\3\3\17\20 !\2\u0160\2H\3\2\2\2\4J\3\2\2\2\6L\3\2\2\2\bQ\3\2\2\2\n"+
		"V\3\2\2\2\fc\3\2\2\2\16e\3\2\2\2\20i\3\2\2\2\22k\3\2\2\2\24q\3\2\2\2\26"+
		"s\3\2\2\2\30x\3\2\2\2\32z\3\2\2\2\34\u0082\3\2\2\2\36\u0086\3\2\2\2 \u008c"+
		"\3\2\2\2\"\u008f\3\2\2\2$\u009a\3\2\2\2&\u009c\3\2\2\2(\u00a5\3\2\2\2"+
		"*\u00b7\3\2\2\2,\u00b9\3\2\2\2.\u00c0\3\2\2\2\60\u00c4\3\2\2\2\62\u00d1"+
		"\3\2\2\2\64\u00d6\3\2\2\2\66\u00de\3\2\2\28\u00e8\3\2\2\2:\u00ea\3\2\2"+
		"\2<\u00ee\3\2\2\2>\u00f6\3\2\2\2@\u010a\3\2\2\2B\u011a\3\2\2\2D\u0131"+
		"\3\2\2\2F\u0149\3\2\2\2HI\7\65\2\2I\3\3\2\2\2JK\5\2\2\2K\5\3\2\2\2LN\5"+
		"\2\2\2MO\7\3\2\2NM\3\2\2\2NO\3\2\2\2O\7\3\2\2\2PR\7\67\2\2QP\3\2\2\2R"+
		"S\3\2\2\2SQ\3\2\2\2ST\3\2\2\2T\t\3\2\2\2UW\7\67\2\2VU\3\2\2\2WX\3\2\2"+
		"\2XV\3\2\2\2XY\3\2\2\2YZ\3\2\2\2Z^\7\4\2\2[]\7\67\2\2\\[\3\2\2\2]`\3\2"+
		"\2\2^\\\3\2\2\2^_\3\2\2\2_\13\3\2\2\2`^\3\2\2\2ad\5\b\5\2bd\5\n\6\2ca"+
		"\3\2\2\2cb\3\2\2\2d\r\3\2\2\2ef\5\6\4\2fg\7\5\2\2gh\5\20\t\2h\17\3\2\2"+
		"\2ij\5\36\20\2j\21\3\2\2\2kl\5\6\4\2lm\7\5\2\2mn\5\24\13\2n\23\3\2\2\2"+
		"or\5\4\3\2pr\5\26\f\2qo\3\2\2\2qp\3\2\2\2r\25\3\2\2\2st\7\33\2\2tu\5\30"+
		"\r\2uv\7\34\2\2vw\5\24\13\2w\27\3\2\2\2xy\5\20\t\2y\31\3\2\2\2z\177\5"+
		"\6\4\2{|\7\6\2\2|~\5\6\4\2}{\3\2\2\2~\u0081\3\2\2\2\177}\3\2\2\2\177\u0080"+
		"\3\2\2\2\u0080\33\3\2\2\2\u0081\177\3\2\2\2\u0082\u0083\5\32\16\2\u0083"+
		"\u0084\7\7\2\2\u0084\u0085\5\24\13\2\u0085\35\3\2\2\2\u0086\u008a\5\""+
		"\22\2\u0087\u0088\5 \21\2\u0088\u0089\5\"\22\2\u0089\u008b\3\2\2\2\u008a"+
		"\u0087\3\2\2\2\u008a\u008b\3\2\2\2\u008b\37\3\2\2\2\u008c\u008d\t\2\2"+
		"\2\u008d!\3\2\2\2\u008e\u0090\t\3\2\2\u008f\u008e\3\2\2\2\u008f\u0090"+
		"\3\2\2\2\u0090\u0091\3\2\2\2\u0091\u0097\5&\24\2\u0092\u0093\5$\23\2\u0093"+
		"\u0094\5&\24\2\u0094\u0096\3\2\2\2\u0095\u0092\3\2\2\2\u0096\u0099\3\2"+
		"\2\2\u0097\u0095\3\2\2\2\u0097\u0098\3\2\2\2\u0098#\3\2\2\2\u0099\u0097"+
		"\3\2\2\2\u009a\u009b\t\4\2\2\u009b%\3\2\2\2\u009c\u00a2\5*\26\2\u009d"+
		"\u009e\5(\25\2\u009e\u009f\5*\26\2\u009f\u00a1\3\2\2\2\u00a0\u009d\3\2"+
		"\2\2\u00a1\u00a4\3\2\2\2\u00a2\u00a0\3\2\2\2\u00a2\u00a3\3\2\2\2\u00a3"+
		"\'\3\2\2\2\u00a4\u00a2\3\2\2\2\u00a5\u00a6\t\5\2\2\u00a6)\3\2\2\2\u00a7"+
		"\u00b8\5\f\7\2\u00a8\u00b8\7\64\2\2\u00a9\u00b8\7\"\2\2\u00aa\u00b8\7"+
		"#\2\2\u00ab\u00b8\7$\2\2\u00ac\u00b8\5\60\31\2\u00ad\u00af\5,\27\2\u00ae"+
		"\u00b0\5\66\34\2\u00af\u00ae\3\2\2\2\u00af\u00b0\3\2\2\2\u00b0\u00b8\3"+
		"\2\2\2\u00b1\u00b2\7\21\2\2\u00b2\u00b3\5\36\20\2\u00b3\u00b4\7\22\2\2"+
		"\u00b4\u00b8\3\2\2\2\u00b5\u00b6\7\23\2\2\u00b6\u00b8\5*\26\2\u00b7\u00a7"+
		"\3\2\2\2\u00b7\u00a8\3\2\2\2\u00b7\u00a9\3\2\2\2\u00b7\u00aa\3\2\2\2\u00b7"+
		"\u00ab\3\2\2\2\u00b7\u00ac\3\2\2\2\u00b7\u00ad\3\2\2\2\u00b7\u00b1\3\2"+
		"\2\2\u00b7\u00b5\3\2\2\2\u00b8+\3\2\2\2\u00b9\u00bd\5\4\3\2\u00ba\u00bc"+
		"\5.\30\2\u00bb\u00ba\3\2\2\2\u00bc\u00bf\3\2\2\2\u00bd\u00bb\3\2\2\2\u00bd"+
		"\u00be\3\2\2\2\u00be-\3\2\2\2\u00bf\u00bd\3\2\2\2\u00c0\u00c1\7\24\2\2"+
		"\u00c1\u00c2\5\64\33\2\u00c2\u00c3\7\25\2\2\u00c3/\3\2\2\2\u00c4\u00cd"+
		"\7\26\2\2\u00c5\u00ca\5\62\32\2\u00c6\u00c7\7\6\2\2\u00c7\u00c9\5\62\32"+
		"\2\u00c8\u00c6\3\2\2\2\u00c9\u00cc\3\2\2\2\u00ca\u00c8\3\2\2\2\u00ca\u00cb"+
		"\3\2\2\2\u00cb\u00ce\3\2\2\2\u00cc\u00ca\3\2\2\2\u00cd\u00c5\3\2\2\2\u00cd"+
		"\u00ce\3\2\2\2\u00ce\u00cf\3\2\2\2\u00cf\u00d0\7\27\2\2\u00d0\61\3\2\2"+
		"\2\u00d1\u00d4\5\36\20\2\u00d2\u00d3\7\30\2\2\u00d3\u00d5\5\36\20\2\u00d4"+
		"\u00d2\3\2\2\2\u00d4\u00d5\3\2\2\2\u00d5\63\3\2\2\2\u00d6\u00db\5\36\20"+
		"\2\u00d7\u00d8\7\6\2\2\u00d8\u00da\5\36\20\2\u00d9\u00d7\3\2\2\2\u00da"+
		"\u00dd\3\2\2\2\u00db\u00d9\3\2\2\2\u00db\u00dc\3\2\2\2\u00dc\65\3\2\2"+
		"\2\u00dd\u00db\3\2\2\2\u00de\u00e0\7\21\2\2\u00df\u00e1\5\64\33\2\u00e0"+
		"\u00df\3\2\2\2\u00e0\u00e1\3\2\2\2\u00e1\u00e2\3\2\2\2\u00e2\u00e3\7\22"+
		"\2\2\u00e3\67\3\2\2\2\u00e4\u00e9\5:\36\2\u00e5\u00e9\5> \2\u00e6\u00e9"+
		"\5@!\2\u00e7\u00e9\5B\"\2\u00e8\u00e4\3\2\2\2\u00e8\u00e5\3\2\2\2\u00e8"+
		"\u00e6\3\2\2\2\u00e8\u00e7\3\2\2\2\u00e8\u00e9\3\2\2\2\u00e99\3\2\2\2"+
		"\u00ea\u00eb\5,\27\2\u00eb\u00ec\7\31\2\2\u00ec\u00ed\5\36\20\2\u00ed"+
		";\3\2\2\2\u00ee\u00f3\58\35\2\u00ef\u00f0\7\32\2\2\u00f0\u00f2\58\35\2"+
		"\u00f1\u00ef\3\2\2\2\u00f2\u00f5\3\2\2\2\u00f3\u00f1\3\2\2\2\u00f3\u00f4"+
		"\3\2\2\2\u00f4=\3\2\2\2\u00f5\u00f3\3\2\2\2\u00f6\u00f7\7%\2\2\u00f7\u00f8"+
		"\5\36\20\2\u00f8\u00f9\7&\2\2\u00f9\u0101\5<\37\2\u00fa\u00fb\7\'\2\2"+
		"\u00fb\u00fc\5\36\20\2\u00fc\u00fd\7&\2\2\u00fd\u00fe\5<\37\2\u00fe\u0100"+
		"\3\2\2\2\u00ff\u00fa\3\2\2\2\u0100\u0103\3\2\2\2\u0101\u00ff\3\2\2\2\u0101"+
		"\u0102\3\2\2\2\u0102\u0106\3\2\2\2\u0103\u0101\3\2\2\2\u0104\u0105\7("+
		"\2\2\u0105\u0107\5<\37\2\u0106\u0104\3\2\2\2\u0106\u0107\3\2\2\2\u0107"+
		"\u0108\3\2\2\2\u0108\u0109\7\35\2\2\u0109?\3\2\2\2\u010a\u010b\7*\2\2"+
		"\u010b\u010c\5\36\20\2\u010c\u010d\7+\2\2\u010d\u0115\5<\37\2\u010e\u010f"+
		"\7\'\2\2\u010f\u0110\5\36\20\2\u0110\u0111\7+\2\2\u0111\u0112\5<\37\2"+
		"\u0112\u0114\3\2\2\2\u0113\u010e\3\2\2\2\u0114\u0117\3\2\2\2\u0115\u0113"+
		"\3\2\2\2\u0115\u0116\3\2\2\2\u0116\u0118\3\2\2\2\u0117\u0115\3\2\2\2\u0118"+
		"\u0119\7\35\2\2\u0119A\3\2\2\2\u011a\u011b\7,\2\2\u011b\u011c\5\2\2\2"+
		"\u011c\u011d\7\31\2\2\u011d\u011e\5\36\20\2\u011e\u011f\7\36\2\2\u011f"+
		"\u0122\5\36\20\2\u0120\u0121\7-\2\2\u0121\u0123\5\20\t\2\u0122\u0120\3"+
		"\2\2\2\u0122\u0123\3\2\2\2\u0123\u0124\3\2\2\2\u0124\u0125\7+\2\2\u0125"+
		"\u0126\5<\37\2\u0126\u0127\7\35\2\2\u0127C\3\2\2\2\u0128\u012e\7\60\2"+
		"\2\u0129\u012a\5\16\b\2\u012a\u012b\7\32\2\2\u012b\u012d\3\2\2\2\u012c"+
		"\u0129\3\2\2\2\u012d\u0130\3\2\2\2\u012e\u012c\3\2\2\2\u012e\u012f\3\2"+
		"\2\2\u012f\u0132\3\2\2\2\u0130\u012e\3\2\2\2\u0131\u0128\3\2\2\2\u0131"+
		"\u0132\3\2\2\2\u0132\u013c\3\2\2\2\u0133\u0139\7\61\2\2\u0134\u0135\5"+
		"\22\n\2\u0135\u0136\7\32\2\2\u0136\u0138\3\2\2\2\u0137\u0134\3\2\2\2\u0138"+
		"\u013b\3\2\2\2\u0139\u0137\3\2\2\2\u0139\u013a\3\2\2\2\u013a\u013d\3\2"+
		"\2\2\u013b\u0139\3\2\2\2\u013c\u0133\3\2\2\2\u013c\u013d\3\2\2\2\u013d"+
		"\u0147\3\2\2\2\u013e\u0144\7\62\2\2\u013f\u0140\5\34\17\2\u0140\u0141"+
		"\7\32\2\2\u0141\u0143\3\2\2\2\u0142\u013f\3\2\2\2\u0143\u0146\3\2\2\2"+
		"\u0144\u0142\3\2\2\2\u0144\u0145\3\2\2\2\u0145\u0148\3\2\2\2\u0146\u0144"+
		"\3\2\2\2\u0147\u013e\3\2\2\2\u0147\u0148\3\2\2\2\u0148E\3\2\2\2\u0149"+
		"\u014a\7\63\2\2\u014a\u014b\5\2\2\2\u014b\u014c\7\32\2\2\u014c\u014f\5"+
		"D#\2\u014d\u014e\7.\2\2\u014e\u0150\5<\37\2\u014f\u014d\3\2\2\2\u014f"+
		"\u0150\3\2\2\2\u0150\u0151\3\2\2\2\u0151\u0152\7/\2\2\u0152\u0153\5*\26"+
		"\2\u0153\u0154\7\32\2\2\u0154\u0155\7\35\2\2\u0155\u0156\5\2\2\2\u0156"+
		"\u0157\7\4\2\2\u0157\u0158\7\2\2\3\u0158G\3\2\2\2\"NSX^cq\177\u008a\u008f"+
		"\u0097\u00a2\u00af\u00b7\u00bd\u00ca\u00cd\u00d4\u00db\u00e0\u00e8\u00f3"+
		"\u0101\u0106\u0115\u0122\u012e\u0131\u0139\u013c\u0144\u0147\u014f";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}