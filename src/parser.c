#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 62
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 1
#define TOKEN_COUNT 37
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
  anon_sym_os_name = 14,
  anon_sym_sys_platform = 15,
  anon_sym_platform_machine = 16,
  anon_sym_platform_python_implementation = 17,
  anon_sym_platform_release = 18,
  anon_sym_platform_version = 19,
  anon_sym_python_version = 20,
  anon_sym_python_full_version = 21,
  anon_sym_implementation_name = 22,
  anon_sym_implementation_version = 23,
  anon_sym_extra = 24,
  anon_sym_in = 25,
  anon_sym_not = 26,
  aux_sym_marker_op_token1 = 27,
  sym_name = 28,
  sym_str = 29,
  sym__pre_release = 30,
  sym__post_release = 31,
  sym__developmental_release = 32,
  sym__local_version = 33,
  aux_sym_version_token1 = 34,
  aux_sym_version_token2 = 35,
  aux_sym_version_token3 = 36,
  sym_requirements = 37,
  sym__expression = 38,
  sym__version_specifier_clause = 39,
  sym_version_specifier = 40,
  sym__package_spec = 41,
  sym__extras = 42,
  sym_package_spec = 43,
  sym_version_cmp = 44,
  sym_env_var = 45,
  sym_marker_op = 46,
  sym_marker_var = 47,
  sym_marker_expr = 48,
  sym_version = 49,
  aux_sym_requirements_repeat1 = 50,
  aux_sym__version_specifier_clause_repeat1 = 51,
  aux_sym__extras_repeat1 = 52,
  aux_sym_version_repeat1 = 53,
  alias_sym_extra = 54,
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
      if (eof) ADVANCE(139);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == ',') ADVANCE(140);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == ';') ADVANCE(143);
      if (lookahead == '<') ADVANCE(150);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(151);
      if (lookahead == '[') ADVANCE(141);
      if (lookahead == ']') ADVANCE(142);
      if (lookahead == 'e') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(62);
      if (lookahead == 'n') ADVANCE(85);
      if (lookahead == 'o') ADVANCE(106);
      if (lookahead == 'p') ADVANCE(55);
      if (lookahead == 's') ADVANCE(129);
      if (lookahead == '~') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(168);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(168);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(176);
      if (lookahead == 'd') ADVANCE(26);
      if (lookahead == 'p') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(147);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(146);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(145);
      END_STATE();
    case 8:
      if (lookahead == '_') ADVANCE(77);
      END_STATE();
    case 9:
      if (lookahead == '_') ADVANCE(41);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(67);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(82);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(127);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(47);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(97);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(133);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 41:
      if (lookahead == 'f') ADVANCE(125);
      if (lookahead == 'v') ADVANCE(32);
      END_STATE();
    case 42:
      if (lookahead == 'f') ADVANCE(86);
      END_STATE();
    case 43:
      if (lookahead == 'f') ADVANCE(93);
      END_STATE();
    case 44:
      if (lookahead == 'h') ADVANCE(49);
      END_STATE();
    case 45:
      if (lookahead == 'h') ADVANCE(87);
      END_STATE();
    case 46:
      if (lookahead == 'h') ADVANCE(95);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(18);
      if (lookahead == 'y') ADVANCE(116);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 62:
      if (lookahead == 'm') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 63:
      if (lookahead == 'm') ADVANCE(154);
      END_STATE();
    case 64:
      if (lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 65:
      if (lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 66:
      if (lookahead == 'm') ADVANCE(10);
      END_STATE();
    case 67:
      if (lookahead == 'm') ADVANCE(16);
      if (lookahead == 'p') ADVANCE(130);
      if (lookahead == 'r') ADVANCE(35);
      if (lookahead == 'v') ADVANCE(36);
      END_STATE();
    case 68:
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 69:
      if (lookahead == 'm') ADVANCE(39);
      END_STATE();
    case 70:
      if (lookahead == 'm') ADVANCE(98);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(22);
      if (lookahead == 'v') ADVANCE(38);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 96:
      if (lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 97:
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 98:
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(8);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 108:
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 109:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 110:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 111:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 112:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 125:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 126:
      if (lookahead == 'v') ADVANCE(134);
      END_STATE();
    case 127:
      if (lookahead == 'v') ADVANCE(37);
      END_STATE();
    case 128:
      if (lookahead == 'x') ADVANCE(114);
      END_STATE();
    case 129:
      if (lookahead == 'y') ADVANCE(107);
      END_STATE();
    case 130:
      if (lookahead == 'y') ADVANCE(123);
      END_STATE();
    case 131:
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 132:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      END_STATE();
    case 133:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 134:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      END_STATE();
    case 135:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 136:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 137:
      if (eof) ADVANCE(139);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == ',') ADVANCE(140);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == ';') ADVANCE(143);
      if (lookahead == '<') ADVANCE(150);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(151);
      if (lookahead == '[') ADVANCE(141);
      if (lookahead == '~') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(137)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 138:
      if (eof) ADVANCE(139);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == ',') ADVANCE(140);
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == ';') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(138)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(152);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(148);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(149);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_os_name);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_sys_platform);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_platform_machine);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_platform_python_implementation);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_platform_release);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_platform_version);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_python_version);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_python_full_version);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_implementation_name);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_implementation_version);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_extra);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_marker_op_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_str);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__pre_release);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__post_release);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__developmental_release);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__local_version);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_version_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_version_token2);
      if (lookahead == '+') ADVANCE(136);
      if (lookahead == 'a' ||
          lookahead == 'b') ADVANCE(133);
      if (lookahead == 'r') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_version_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_version_token3);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 137},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 137},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 137},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 137},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 137},
  [11] = {.lex_state = 137},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 137},
  [14] = {.lex_state = 137},
  [15] = {.lex_state = 137},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 137},
  [21] = {.lex_state = 137},
  [22] = {.lex_state = 138},
  [23] = {.lex_state = 138},
  [24] = {.lex_state = 138},
  [25] = {.lex_state = 138},
  [26] = {.lex_state = 138},
  [27] = {.lex_state = 137},
  [28] = {.lex_state = 137},
  [29] = {.lex_state = 137},
  [30] = {.lex_state = 137},
  [31] = {.lex_state = 137},
  [32] = {.lex_state = 137},
  [33] = {.lex_state = 137},
  [34] = {.lex_state = 137},
  [35] = {.lex_state = 137},
  [36] = {.lex_state = 137},
  [37] = {.lex_state = 137},
  [38] = {.lex_state = 137},
  [39] = {.lex_state = 137},
  [40] = {.lex_state = 137},
  [41] = {.lex_state = 137},
  [42] = {.lex_state = 137},
  [43] = {.lex_state = 137},
  [44] = {.lex_state = 137},
  [45] = {.lex_state = 137},
  [46] = {.lex_state = 137},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 137},
  [49] = {.lex_state = 137},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 137},
  [53] = {.lex_state = 137},
  [54] = {.lex_state = 137},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 132},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 137},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 137},
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
    [sym_requirements] = STATE(58),
    [sym__expression] = STATE(30),
    [sym__package_spec] = STATE(3),
    [sym_package_spec] = STATE(30),
    [aux_sym_requirements_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_name] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(11), 1,
      sym_str,
    STATE(16), 1,
      sym_marker_var,
    STATE(17), 1,
      sym_env_var,
    STATE(49), 1,
      sym_marker_expr,
    ACTIONS(9), 11,
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
  [26] = 7,
    ACTIONS(15), 1,
      anon_sym_SEMI,
    STATE(36), 1,
      sym_version_specifier,
    STATE(46), 1,
      sym__version_specifier_clause,
    STATE(56), 1,
      sym_version_cmp,
    ACTIONS(13), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_name,
    ACTIONS(19), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 5,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
  [56] = 5,
    ACTIONS(11), 1,
      sym_str,
    STATE(16), 1,
      sym_marker_var,
    STATE(17), 1,
      sym_env_var,
    STATE(48), 1,
      sym_marker_expr,
    ACTIONS(9), 11,
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
  [82] = 4,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    STATE(10), 1,
      sym__extras,
    ACTIONS(25), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      sym_name,
  [105] = 4,
    ACTIONS(29), 1,
      sym_str,
    STATE(52), 1,
      sym_marker_var,
    STATE(54), 1,
      sym_env_var,
    ACTIONS(27), 11,
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
  [128] = 1,
    ACTIONS(31), 13,
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
  [144] = 8,
    ACTIONS(35), 1,
      sym__pre_release,
    ACTIONS(37), 1,
      sym__post_release,
    ACTIONS(39), 1,
      sym__developmental_release,
    ACTIONS(41), 1,
      sym__local_version,
    ACTIONS(43), 1,
      aux_sym_version_token2,
    ACTIONS(45), 1,
      aux_sym_version_token3,
    STATE(13), 1,
      aux_sym_version_repeat1,
    ACTIONS(33), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      sym_name,
  [173] = 1,
    ACTIONS(47), 12,
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
  [188] = 2,
    ACTIONS(51), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      sym_name,
  [205] = 2,
    ACTIONS(55), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      sym_name,
  [222] = 1,
    ACTIONS(57), 12,
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
  [237] = 3,
    ACTIONS(61), 1,
      aux_sym_version_token2,
    STATE(13), 1,
      aux_sym_version_repeat1,
    ACTIONS(59), 10,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      sym_name,
      sym__pre_release,
      sym__post_release,
      sym__developmental_release,
      sym__local_version,
      aux_sym_version_token3,
  [256] = 2,
    ACTIONS(66), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(64), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      sym_name,
  [273] = 8,
    ACTIONS(70), 1,
      sym__pre_release,
    ACTIONS(72), 1,
      sym__post_release,
    ACTIONS(74), 1,
      sym__developmental_release,
    ACTIONS(76), 1,
      sym__local_version,
    ACTIONS(78), 1,
      aux_sym_version_token2,
    ACTIONS(80), 1,
      aux_sym_version_token3,
    STATE(8), 1,
      aux_sym_version_repeat1,
    ACTIONS(68), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      sym_name,
  [302] = 6,
    ACTIONS(82), 1,
      anon_sym_in,
    ACTIONS(84), 1,
      anon_sym_not,
    STATE(6), 1,
      sym_marker_op,
    STATE(9), 1,
      sym_version_cmp,
    ACTIONS(19), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 5,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
  [327] = 2,
    ACTIONS(88), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(86), 7,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_in,
      anon_sym_not,
  [342] = 4,
    STATE(42), 1,
      sym_version_specifier,
    STATE(56), 1,
      sym_version_cmp,
    ACTIONS(19), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 5,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
  [361] = 2,
    ACTIONS(92), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(90), 7,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_in,
      anon_sym_not,
  [376] = 4,
    ACTIONS(96), 1,
      sym__post_release,
    ACTIONS(98), 1,
      sym__developmental_release,
    ACTIONS(100), 1,
      aux_sym_version_token3,
    ACTIONS(94), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      sym_name,
  [393] = 4,
    ACTIONS(37), 1,
      sym__post_release,
    ACTIONS(39), 1,
      sym__developmental_release,
    ACTIONS(45), 1,
      aux_sym_version_token3,
    ACTIONS(33), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      sym_name,
  [410] = 4,
    ACTIONS(100), 1,
      aux_sym_version_token3,
    ACTIONS(102), 1,
      aux_sym_version_token2,
    STATE(23), 1,
      aux_sym_version_repeat1,
    ACTIONS(94), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      sym_name,
  [427] = 3,
    ACTIONS(104), 1,
      aux_sym_version_token2,
    STATE(23), 1,
      aux_sym_version_repeat1,
    ACTIONS(59), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      sym_name,
      aux_sym_version_token3,
  [442] = 4,
    ACTIONS(100), 1,
      aux_sym_version_token3,
    ACTIONS(107), 1,
      aux_sym_version_token2,
    STATE(25), 1,
      aux_sym_version_repeat1,
    ACTIONS(94), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      sym_name,
  [459] = 4,
    ACTIONS(102), 1,
      aux_sym_version_token2,
    ACTIONS(111), 1,
      aux_sym_version_token3,
    STATE(23), 1,
      aux_sym_version_repeat1,
    ACTIONS(109), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      sym_name,
  [476] = 4,
    ACTIONS(45), 1,
      aux_sym_version_token3,
    ACTIONS(113), 1,
      aux_sym_version_token2,
    STATE(22), 1,
      aux_sym_version_repeat1,
    ACTIONS(33), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      sym_name,
  [493] = 3,
    ACTIONS(98), 1,
      sym__developmental_release,
    ACTIONS(100), 1,
      aux_sym_version_token3,
    ACTIONS(94), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      sym_name,
  [507] = 5,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(120), 1,
      sym_name,
    STATE(3), 1,
      sym__package_spec,
    STATE(28), 3,
      sym__expression,
      sym_package_spec,
      aux_sym_requirements_repeat1,
  [525] = 3,
    ACTIONS(111), 1,
      aux_sym_version_token3,
    ACTIONS(123), 1,
      sym__developmental_release,
    ACTIONS(109), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      sym_name,
  [539] = 5,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 1,
      sym_comment,
    STATE(3), 1,
      sym__package_spec,
    STATE(28), 3,
      sym__expression,
      sym_package_spec,
      aux_sym_requirements_repeat1,
  [557] = 3,
    ACTIONS(39), 1,
      sym__developmental_release,
    ACTIONS(45), 1,
      aux_sym_version_token3,
    ACTIONS(33), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      sym_name,
  [571] = 2,
    ACTIONS(100), 1,
      aux_sym_version_token3,
    ACTIONS(94), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      sym_name,
  [582] = 3,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      aux_sym__version_specifier_clause_repeat1,
    ACTIONS(129), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment,
      sym_name,
  [595] = 2,
    ACTIONS(136), 1,
      aux_sym_version_token3,
    ACTIONS(134), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      sym_name,
  [606] = 2,
    ACTIONS(45), 1,
      aux_sym_version_token3,
    ACTIONS(33), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      sym_name,
  [617] = 3,
    ACTIONS(140), 1,
      anon_sym_COMMA,
    STATE(38), 1,
      aux_sym__version_specifier_clause_repeat1,
    ACTIONS(138), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment,
      sym_name,
  [630] = 2,
    ACTIONS(111), 1,
      aux_sym_version_token3,
    ACTIONS(109), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      sym_name,
  [641] = 3,
    ACTIONS(140), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      aux_sym__version_specifier_clause_repeat1,
    ACTIONS(142), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment,
      sym_name,
  [654] = 1,
    ACTIONS(144), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      sym_name,
  [662] = 1,
    ACTIONS(109), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      sym_name,
  [670] = 1,
    ACTIONS(146), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      sym_name,
  [678] = 1,
    ACTIONS(129), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      sym_name,
  [686] = 1,
    ACTIONS(134), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      sym_name,
  [694] = 1,
    ACTIONS(33), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      sym_name,
  [702] = 1,
    ACTIONS(94), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      sym_name,
  [710] = 2,
    ACTIONS(150), 1,
      anon_sym_SEMI,
    ACTIONS(148), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_name,
  [719] = 3,
    ACTIONS(152), 1,
      anon_sym_COMMA,
    ACTIONS(154), 1,
      anon_sym_RBRACK,
    STATE(51), 1,
      aux_sym__extras_repeat1,
  [729] = 1,
    ACTIONS(156), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_name,
  [735] = 1,
    ACTIONS(158), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_name,
  [741] = 3,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    ACTIONS(163), 1,
      anon_sym_RBRACK,
    STATE(50), 1,
      aux_sym__extras_repeat1,
  [751] = 3,
    ACTIONS(152), 1,
      anon_sym_COMMA,
    ACTIONS(165), 1,
      anon_sym_RBRACK,
    STATE(50), 1,
      aux_sym__extras_repeat1,
  [761] = 1,
    ACTIONS(167), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_name,
  [767] = 1,
    ACTIONS(90), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_name,
  [773] = 1,
    ACTIONS(86), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_name,
  [779] = 1,
    ACTIONS(169), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [784] = 2,
    ACTIONS(171), 1,
      aux_sym_version_token1,
    STATE(39), 1,
      sym_version,
  [791] = 1,
    ACTIONS(173), 1,
      aux_sym_marker_op_token1,
  [795] = 1,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
  [799] = 1,
    ACTIONS(177), 1,
      sym_name,
  [803] = 1,
    ACTIONS(179), 1,
      anon_sym_in,
  [807] = 1,
    ACTIONS(181), 1,
      sym_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 56,
  [SMALL_STATE(5)] = 82,
  [SMALL_STATE(6)] = 105,
  [SMALL_STATE(7)] = 128,
  [SMALL_STATE(8)] = 144,
  [SMALL_STATE(9)] = 173,
  [SMALL_STATE(10)] = 188,
  [SMALL_STATE(11)] = 205,
  [SMALL_STATE(12)] = 222,
  [SMALL_STATE(13)] = 237,
  [SMALL_STATE(14)] = 256,
  [SMALL_STATE(15)] = 273,
  [SMALL_STATE(16)] = 302,
  [SMALL_STATE(17)] = 327,
  [SMALL_STATE(18)] = 342,
  [SMALL_STATE(19)] = 361,
  [SMALL_STATE(20)] = 376,
  [SMALL_STATE(21)] = 393,
  [SMALL_STATE(22)] = 410,
  [SMALL_STATE(23)] = 427,
  [SMALL_STATE(24)] = 442,
  [SMALL_STATE(25)] = 459,
  [SMALL_STATE(26)] = 476,
  [SMALL_STATE(27)] = 493,
  [SMALL_STATE(28)] = 507,
  [SMALL_STATE(29)] = 525,
  [SMALL_STATE(30)] = 539,
  [SMALL_STATE(31)] = 557,
  [SMALL_STATE(32)] = 571,
  [SMALL_STATE(33)] = 582,
  [SMALL_STATE(34)] = 595,
  [SMALL_STATE(35)] = 606,
  [SMALL_STATE(36)] = 617,
  [SMALL_STATE(37)] = 630,
  [SMALL_STATE(38)] = 641,
  [SMALL_STATE(39)] = 654,
  [SMALL_STATE(40)] = 662,
  [SMALL_STATE(41)] = 670,
  [SMALL_STATE(42)] = 678,
  [SMALL_STATE(43)] = 686,
  [SMALL_STATE(44)] = 694,
  [SMALL_STATE(45)] = 702,
  [SMALL_STATE(46)] = 710,
  [SMALL_STATE(47)] = 719,
  [SMALL_STATE(48)] = 729,
  [SMALL_STATE(49)] = 735,
  [SMALL_STATE(50)] = 741,
  [SMALL_STATE(51)] = 751,
  [SMALL_STATE(52)] = 761,
  [SMALL_STATE(53)] = 767,
  [SMALL_STATE(54)] = 773,
  [SMALL_STATE(55)] = 779,
  [SMALL_STATE(56)] = 784,
  [SMALL_STATE(57)] = 791,
  [SMALL_STATE(58)] = 795,
  [SMALL_STATE(59)] = 799,
  [SMALL_STATE(60)] = 803,
  [SMALL_STATE(61)] = 807,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirements, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_spec, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__package_spec, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__package_spec, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_cmp, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_op, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__package_spec, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__package_spec, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__extras, 4, .production_id = 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__extras, 4, .production_id = 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_op, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_version_repeat1, 2), SHIFT_REPEAT(13),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__extras, 3, .production_id = 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__extras, 3, .production_id = 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_var, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_marker_var, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_var, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_var, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_version_repeat1, 2), SHIFT_REPEAT(23),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 4),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_requirements_repeat1, 2),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_requirements_repeat1, 2), SHIFT_REPEAT(28),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_requirements_repeat1, 2), SHIFT_REPEAT(5),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirements, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__version_specifier_clause_repeat1, 2),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__version_specifier_clause_repeat1, 2), SHIFT_REPEAT(18),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 5),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_specifier_clause, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_specifier_clause, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_specifier, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 6),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_spec, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_spec, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_spec, 4),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__extras_repeat1, 2), SHIFT_REPEAT(59),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__extras_repeat1, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_expr, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__extras_repeat1, 2, .production_id = 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [175] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
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
