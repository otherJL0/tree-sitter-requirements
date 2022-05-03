#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 65
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 1
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_COMMA = 1,
  anon_sym_LBRACK = 2,
  anon_sym_RBRACK = 3,
  anon_sym_SEMI = 4,
  sym_comment = 5,
  anon_sym_TILDE_EQ = 6,
  anon_sym_EQ_EQ = 7,
  anon_sym_BANG_EQ = 8,
  anon_sym_LT_EQ = 9,
  anon_sym_GT_EQ = 10,
  anon_sym_LT = 11,
  anon_sym_GT = 12,
  anon_sym_EQ_EQ_EQ = 13,
  anon_sym_DASHe = 14,
  anon_sym_DASH_DASHextra_DASHindex_DASHurl = 15,
  anon_sym_os_name = 16,
  anon_sym_sys_platform = 17,
  anon_sym_platform_machine = 18,
  anon_sym_platform_python_implementation = 19,
  anon_sym_platform_release = 20,
  anon_sym_platform_version = 21,
  anon_sym_python_version = 22,
  anon_sym_python_full_version = 23,
  anon_sym_implementation_name = 24,
  anon_sym_implementation_version = 25,
  anon_sym_extra = 26,
  sym_url = 27,
  anon_sym_in = 28,
  anon_sym_not = 29,
  aux_sym_marker_op_token1 = 30,
  sym_name = 31,
  sym_str = 32,
  sym__pre_release = 33,
  sym__post_release = 34,
  sym__developmental_release = 35,
  sym__local_version = 36,
  aux_sym_version_token1 = 37,
  aux_sym_version_token2 = 38,
  aux_sym_version_token3 = 39,
  sym_requirements = 40,
  sym__expression = 41,
  sym__version_specifier_clause = 42,
  sym_version_specifier = 43,
  sym__package_spec = 44,
  sym__extras = 45,
  sym_package_spec = 46,
  sym_version_cmp = 47,
  sym_option = 48,
  sym__extra_index_url = 49,
  sym_env_var = 50,
  sym_marker_op = 51,
  sym_marker_var = 52,
  sym_marker_expr = 53,
  sym_version = 54,
  aux_sym_requirements_repeat1 = 55,
  aux_sym__version_specifier_clause_repeat1 = 56,
  aux_sym__extras_repeat1 = 57,
  aux_sym_version_repeat1 = 58,
  alias_sym_extra = 59,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_SEMI] = ";",
  [sym_comment] = "comment",
  [anon_sym_TILDE_EQ] = "~=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_EQ_EQ_EQ] = "===",
  [anon_sym_DASHe] = "-e",
  [anon_sym_DASH_DASHextra_DASHindex_DASHurl] = "--extra-index-url",
  [anon_sym_os_name] = "os_name",
  [anon_sym_sys_platform] = "sys_platform",
  [anon_sym_platform_machine] = "platform_machine",
  [anon_sym_platform_python_implementation] = "platform_python_implementation",
  [anon_sym_platform_release] = "platform_release",
  [anon_sym_platform_version] = "platform_version",
  [anon_sym_python_version] = "python_version",
  [anon_sym_python_full_version] = "python_full_version",
  [anon_sym_implementation_name] = "implementation_name",
  [anon_sym_implementation_version] = "implementation_version",
  [anon_sym_extra] = "extra",
  [sym_url] = "url",
  [anon_sym_in] = "in",
  [anon_sym_not] = "not",
  [aux_sym_marker_op_token1] = "marker_op_token1",
  [sym_name] = "name",
  [sym_str] = "str",
  [sym__pre_release] = "_pre_release",
  [sym__post_release] = "_post_release",
  [sym__developmental_release] = "_developmental_release",
  [sym__local_version] = "_local_version",
  [aux_sym_version_token1] = "version_token1",
  [aux_sym_version_token2] = "version_token2",
  [aux_sym_version_token3] = "version_token3",
  [sym_requirements] = "requirements",
  [sym__expression] = "_expression",
  [sym__version_specifier_clause] = "_version_specifier_clause",
  [sym_version_specifier] = "version_specifier",
  [sym__package_spec] = "_package_spec",
  [sym__extras] = "_extras",
  [sym_package_spec] = "package_spec",
  [sym_version_cmp] = "version_cmp",
  [sym_option] = "option",
  [sym__extra_index_url] = "_extra_index_url",
  [sym_env_var] = "env_var",
  [sym_marker_op] = "marker_op",
  [sym_marker_var] = "marker_var",
  [sym_marker_expr] = "marker_expr",
  [sym_version] = "version",
  [aux_sym_requirements_repeat1] = "requirements_repeat1",
  [aux_sym__version_specifier_clause_repeat1] = "_version_specifier_clause_repeat1",
  [aux_sym__extras_repeat1] = "_extras_repeat1",
  [aux_sym_version_repeat1] = "version_repeat1",
  [alias_sym_extra] = "extra",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_comment] = sym_comment,
  [anon_sym_TILDE_EQ] = anon_sym_TILDE_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_EQ_EQ_EQ] = anon_sym_EQ_EQ_EQ,
  [anon_sym_DASHe] = anon_sym_DASHe,
  [anon_sym_DASH_DASHextra_DASHindex_DASHurl] = anon_sym_DASH_DASHextra_DASHindex_DASHurl,
  [anon_sym_os_name] = anon_sym_os_name,
  [anon_sym_sys_platform] = anon_sym_sys_platform,
  [anon_sym_platform_machine] = anon_sym_platform_machine,
  [anon_sym_platform_python_implementation] = anon_sym_platform_python_implementation,
  [anon_sym_platform_release] = anon_sym_platform_release,
  [anon_sym_platform_version] = anon_sym_platform_version,
  [anon_sym_python_version] = anon_sym_python_version,
  [anon_sym_python_full_version] = anon_sym_python_full_version,
  [anon_sym_implementation_name] = anon_sym_implementation_name,
  [anon_sym_implementation_version] = anon_sym_implementation_version,
  [anon_sym_extra] = anon_sym_extra,
  [sym_url] = sym_url,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_not] = anon_sym_not,
  [aux_sym_marker_op_token1] = aux_sym_marker_op_token1,
  [sym_name] = sym_name,
  [sym_str] = sym_str,
  [sym__pre_release] = sym__pre_release,
  [sym__post_release] = sym__post_release,
  [sym__developmental_release] = sym__developmental_release,
  [sym__local_version] = sym__local_version,
  [aux_sym_version_token1] = aux_sym_version_token1,
  [aux_sym_version_token2] = aux_sym_version_token2,
  [aux_sym_version_token3] = aux_sym_version_token3,
  [sym_requirements] = sym_requirements,
  [sym__expression] = sym__expression,
  [sym__version_specifier_clause] = sym__version_specifier_clause,
  [sym_version_specifier] = sym_version_specifier,
  [sym__package_spec] = sym__package_spec,
  [sym__extras] = sym__extras,
  [sym_package_spec] = sym_package_spec,
  [sym_version_cmp] = sym_version_cmp,
  [sym_option] = sym_option,
  [sym__extra_index_url] = sym__extra_index_url,
  [sym_env_var] = sym_env_var,
  [sym_marker_op] = sym_marker_op,
  [sym_marker_var] = sym_marker_var,
  [sym_marker_expr] = sym_marker_expr,
  [sym_version] = sym_version,
  [aux_sym_requirements_repeat1] = aux_sym_requirements_repeat1,
  [aux_sym__version_specifier_clause_repeat1] = aux_sym__version_specifier_clause_repeat1,
  [aux_sym__extras_repeat1] = aux_sym__extras_repeat1,
  [aux_sym_version_repeat1] = aux_sym_version_repeat1,
  [alias_sym_extra] = alias_sym_extra,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_TILDE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASHextra_DASHindex_DASHurl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_os_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sys_platform] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_platform_machine] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_platform_python_implementation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_platform_release] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_platform_version] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_python_version] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_python_full_version] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_implementation_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_implementation_version] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extra] = {
    .visible = true,
    .named = false,
  },
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_marker_op_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_str] = {
    .visible = true,
    .named = true,
  },
  [sym__pre_release] = {
    .visible = false,
    .named = true,
  },
  [sym__post_release] = {
    .visible = false,
    .named = true,
  },
  [sym__developmental_release] = {
    .visible = false,
    .named = true,
  },
  [sym__local_version] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_version_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_version_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_version_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_requirements] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__version_specifier_clause] = {
    .visible = false,
    .named = true,
  },
  [sym_version_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym__package_spec] = {
    .visible = false,
    .named = true,
  },
  [sym__extras] = {
    .visible = false,
    .named = true,
  },
  [sym_package_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_version_cmp] = {
    .visible = true,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym__extra_index_url] = {
    .visible = false,
    .named = true,
  },
  [sym_env_var] = {
    .visible = true,
    .named = true,
  },
  [sym_marker_op] = {
    .visible = true,
    .named = true,
  },
  [sym_marker_var] = {
    .visible = true,
    .named = true,
  },
  [sym_marker_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_requirements_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__version_specifier_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__extras_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_version_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_extra] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_extra,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(166);
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(171);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == ',') ADVANCE(167);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == ';') ADVANCE(170);
      if (lookahead == '<') ADVANCE(177);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '>') ADVANCE(178);
      if (lookahead == '[') ADVANCE(168);
      if (lookahead == ']') ADVANCE(169);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == 'i') ADVANCE(78);
      if (lookahead == 'n') ADVANCE(102);
      if (lookahead == 'o') ADVANCE(126);
      if (lookahead == 'p') ADVANCE(70);
      if (lookahead == 's') ADVANCE(156);
      if (lookahead == '~') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(199);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(199);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(207);
      if (lookahead == 'd') ADVANCE(36);
      if (lookahead == 'p') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 5:
      if (lookahead == '+') ADVANCE(58);
      if (lookahead == 'p') ADVANCE(6);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == '+') ADVANCE(58);
      if (lookahead == 's') ADVANCE(193);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      END_STATE();
    case 7:
      if (lookahead == '+') ADVANCE(58);
      if (lookahead == 't') ADVANCE(5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '+') ADVANCE(58);
      if (lookahead == 't') ADVANCE(7);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '+') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(61);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(150);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(174);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(173);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(172);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(94);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(53);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(83);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(99);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(152);
      END_STATE();
    case 21:
      if (lookahead == '_') ADVANCE(62);
      END_STATE();
    case 22:
      if (lookahead == '_') ADVANCE(115);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(160);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 53:
      if (lookahead == 'f') ADVANCE(149);
      if (lookahead == 'v') ADVANCE(43);
      END_STATE();
    case 54:
      if (lookahead == 'f') ADVANCE(103);
      END_STATE();
    case 55:
      if (lookahead == 'f') ADVANCE(110);
      END_STATE();
    case 56:
      if (lookahead == 'h') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 57:
      if (lookahead == 'h') ADVANCE(104);
      END_STATE();
    case 58:
      if (lookahead == 'h') ADVANCE(142);
      END_STATE();
    case 59:
      if (lookahead == 'h') ADVANCE(64);
      END_STATE();
    case 60:
      if (lookahead == 'h') ADVANCE(112);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(27);
      if (lookahead == 'y') ADVANCE(137);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 78:
      if (lookahead == 'm') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 79:
      if (lookahead == 'm') ADVANCE(183);
      END_STATE();
    case 80:
      if (lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 81:
      if (lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 82:
      if (lookahead == 'm') ADVANCE(38);
      END_STATE();
    case 83:
      if (lookahead == 'm') ADVANCE(25);
      if (lookahead == 'p') ADVANCE(157);
      if (lookahead == 'r') ADVANCE(46);
      if (lookahead == 'v') ADVANCE(47);
      END_STATE();
    case 84:
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 85:
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 86:
      if (lookahead == 'm') ADVANCE(116);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(31);
      if (lookahead == 'v') ADVANCE(49);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 113:
      if (lookahead == 'p') ADVANCE(72);
      END_STATE();
    case 114:
      if (lookahead == 'p') ADVANCE(127);
      END_STATE();
    case 115:
      if (lookahead == 'p') ADVANCE(76);
      END_STATE();
    case 116:
      if (lookahead == 'p') ADVANCE(77);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 126:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 127:
      if (lookahead == 's') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 128:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 129:
      if (lookahead == 's') ADVANCE(141);
      END_STATE();
    case 130:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 149:
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 150:
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 151:
      if (lookahead == 'v') ADVANCE(161);
      END_STATE();
    case 152:
      if (lookahead == 'v') ADVANCE(48);
      END_STATE();
    case 153:
      if (lookahead == 'x') ADVANCE(135);
      END_STATE();
    case 154:
      if (lookahead == 'x') ADVANCE(12);
      END_STATE();
    case 155:
      if (lookahead == 'x') ADVANCE(144);
      END_STATE();
    case 156:
      if (lookahead == 'y') ADVANCE(128);
      END_STATE();
    case 157:
      if (lookahead == 'y') ADVANCE(147);
      END_STATE();
    case 158:
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 159:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(197);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      END_STATE();
    case 162:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 163:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 164:
      if (eof) ADVANCE(166);
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '#') ADVANCE(171);
      if (lookahead == ',') ADVANCE(167);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == ';') ADVANCE(170);
      if (lookahead == '<') ADVANCE(177);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '>') ADVANCE(178);
      if (lookahead == '[') ADVANCE(168);
      if (lookahead == '~') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(164)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 165:
      if (eof) ADVANCE(166);
      if (lookahead == '#') ADVANCE(171);
      if (lookahead == ',') ADVANCE(167);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == ';') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(165)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(179);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(175);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(176);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_DASHe);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_DASH_DASHextra_DASHindex_DASHurl);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_os_name);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_sys_platform);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_platform_machine);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_platform_python_implementation);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_platform_release);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_platform_version);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_python_version);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_python_full_version);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_implementation_name);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_implementation_version);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_extra);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '+') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(194);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_url);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_marker_op_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_str);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__pre_release);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__post_release);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__developmental_release);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__local_version);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_version_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_version_token2);
      if (lookahead == '+') ADVANCE(163);
      if (lookahead == 'a' ||
          lookahead == 'b') ADVANCE(160);
      if (lookahead == 'r') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_version_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_version_token3);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 164},
  [2] = {.lex_state = 164},
  [3] = {.lex_state = 164},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 164},
  [8] = {.lex_state = 164},
  [9] = {.lex_state = 164},
  [10] = {.lex_state = 164},
  [11] = {.lex_state = 164},
  [12] = {.lex_state = 164},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 164},
  [18] = {.lex_state = 164},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 164},
  [22] = {.lex_state = 165},
  [23] = {.lex_state = 165},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 165},
  [26] = {.lex_state = 164},
  [27] = {.lex_state = 165},
  [28] = {.lex_state = 165},
  [29] = {.lex_state = 164},
  [30] = {.lex_state = 164},
  [31] = {.lex_state = 164},
  [32] = {.lex_state = 164},
  [33] = {.lex_state = 164},
  [34] = {.lex_state = 164},
  [35] = {.lex_state = 164},
  [36] = {.lex_state = 164},
  [37] = {.lex_state = 164},
  [38] = {.lex_state = 164},
  [39] = {.lex_state = 164},
  [40] = {.lex_state = 164},
  [41] = {.lex_state = 164},
  [42] = {.lex_state = 164},
  [43] = {.lex_state = 164},
  [44] = {.lex_state = 164},
  [45] = {.lex_state = 164},
  [46] = {.lex_state = 164},
  [47] = {.lex_state = 164},
  [48] = {.lex_state = 164},
  [49] = {.lex_state = 164},
  [50] = {.lex_state = 164},
  [51] = {.lex_state = 164},
  [52] = {.lex_state = 164},
  [53] = {.lex_state = 164},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 56},
  [61] = {.lex_state = 159},
  [62] = {.lex_state = 164},
  [63] = {.lex_state = 164},
  [64] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_TILDE_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(1),
    [anon_sym_DASHe] = ACTIONS(1),
    [anon_sym_DASH_DASHextra_DASHindex_DASHurl] = ACTIONS(1),
    [anon_sym_os_name] = ACTIONS(1),
    [anon_sym_sys_platform] = ACTIONS(1),
    [anon_sym_platform_machine] = ACTIONS(1),
    [anon_sym_platform_python_implementation] = ACTIONS(1),
    [anon_sym_platform_release] = ACTIONS(1),
    [anon_sym_platform_version] = ACTIONS(1),
    [anon_sym_python_version] = ACTIONS(1),
    [anon_sym_python_full_version] = ACTIONS(1),
    [anon_sym_implementation_name] = ACTIONS(1),
    [anon_sym_implementation_version] = ACTIONS(1),
    [anon_sym_extra] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [sym_str] = ACTIONS(1),
    [sym__pre_release] = ACTIONS(1),
    [sym__post_release] = ACTIONS(1),
    [sym__developmental_release] = ACTIONS(1),
    [sym__local_version] = ACTIONS(1),
    [aux_sym_version_token1] = ACTIONS(1),
    [aux_sym_version_token2] = ACTIONS(1),
    [aux_sym_version_token3] = ACTIONS(1),
  },
  [1] = {
    [sym_requirements] = STATE(64),
    [sym__expression] = STATE(18),
    [sym__package_spec] = STATE(2),
    [sym_package_spec] = STATE(18),
    [sym_option] = STATE(18),
    [sym__extra_index_url] = STATE(51),
    [aux_sym_requirements_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DASHe] = ACTIONS(7),
    [anon_sym_DASH_DASHextra_DASHindex_DASHurl] = ACTIONS(7),
    [sym_name] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(13), 1,
      anon_sym_SEMI,
    STATE(36), 1,
      sym_version_specifier,
    STATE(46), 1,
      sym__version_specifier_clause,
    STATE(58), 1,
      sym_version_cmp,
    ACTIONS(17), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(11), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_DASHe,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      sym_name,
    ACTIONS(15), 5,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
  [32] = 4,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      sym__extras,
    ACTIONS(23), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_DASHe,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      sym_name,
  [57] = 5,
    ACTIONS(27), 1,
      sym_str,
    STATE(14), 1,
      sym_marker_var,
    STATE(20), 1,
      sym_env_var,
    STATE(49), 1,
      sym_marker_expr,
    ACTIONS(25), 11,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_platform_release,
      anon_sym_platform_version,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
  [83] = 5,
    ACTIONS(27), 1,
      sym_str,
    STATE(14), 1,
      sym_marker_var,
    STATE(20), 1,
      sym_env_var,
    STATE(47), 1,
      sym_marker_expr,
    ACTIONS(25), 11,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_platform_release,
      anon_sym_platform_version,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
  [109] = 4,
    ACTIONS(31), 1,
      sym_str,
    STATE(48), 1,
      sym_marker_var,
    STATE(53), 1,
      sym_env_var,
    ACTIONS(29), 11,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_platform_release,
      anon_sym_platform_version,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
  [132] = 2,
    ACTIONS(35), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_DASHe,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      sym_name,
  [151] = 3,
    ACTIONS(39), 1,
      aux_sym_version_token2,
    STATE(8), 1,
      aux_sym_version_repeat1,
    ACTIONS(37), 12,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASHe,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      sym_name,
      sym__pre_release,
      sym__post_release,
      sym__developmental_release,
      sym__local_version,
      aux_sym_version_token3,
  [172] = 2,
    ACTIONS(44), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(42), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_DASHe,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      sym_name,
  [191] = 2,
    ACTIONS(48), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(46), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_DASHe,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      sym_name,
  [210] = 8,
    ACTIONS(52), 1,
      sym__pre_release,
    ACTIONS(54), 1,
      sym__post_release,
    ACTIONS(56), 1,
      sym__developmental_release,
    ACTIONS(58), 1,
      sym__local_version,
    ACTIONS(60), 1,
      aux_sym_version_token2,
    ACTIONS(62), 1,
      aux_sym_version_token3,
    STATE(8), 1,
      aux_sym_version_repeat1,
    ACTIONS(50), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASHe,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      sym_name,
  [241] = 8,
    ACTIONS(66), 1,
      sym__pre_release,
    ACTIONS(68), 1,
      sym__post_release,
    ACTIONS(70), 1,
      sym__developmental_release,
    ACTIONS(72), 1,
      sym__local_version,
    ACTIONS(74), 1,
      aux_sym_version_token2,
    ACTIONS(76), 1,
      aux_sym_version_token3,
    STATE(11), 1,
      aux_sym_version_repeat1,
    ACTIONS(64), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASHe,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      sym_name,
  [272] = 1,
    ACTIONS(78), 13,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_platform_release,
      anon_sym_platform_version,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
      sym_str,
      aux_sym_version_token1,
  [288] = 6,
    ACTIONS(80), 1,
      anon_sym_in,
    ACTIONS(82), 1,
      anon_sym_not,
    STATE(6), 1,
      sym_marker_op,
    STATE(15), 1,
      sym_version_cmp,
    ACTIONS(17), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(15), 5,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
  [313] = 1,
    ACTIONS(84), 12,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_platform_release,
      anon_sym_platform_version,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
      sym_str,
  [328] = 1,
    ACTIONS(86), 12,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_platform_release,
      anon_sym_platform_version,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
      sym_str,
  [343] = 7,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(90), 1,
      sym_comment,
    ACTIONS(96), 1,
      sym_name,
    STATE(2), 1,
      sym__package_spec,
    STATE(51), 1,
      sym__extra_index_url,
    ACTIONS(93), 2,
      anon_sym_DASHe,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
    STATE(17), 4,
      sym__expression,
      sym_package_spec,
      sym_option,
      aux_sym_requirements_repeat1,
  [369] = 7,
    ACTIONS(9), 1,
      sym_name,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 1,
      sym_comment,
    STATE(2), 1,
      sym__package_spec,
    STATE(51), 1,
      sym__extra_index_url,
    ACTIONS(7), 2,
      anon_sym_DASHe,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
    STATE(17), 4,
      sym__expression,
      sym_package_spec,
      sym_option,
      aux_sym_requirements_repeat1,
  [395] = 4,
    STATE(40), 1,
      sym_version_specifier,
    STATE(58), 1,
      sym_version_cmp,
    ACTIONS(17), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(15), 5,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
  [414] = 2,
    ACTIONS(105), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(103), 7,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_in,
      anon_sym_not,
  [429] = 4,
    ACTIONS(54), 1,
      sym__post_release,
    ACTIONS(56), 1,
      sym__developmental_release,
    ACTIONS(62), 1,
      aux_sym_version_token3,
    ACTIONS(50), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASHe,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      sym_name,
  [448] = 4,
    ACTIONS(109), 1,
      aux_sym_version_token2,
    ACTIONS(111), 1,
      aux_sym_version_token3,
    STATE(23), 1,
      aux_sym_version_repeat1,
    ACTIONS(107), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASHe,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      sym_name,
  [467] = 3,
    ACTIONS(113), 1,
      aux_sym_version_token2,
    STATE(23), 1,
      aux_sym_version_repeat1,
    ACTIONS(37), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASHe,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      sym_name,
      aux_sym_version_token3,
  [484] = 2,
    ACTIONS(118), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(116), 7,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_in,
      anon_sym_not,
  [499] = 4,
    ACTIONS(62), 1,
      aux_sym_version_token3,
    ACTIONS(120), 1,
      aux_sym_version_token2,
    STATE(22), 1,
      aux_sym_version_repeat1,
    ACTIONS(50), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASHe,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      sym_name,
  [518] = 4,
    ACTIONS(111), 1,
      aux_sym_version_token3,
    ACTIONS(122), 1,
      sym__post_release,
    ACTIONS(124), 1,
      sym__developmental_release,
    ACTIONS(107), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASHe,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      sym_name,
  [537] = 4,
    ACTIONS(109), 1,
      aux_sym_version_token2,
    ACTIONS(128), 1,
      aux_sym_version_token3,
    STATE(23), 1,
      aux_sym_version_repeat1,
    ACTIONS(126), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASHe,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      sym_name,
  [556] = 4,
    ACTIONS(111), 1,
      aux_sym_version_token3,
    ACTIONS(130), 1,
      aux_sym_version_token2,
    STATE(27), 1,
      aux_sym_version_repeat1,
    ACTIONS(107), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASHe,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      sym_name,
  [575] = 3,
    ACTIONS(56), 1,
      sym__developmental_release,
    ACTIONS(62), 1,
      aux_sym_version_token3,
    ACTIONS(50), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASHe,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      sym_name,
  [591] = 3,
    ACTIONS(128), 1,
      aux_sym_version_token3,
    ACTIONS(132), 1,
      sym__developmental_release,
    ACTIONS(126), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASHe,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      sym_name,
  [607] = 3,
    ACTIONS(111), 1,
      aux_sym_version_token3,
    ACTIONS(124), 1,
      sym__developmental_release,
    ACTIONS(107), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASHe,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      sym_name,
  [623] = 3,
    ACTIONS(136), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      aux_sym__version_specifier_clause_repeat1,
    ACTIONS(134), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASHe,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      sym_name,
  [638] = 2,
    ACTIONS(141), 1,
      aux_sym_version_token3,
    ACTIONS(139), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASHe,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      sym_name,
  [651] = 2,
    ACTIONS(128), 1,
      aux_sym_version_token3,
    ACTIONS(126), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASHe,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      sym_name,
  [664] = 2,
    ACTIONS(62), 1,
      aux_sym_version_token3,
    ACTIONS(50), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASHe,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      sym_name,
  [677] = 3,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    STATE(38), 1,
      aux_sym__version_specifier_clause_repeat1,
    ACTIONS(143), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASHe,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      sym_name,
  [692] = 2,
    ACTIONS(111), 1,
      aux_sym_version_token3,
    ACTIONS(107), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASHe,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      sym_name,
  [705] = 3,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      aux_sym__version_specifier_clause_repeat1,
    ACTIONS(147), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASHe,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      sym_name,
  [720] = 1,
    ACTIONS(126), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASHe,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      sym_name,
  [730] = 1,
    ACTIONS(134), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASHe,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      sym_name,
  [740] = 1,
    ACTIONS(149), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASHe,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      sym_name,
  [750] = 1,
    ACTIONS(151), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASHe,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      sym_name,
  [760] = 1,
    ACTIONS(50), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASHe,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      sym_name,
  [770] = 1,
    ACTIONS(139), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASHe,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      sym_name,
  [780] = 1,
    ACTIONS(107), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASHe,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      sym_name,
  [790] = 2,
    ACTIONS(155), 1,
      anon_sym_SEMI,
    ACTIONS(153), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_DASHe,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      sym_name,
  [801] = 1,
    ACTIONS(157), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_DASHe,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      sym_name,
  [809] = 1,
    ACTIONS(159), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_DASHe,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      sym_name,
  [817] = 1,
    ACTIONS(161), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_DASHe,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      sym_name,
  [825] = 1,
    ACTIONS(163), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_DASHe,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      sym_name,
  [833] = 1,
    ACTIONS(165), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_DASHe,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      sym_name,
  [841] = 1,
    ACTIONS(116), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_DASHe,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      sym_name,
  [849] = 1,
    ACTIONS(103), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_DASHe,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      sym_name,
  [857] = 3,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(170), 1,
      anon_sym_RBRACK,
    STATE(54), 1,
      aux_sym__extras_repeat1,
  [867] = 3,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    ACTIONS(174), 1,
      anon_sym_RBRACK,
    STATE(54), 1,
      aux_sym__extras_repeat1,
  [877] = 3,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    ACTIONS(176), 1,
      anon_sym_RBRACK,
    STATE(55), 1,
      aux_sym__extras_repeat1,
  [887] = 1,
    ACTIONS(178), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [892] = 2,
    ACTIONS(180), 1,
      aux_sym_version_token1,
    STATE(42), 1,
      sym_version,
  [899] = 1,
    ACTIONS(182), 1,
      anon_sym_in,
  [903] = 1,
    ACTIONS(184), 1,
      sym_url,
  [907] = 1,
    ACTIONS(186), 1,
      aux_sym_marker_op_token1,
  [911] = 1,
    ACTIONS(188), 1,
      sym_name,
  [915] = 1,
    ACTIONS(190), 1,
      sym_name,
  [919] = 1,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 57,
  [SMALL_STATE(5)] = 83,
  [SMALL_STATE(6)] = 109,
  [SMALL_STATE(7)] = 132,
  [SMALL_STATE(8)] = 151,
  [SMALL_STATE(9)] = 172,
  [SMALL_STATE(10)] = 191,
  [SMALL_STATE(11)] = 210,
  [SMALL_STATE(12)] = 241,
  [SMALL_STATE(13)] = 272,
  [SMALL_STATE(14)] = 288,
  [SMALL_STATE(15)] = 313,
  [SMALL_STATE(16)] = 328,
  [SMALL_STATE(17)] = 343,
  [SMALL_STATE(18)] = 369,
  [SMALL_STATE(19)] = 395,
  [SMALL_STATE(20)] = 414,
  [SMALL_STATE(21)] = 429,
  [SMALL_STATE(22)] = 448,
  [SMALL_STATE(23)] = 467,
  [SMALL_STATE(24)] = 484,
  [SMALL_STATE(25)] = 499,
  [SMALL_STATE(26)] = 518,
  [SMALL_STATE(27)] = 537,
  [SMALL_STATE(28)] = 556,
  [SMALL_STATE(29)] = 575,
  [SMALL_STATE(30)] = 591,
  [SMALL_STATE(31)] = 607,
  [SMALL_STATE(32)] = 623,
  [SMALL_STATE(33)] = 638,
  [SMALL_STATE(34)] = 651,
  [SMALL_STATE(35)] = 664,
  [SMALL_STATE(36)] = 677,
  [SMALL_STATE(37)] = 692,
  [SMALL_STATE(38)] = 705,
  [SMALL_STATE(39)] = 720,
  [SMALL_STATE(40)] = 730,
  [SMALL_STATE(41)] = 740,
  [SMALL_STATE(42)] = 750,
  [SMALL_STATE(43)] = 760,
  [SMALL_STATE(44)] = 770,
  [SMALL_STATE(45)] = 780,
  [SMALL_STATE(46)] = 790,
  [SMALL_STATE(47)] = 801,
  [SMALL_STATE(48)] = 809,
  [SMALL_STATE(49)] = 817,
  [SMALL_STATE(50)] = 825,
  [SMALL_STATE(51)] = 833,
  [SMALL_STATE(52)] = 841,
  [SMALL_STATE(53)] = 849,
  [SMALL_STATE(54)] = 857,
  [SMALL_STATE(55)] = 867,
  [SMALL_STATE(56)] = 877,
  [SMALL_STATE(57)] = 887,
  [SMALL_STATE(58)] = 892,
  [SMALL_STATE(59)] = 899,
  [SMALL_STATE(60)] = 903,
  [SMALL_STATE(61)] = 907,
  [SMALL_STATE(62)] = 911,
  [SMALL_STATE(63)] = 915,
  [SMALL_STATE(64)] = 919,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirements, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_spec, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__package_spec, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__package_spec, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__extras, 4, .production_id = 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__extras, 4, .production_id = 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_version_repeat1, 2), SHIFT_REPEAT(8),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__package_spec, 2),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__package_spec, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__extras, 3, .production_id = 1),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__extras, 3, .production_id = 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_cmp, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_op, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_op, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_requirements_repeat1, 2),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_requirements_repeat1, 2), SHIFT_REPEAT(17),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_requirements_repeat1, 2), SHIFT_REPEAT(60),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_requirements_repeat1, 2), SHIFT_REPEAT(3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirements, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_var, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_marker_var, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_version_repeat1, 2), SHIFT_REPEAT(23),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_var, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_var, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 4),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__version_specifier_clause_repeat1, 2),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__version_specifier_clause_repeat1, 2), SHIFT_REPEAT(19),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 5),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_specifier_clause, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_specifier_clause, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 6),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_specifier, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_spec, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_spec, 4),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_expr, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_spec, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__extra_index_url, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__extras_repeat1, 2), SHIFT_REPEAT(62),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__extras_repeat1, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__extras_repeat1, 2, .production_id = 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [192] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_requirements(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
