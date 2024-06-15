// Generated from Oberon.g4 by ANTLR 4.9.3
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class OberonLexer extends Lexer {
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
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
			"T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "T__15", "T__16", 
			"T__17", "T__18", "T__19", "T__20", "T__21", "T__22", "T__23", "ARRAY", 
			"OF", "END", "TO", "OR", "DIV", "MOD", "NIL", "TRUE", "FALSE", "IF", 
			"THEN", "ELSIF", "ELSE", "CASE", "WHILE", "DO", "FOR", "BY", "BEGIN", 
			"RETURN", "CONST", "TYPE", "VAR", "MODULE", "STRING", "IDENT", "LETTER", 
			"DIGIT", "COMMENT", "WS"
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


	public OberonLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "Oberon.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\29\u0141\b\1\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4"+
		",\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\4\63\t\63\4\64\t"+
		"\64\4\65\t\65\4\66\t\66\4\67\t\67\48\t8\3\2\3\2\3\3\3\3\3\4\3\4\3\5\3"+
		"\5\3\6\3\6\3\7\3\7\3\b\3\b\3\t\3\t\3\t\3\n\3\n\3\13\3\13\3\13\3\f\3\f"+
		"\3\r\3\r\3\16\3\16\3\17\3\17\3\20\3\20\3\21\3\21\3\22\3\22\3\23\3\23\3"+
		"\24\3\24\3\25\3\25\3\26\3\26\3\27\3\27\3\27\3\30\3\30\3\30\3\31\3\31\3"+
		"\32\3\32\3\32\3\32\3\32\3\32\3\33\3\33\3\33\3\34\3\34\3\34\3\34\3\35\3"+
		"\35\3\35\3\36\3\36\3\36\3\37\3\37\3\37\3\37\3 \3 \3 \3 \3!\3!\3!\3!\3"+
		"\"\3\"\3\"\3\"\3\"\3#\3#\3#\3#\3#\3#\3$\3$\3$\3%\3%\3%\3%\3%\3&\3&\3&"+
		"\3&\3&\3&\3\'\3\'\3\'\3\'\3\'\3(\3(\3(\3(\3(\3)\3)\3)\3)\3)\3)\3*\3*\3"+
		"*\3+\3+\3+\3+\3,\3,\3,\3-\3-\3-\3-\3-\3-\3.\3.\3.\3.\3.\3.\3.\3/\3/\3"+
		"/\3/\3/\3/\3\60\3\60\3\60\3\60\3\60\3\61\3\61\3\61\3\61\3\62\3\62\3\62"+
		"\3\62\3\62\3\62\3\62\3\63\3\63\7\63\u011d\n\63\f\63\16\63\u0120\13\63"+
		"\3\63\3\63\3\64\3\64\3\64\7\64\u0127\n\64\f\64\16\64\u012a\13\64\3\65"+
		"\3\65\3\66\3\66\3\67\3\67\3\67\3\67\7\67\u0134\n\67\f\67\16\67\u0137\13"+
		"\67\3\67\3\67\3\67\3\67\3\67\38\38\38\38\4\u011e\u0135\29\3\3\5\4\7\5"+
		"\t\6\13\7\r\b\17\t\21\n\23\13\25\f\27\r\31\16\33\17\35\20\37\21!\22#\23"+
		"%\24\'\25)\26+\27-\30/\31\61\32\63\33\65\34\67\359\36;\37= ?!A\"C#E$G"+
		"%I&K\'M(O)Q*S+U,W-Y.[/]\60_\61a\62c\63e\64g\65i\66k\67m8o9\3\2\5\4\2C"+
		"\\c|\3\2\62;\5\2\13\f\17\17\"\"\2\u0144\2\3\3\2\2\2\2\5\3\2\2\2\2\7\3"+
		"\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21\3\2\2\2"+
		"\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2\2\33\3\2\2\2\2\35"+
		"\3\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\2#\3\2\2\2\2%\3\2\2\2\2\'\3\2\2\2\2)"+
		"\3\2\2\2\2+\3\2\2\2\2-\3\2\2\2\2/\3\2\2\2\2\61\3\2\2\2\2\63\3\2\2\2\2"+
		"\65\3\2\2\2\2\67\3\2\2\2\29\3\2\2\2\2;\3\2\2\2\2=\3\2\2\2\2?\3\2\2\2\2"+
		"A\3\2\2\2\2C\3\2\2\2\2E\3\2\2\2\2G\3\2\2\2\2I\3\2\2\2\2K\3\2\2\2\2M\3"+
		"\2\2\2\2O\3\2\2\2\2Q\3\2\2\2\2S\3\2\2\2\2U\3\2\2\2\2W\3\2\2\2\2Y\3\2\2"+
		"\2\2[\3\2\2\2\2]\3\2\2\2\2_\3\2\2\2\2a\3\2\2\2\2c\3\2\2\2\2e\3\2\2\2\2"+
		"g\3\2\2\2\2i\3\2\2\2\2k\3\2\2\2\2m\3\2\2\2\2o\3\2\2\2\3q\3\2\2\2\5s\3"+
		"\2\2\2\7u\3\2\2\2\tw\3\2\2\2\13y\3\2\2\2\r{\3\2\2\2\17}\3\2\2\2\21\177"+
		"\3\2\2\2\23\u0082\3\2\2\2\25\u0084\3\2\2\2\27\u0087\3\2\2\2\31\u0089\3"+
		"\2\2\2\33\u008b\3\2\2\2\35\u008d\3\2\2\2\37\u008f\3\2\2\2!\u0091\3\2\2"+
		"\2#\u0093\3\2\2\2%\u0095\3\2\2\2\'\u0097\3\2\2\2)\u0099\3\2\2\2+\u009b"+
		"\3\2\2\2-\u009d\3\2\2\2/\u00a0\3\2\2\2\61\u00a3\3\2\2\2\63\u00a5\3\2\2"+
		"\2\65\u00ab\3\2\2\2\67\u00ae\3\2\2\29\u00b2\3\2\2\2;\u00b5\3\2\2\2=\u00b8"+
		"\3\2\2\2?\u00bc\3\2\2\2A\u00c0\3\2\2\2C\u00c4\3\2\2\2E\u00c9\3\2\2\2G"+
		"\u00cf\3\2\2\2I\u00d2\3\2\2\2K\u00d7\3\2\2\2M\u00dd\3\2\2\2O\u00e2\3\2"+
		"\2\2Q\u00e7\3\2\2\2S\u00ed\3\2\2\2U\u00f0\3\2\2\2W\u00f4\3\2\2\2Y\u00f7"+
		"\3\2\2\2[\u00fd\3\2\2\2]\u0104\3\2\2\2_\u010a\3\2\2\2a\u010f\3\2\2\2c"+
		"\u0113\3\2\2\2e\u011a\3\2\2\2g\u0123\3\2\2\2i\u012b\3\2\2\2k\u012d\3\2"+
		"\2\2m\u012f\3\2\2\2o\u013d\3\2\2\2qr\7,\2\2r\4\3\2\2\2st\7\60\2\2t\6\3"+
		"\2\2\2uv\7?\2\2v\b\3\2\2\2wx\7.\2\2x\n\3\2\2\2yz\7<\2\2z\f\3\2\2\2{|\7"+
		"%\2\2|\16\3\2\2\2}~\7>\2\2~\20\3\2\2\2\177\u0080\7>\2\2\u0080\u0081\7"+
		"?\2\2\u0081\22\3\2\2\2\u0082\u0083\7@\2\2\u0083\24\3\2\2\2\u0084\u0085"+
		"\7@\2\2\u0085\u0086\7?\2\2\u0086\26\3\2\2\2\u0087\u0088\7-\2\2\u0088\30"+
		"\3\2\2\2\u0089\u008a\7/\2\2\u008a\32\3\2\2\2\u008b\u008c\7\61\2\2\u008c"+
		"\34\3\2\2\2\u008d\u008e\7(\2\2\u008e\36\3\2\2\2\u008f\u0090\7*\2\2\u0090"+
		" \3\2\2\2\u0091\u0092\7+\2\2\u0092\"\3\2\2\2\u0093\u0094\7\u0080\2\2\u0094"+
		"$\3\2\2\2\u0095\u0096\7]\2\2\u0096&\3\2\2\2\u0097\u0098\7_\2\2\u0098("+
		"\3\2\2\2\u0099\u009a\7}\2\2\u009a*\3\2\2\2\u009b\u009c\7\177\2\2\u009c"+
		",\3\2\2\2\u009d\u009e\7\60\2\2\u009e\u009f\7\60\2\2\u009f.\3\2\2\2\u00a0"+
		"\u00a1\7<\2\2\u00a1\u00a2\7?\2\2\u00a2\60\3\2\2\2\u00a3\u00a4\7=\2\2\u00a4"+
		"\62\3\2\2\2\u00a5\u00a6\7C\2\2\u00a6\u00a7\7T\2\2\u00a7\u00a8\7T\2\2\u00a8"+
		"\u00a9\7C\2\2\u00a9\u00aa\7[\2\2\u00aa\64\3\2\2\2\u00ab\u00ac\7Q\2\2\u00ac"+
		"\u00ad\7H\2\2\u00ad\66\3\2\2\2\u00ae\u00af\7G\2\2\u00af\u00b0\7P\2\2\u00b0"+
		"\u00b1\7F\2\2\u00b18\3\2\2\2\u00b2\u00b3\7V\2\2\u00b3\u00b4\7Q\2\2\u00b4"+
		":\3\2\2\2\u00b5\u00b6\7Q\2\2\u00b6\u00b7\7T\2\2\u00b7<\3\2\2\2\u00b8\u00b9"+
		"\7F\2\2\u00b9\u00ba\7K\2\2\u00ba\u00bb\7X\2\2\u00bb>\3\2\2\2\u00bc\u00bd"+
		"\7O\2\2\u00bd\u00be\7Q\2\2\u00be\u00bf\7F\2\2\u00bf@\3\2\2\2\u00c0\u00c1"+
		"\7P\2\2\u00c1\u00c2\7K\2\2\u00c2\u00c3\7N\2\2\u00c3B\3\2\2\2\u00c4\u00c5"+
		"\7V\2\2\u00c5\u00c6\7T\2\2\u00c6\u00c7\7W\2\2\u00c7\u00c8\7G\2\2\u00c8"+
		"D\3\2\2\2\u00c9\u00ca\7H\2\2\u00ca\u00cb\7C\2\2\u00cb\u00cc\7N\2\2\u00cc"+
		"\u00cd\7U\2\2\u00cd\u00ce\7G\2\2\u00ceF\3\2\2\2\u00cf\u00d0\7K\2\2\u00d0"+
		"\u00d1\7H\2\2\u00d1H\3\2\2\2\u00d2\u00d3\7V\2\2\u00d3\u00d4\7J\2\2\u00d4"+
		"\u00d5\7G\2\2\u00d5\u00d6\7P\2\2\u00d6J\3\2\2\2\u00d7\u00d8\7G\2\2\u00d8"+
		"\u00d9\7N\2\2\u00d9\u00da\7U\2\2\u00da\u00db\7K\2\2\u00db\u00dc\7H\2\2"+
		"\u00dcL\3\2\2\2\u00dd\u00de\7G\2\2\u00de\u00df\7N\2\2\u00df\u00e0\7U\2"+
		"\2\u00e0\u00e1\7G\2\2\u00e1N\3\2\2\2\u00e2\u00e3\7E\2\2\u00e3\u00e4\7"+
		"C\2\2\u00e4\u00e5\7U\2\2\u00e5\u00e6\7G\2\2\u00e6P\3\2\2\2\u00e7\u00e8"+
		"\7Y\2\2\u00e8\u00e9\7J\2\2\u00e9\u00ea\7K\2\2\u00ea\u00eb\7N\2\2\u00eb"+
		"\u00ec\7G\2\2\u00ecR\3\2\2\2\u00ed\u00ee\7F\2\2\u00ee\u00ef\7Q\2\2\u00ef"+
		"T\3\2\2\2\u00f0\u00f1\7H\2\2\u00f1\u00f2\7Q\2\2\u00f2\u00f3\7T\2\2\u00f3"+
		"V\3\2\2\2\u00f4\u00f5\7D\2\2\u00f5\u00f6\7[\2\2\u00f6X\3\2\2\2\u00f7\u00f8"+
		"\7D\2\2\u00f8\u00f9\7G\2\2\u00f9\u00fa\7I\2\2\u00fa\u00fb\7K\2\2\u00fb"+
		"\u00fc\7P\2\2\u00fcZ\3\2\2\2\u00fd\u00fe\7T\2\2\u00fe\u00ff\7G\2\2\u00ff"+
		"\u0100\7V\2\2\u0100\u0101\7W\2\2\u0101\u0102\7T\2\2\u0102\u0103\7P\2\2"+
		"\u0103\\\3\2\2\2\u0104\u0105\7E\2\2\u0105\u0106\7Q\2\2\u0106\u0107\7P"+
		"\2\2\u0107\u0108\7U\2\2\u0108\u0109\7V\2\2\u0109^\3\2\2\2\u010a\u010b"+
		"\7V\2\2\u010b\u010c\7[\2\2\u010c\u010d\7R\2\2\u010d\u010e\7G\2\2\u010e"+
		"`\3\2\2\2\u010f\u0110\7X\2\2\u0110\u0111\7C\2\2\u0111\u0112\7T\2\2\u0112"+
		"b\3\2\2\2\u0113\u0114\7O\2\2\u0114\u0115\7Q\2\2\u0115\u0116\7F\2\2\u0116"+
		"\u0117\7W\2\2\u0117\u0118\7N\2\2\u0118\u0119\7G\2\2\u0119d\3\2\2\2\u011a"+
		"\u011e\7$\2\2\u011b\u011d\13\2\2\2\u011c\u011b\3\2\2\2\u011d\u0120\3\2"+
		"\2\2\u011e\u011f\3\2\2\2\u011e\u011c\3\2\2\2\u011f\u0121\3\2\2\2\u0120"+
		"\u011e\3\2\2\2\u0121\u0122\7$\2\2\u0122f\3\2\2\2\u0123\u0128\5i\65\2\u0124"+
		"\u0127\5i\65\2\u0125\u0127\5k\66\2\u0126\u0124\3\2\2\2\u0126\u0125\3\2"+
		"\2\2\u0127\u012a\3\2\2\2\u0128\u0126\3\2\2\2\u0128\u0129\3\2\2\2\u0129"+
		"h\3\2\2\2\u012a\u0128\3\2\2\2\u012b\u012c\t\2\2\2\u012cj\3\2\2\2\u012d"+
		"\u012e\t\3\2\2\u012el\3\2\2\2\u012f\u0130\7*\2\2\u0130\u0131\7,\2\2\u0131"+
		"\u0135\3\2\2\2\u0132\u0134\13\2\2\2\u0133\u0132\3\2\2\2\u0134\u0137\3"+
		"\2\2\2\u0135\u0136\3\2\2\2\u0135\u0133\3\2\2\2\u0136\u0138\3\2\2\2\u0137"+
		"\u0135\3\2\2\2\u0138\u0139\7,\2\2\u0139\u013a\7+\2\2\u013a\u013b\3\2\2"+
		"\2\u013b\u013c\b\67\2\2\u013cn\3\2\2\2\u013d\u013e\t\4\2\2\u013e\u013f"+
		"\3\2\2\2\u013f\u0140\b8\2\2\u0140p\3\2\2\2\7\2\u011e\u0126\u0128\u0135"+
		"\3\b\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}