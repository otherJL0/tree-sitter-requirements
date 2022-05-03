#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 64
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 65
#define ALIAS_COUNT 1
#define TOKEN_COUNT 47
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
  anon_sym_DASH_DASHextra_DASHindex_DASHurl = 14,
  anon_sym_DASH_DASHindex_DASHurl = 15,
  anon_sym_DASHe = 16,
  anon_sym_DASH_DASHeditable = 17,
  anon_sym_DASHr = 18,
  anon_sym_DASH_DASHrequirement = 19,
  anon_sym_DASHc = 20,
  anon_sym_DASH_DASHconstraint = 21,
  anon_sym_os_name = 22,
  anon_sym_sys_platform = 23,
  anon_sym_platform_machine = 24,
  anon_sym_platform_python_implementation = 25,
  anon_sym_platform_release = 26,
  anon_sym_platform_version = 27,
  anon_sym_python_version = 28,
  anon_sym_python_full_version = 29,
  anon_sym_implementation_name = 30,
  anon_sym_implementation_version = 31,
  anon_sym_extra = 32,
  sym_url = 33,
  sym_local_path = 34,
  anon_sym_in = 35,
  anon_sym_not = 36,
  aux_sym_marker_op_token1 = 37,
  sym_name = 38,
  sym_str = 39,
  sym__pre_release = 40,
  sym__post_release = 41,
  sym__developmental_release = 42,
  sym__local_version = 43,
  aux_sym_version_token1 = 44,
  aux_sym_version_token2 = 45,
  aux_sym_version_token3 = 46,
  sym_requirements = 47,
  sym__expression = 48,
  sym__version_specifier_clause = 49,
  sym_version_specifier = 50,
  sym__package_spec = 51,
  sym__extras = 52,
  sym_package_spec = 53,
  sym_version_cmp = 54,
  sym_option = 55,
  sym_env_var = 56,
  sym_marker_op = 57,
  sym_marker_var = 58,
  sym_marker_expr = 59,
  sym_version = 60,
  aux_sym_requirements_repeat1 = 61,
  aux_sym__version_specifier_clause_repeat1 = 62,
  aux_sym__extras_repeat1 = 63,
  aux_sym_version_repeat1 = 64,
  alias_sym_extra = 65,
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
  [anon_sym_DASH_DASHextra_DASHindex_DASHurl] = "--extra-index-url",
  [anon_sym_DASH_DASHindex_DASHurl] = "--index-url",
  [anon_sym_DASHe] = "-e",
  [anon_sym_DASH_DASHeditable] = "--editable",
  [anon_sym_DASHr] = "-r",
  [anon_sym_DASH_DASHrequirement] = "--requirement",
  [anon_sym_DASHc] = "-c",
  [anon_sym_DASH_DASHconstraint] = "--constraint",
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
  [sym_local_path] = "local_path",
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
  [anon_sym_DASH_DASHextra_DASHindex_DASHurl] = anon_sym_DASH_DASHextra_DASHindex_DASHurl,
  [anon_sym_DASH_DASHindex_DASHurl] = anon_sym_DASH_DASHindex_DASHurl,
  [anon_sym_DASHe] = anon_sym_DASHe,
  [anon_sym_DASH_DASHeditable] = anon_sym_DASH_DASHeditable,
  [anon_sym_DASHr] = anon_sym_DASHr,
  [anon_sym_DASH_DASHrequirement] = anon_sym_DASH_DASHrequirement,
  [anon_sym_DASHc] = anon_sym_DASHc,
  [anon_sym_DASH_DASHconstraint] = anon_sym_DASH_DASHconstraint,
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
  [sym_local_path] = sym_local_path,
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
  [anon_sym_DASH_DASHextra_DASHindex_DASHurl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASHindex_DASHurl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASHeditable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASHrequirement] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASHconstraint] = {
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
  [sym_local_path] = {
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
      if (eof) ADVANCE(189);
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(197);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == ',') ADVANCE(190);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == ';') ADVANCE(193);
      if (lookahead == '<') ADVANCE(203);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '>') ADVANCE(204);
      if (lookahead == '[') ADVANCE(191);
      if (lookahead == ']') ADVANCE(192);
      if (lookahead == 'e') ADVANCE(175);
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == 'n') ADVANCE(116);
      if (lookahead == 'o') ADVANCE(144);
      if (lookahead == 'p') ADVANCE(77);
      if (lookahead == 's') ADVANCE(178);
      if (lookahead == '~') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(310);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(310);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(318);
      if (lookahead == 'd') ADVANCE(38);
      if (lookahead == 'p') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == 'c') ADVANCE(218);
      if (lookahead == 'e') ADVANCE(210);
      if (lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(171);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(76);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(172);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(200);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(199);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(198);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(59);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(92);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(112);
      END_STATE();
    case 15:
      if (lookahead == '_') ADVANCE(105);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(174);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(66);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(129);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(232);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 31:
      if (lookahead == 'b') ADVANCE(83);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(182);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(118);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(67);
      if (lookahead == 'x') ADVANCE(163);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(46);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 59:
      if (lookahead == 'f') ADVANCE(170);
      if (lookahead == 'v') ADVANCE(48);
      END_STATE();
    case 60:
      if (lookahead == 'f') ADVANCE(117);
      END_STATE();
    case 61:
      if (lookahead == 'f') ADVANCE(127);
      END_STATE();
    case 62:
      if (lookahead == 'h') ADVANCE(119);
      END_STATE();
    case 63:
      if (lookahead == 'h') ADVANCE(68);
      END_STATE();
    case 64:
      if (lookahead == 'h') ADVANCE(122);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(23);
      if (lookahead == 'y') ADVANCE(155);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(208);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(223);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(13);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(47);
      END_STATE();
    case 91:
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(22);
      if (lookahead == 'p') ADVANCE(179);
      if (lookahead == 'r') ADVANCE(50);
      if (lookahead == 'v') ADVANCE(54);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(45);
      END_STATE();
    case 94:
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 95:
      if (lookahead == 'm') ADVANCE(57);
      END_STATE();
    case 96:
      if (lookahead == 'm') ADVANCE(130);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(28);
      if (lookahead == 'v') ADVANCE(56);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 128:
      if (lookahead == 'p') ADVANCE(80);
      END_STATE();
    case 129:
      if (lookahead == 'p') ADVANCE(85);
      END_STATE();
    case 130:
      if (lookahead == 'p') ADVANCE(86);
      END_STATE();
    case 131:
      if (lookahead == 'q') ADVANCE(169);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 138:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 140:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 144:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 145:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 146:
      if (lookahead == 's') ADVANCE(159);
      END_STATE();
    case 147:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 148:
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 149:
      if (lookahead == 's') ADVANCE(164);
      END_STATE();
    case 150:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 151:
      if (lookahead == 's') ADVANCE(73);
      END_STATE();
    case 152:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(307);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(220);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 169:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 170:
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 171:
      if (lookahead == 'u') ADVANCE(136);
      END_STATE();
    case 172:
      if (lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 173:
      if (lookahead == 'v') ADVANCE(183);
      END_STATE();
    case 174:
      if (lookahead == 'v') ADVANCE(55);
      END_STATE();
    case 175:
      if (lookahead == 'x') ADVANCE(153);
      END_STATE();
    case 176:
      if (lookahead == 'x') ADVANCE(6);
      END_STATE();
    case 177:
      if (lookahead == 'x') ADVANCE(8);
      END_STATE();
    case 178:
      if (lookahead == 'y') ADVANCE(145);
      END_STATE();
    case 179:
      if (lookahead == 'y') ADVANCE(165);
      END_STATE();
    case 180:
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 181:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(308);
      END_STATE();
    case 182:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 183:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 184:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      END_STATE();
    case 185:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 186:
      if (eof) ADVANCE(189);
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '#') ADVANCE(197);
      if (lookahead == ',') ADVANCE(190);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == ';') ADVANCE(193);
      if (lookahead == '<') ADVANCE(203);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '>') ADVANCE(204);
      if (lookahead == '[') ADVANCE(191);
      if (lookahead == '~') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(186)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 187:
      if (eof) ADVANCE(189);
      if (lookahead == '#') ADVANCE(197);
      if (lookahead == ',') ADVANCE(190);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == ';') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(187)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 188:
      if (eof) ADVANCE(189);
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == '.') ADVANCE(253);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'h') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(188)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(304);
      if (lookahead != 0) ADVANCE(305);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '.') ADVANCE(196);
      if (lookahead == '/') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(196);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '.') ADVANCE(194);
      if (lookahead == '/') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(196);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(205);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(201);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(202);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_DASH_DASHextra_DASHindex_DASHurl);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_DASH_DASHextra_DASHindex_DASHurl);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_DASH_DASHindex_DASHurl);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_DASH_DASHindex_DASHurl);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_DASHe);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_DASHe);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_DASH_DASHeditable);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_DASH_DASHeditable);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_DASHr);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_DASHr);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_DASH_DASHrequirement);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_DASH_DASHrequirement);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_DASHc);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_DASHc);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_DASH_DASHconstraint);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_DASH_DASHconstraint);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_os_name);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_sys_platform);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_platform_machine);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_platform_python_implementation);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_platform_release);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_platform_version);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_python_version);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_python_full_version);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_implementation_name);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_implementation_version);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_extra);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '+') ADVANCE(236);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(241);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '.') ADVANCE(242);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == 'h') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == 'p') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == 's') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == 't') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == 't') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '+') ADVANCE(269);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'p') ADVANCE(247);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(304);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '+') ADVANCE(269);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 't') ADVANCE(243);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(304);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '+') ADVANCE(269);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 't') ADVANCE(244);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(304);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '+') ADVANCE(269);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(304);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '+') ADVANCE(236);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == 's') ADVANCE(233);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(241);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'c') ADVANCE(219);
      if (lookahead == 'e') ADVANCE(211);
      if (lookahead == 'r') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '-') ADVANCE(300);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '-') ADVANCE(273);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '-') ADVANCE(301);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '.') ADVANCE(253);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '.') ADVANCE(305);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == 's') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'a') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'a') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'a') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'b') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'c') ADVANCE(283);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead == 'i') ADVANCE(278);
      if (lookahead == 'r') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'd') ADVANCE(272);
      if (lookahead == 'x') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'd') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'd') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'e') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'e') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'e') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'e') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'h') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'i') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'i') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'i') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'l') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'l') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'l') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'm') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'n') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'n') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'n') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'n') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'n') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'o') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'p') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'q') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'r') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'r') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'r') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'r') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'r') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 's') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 't') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 't') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 't') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 't') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 't') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 't') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 't') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'u') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'u') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'u') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'x') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'x') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_marker_op_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_str);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__pre_release);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__post_release);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__developmental_release);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__local_version);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_version_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_version_token2);
      if (lookahead == '+') ADVANCE(185);
      if (lookahead == 'a' ||
          lookahead == 'b') ADVANCE(182);
      if (lookahead == 'r') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_version_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_version_token3);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 186},
  [2] = {.lex_state = 186},
  [3] = {.lex_state = 186},
  [4] = {.lex_state = 186},
  [5] = {.lex_state = 186},
  [6] = {.lex_state = 186},
  [7] = {.lex_state = 186},
  [8] = {.lex_state = 186},
  [9] = {.lex_state = 186},
  [10] = {.lex_state = 186},
  [11] = {.lex_state = 187},
  [12] = {.lex_state = 186},
  [13] = {.lex_state = 187},
  [14] = {.lex_state = 187},
  [15] = {.lex_state = 186},
  [16] = {.lex_state = 187},
  [17] = {.lex_state = 187},
  [18] = {.lex_state = 186},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 186},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 186},
  [23] = {.lex_state = 186},
  [24] = {.lex_state = 186},
  [25] = {.lex_state = 186},
  [26] = {.lex_state = 186},
  [27] = {.lex_state = 186},
  [28] = {.lex_state = 186},
  [29] = {.lex_state = 186},
  [30] = {.lex_state = 186},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 186},
  [33] = {.lex_state = 188},
  [34] = {.lex_state = 186},
  [35] = {.lex_state = 186},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 186},
  [38] = {.lex_state = 186},
  [39] = {.lex_state = 186},
  [40] = {.lex_state = 186},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 186},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 186},
  [46] = {.lex_state = 186},
  [47] = {.lex_state = 186},
  [48] = {.lex_state = 186},
  [49] = {.lex_state = 186},
  [50] = {.lex_state = 186},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 186},
  [60] = {.lex_state = 186},
  [61] = {.lex_state = 181},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
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
    [anon_sym_DASH_DASHextra_DASHindex_DASHurl] = ACTIONS(1),
    [anon_sym_DASH_DASHindex_DASHurl] = ACTIONS(1),
    [anon_sym_DASHe] = ACTIONS(1),
    [anon_sym_DASH_DASHeditable] = ACTIONS(1),
    [anon_sym_DASHr] = ACTIONS(1),
    [anon_sym_DASH_DASHrequirement] = ACTIONS(1),
    [anon_sym_DASHc] = ACTIONS(1),
    [anon_sym_DASH_DASHconstraint] = ACTIONS(1),
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
    [sym_requirements] = STATE(63),
    [sym__expression] = STATE(18),
    [sym__package_spec] = STATE(2),
    [sym_package_spec] = STATE(18),
    [sym_option] = STATE(18),
    [aux_sym_requirements_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DASH_DASHextra_DASHindex_DASHurl] = ACTIONS(7),
    [anon_sym_DASH_DASHindex_DASHurl] = ACTIONS(7),
    [anon_sym_DASHe] = ACTIONS(7),
    [anon_sym_DASH_DASHeditable] = ACTIONS(7),
    [anon_sym_DASHr] = ACTIONS(7),
    [anon_sym_DASH_DASHrequirement] = ACTIONS(7),
    [anon_sym_DASHc] = ACTIONS(7),
    [anon_sym_DASH_DASHconstraint] = ACTIONS(7),
    [sym_name] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(13), 1,
      anon_sym_SEMI,
    STATE(29), 1,
      sym_version_specifier,
    STATE(43), 1,
      sym__version_specifier_clause,
    STATE(57), 1,
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
    ACTIONS(11), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASHe,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASHr,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHc,
      anon_sym_DASH_DASHconstraint,
      sym_name,
  [38] = 4,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      sym__extras,
    ACTIONS(23), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASHe,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASHr,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHc,
      anon_sym_DASH_DASHconstraint,
      sym_name,
  [69] = 3,
    ACTIONS(27), 1,
      aux_sym_version_token2,
    STATE(4), 1,
      aux_sym_version_repeat1,
    ACTIONS(25), 18,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASHe,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASHr,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHc,
      anon_sym_DASH_DASHconstraint,
      sym_name,
      sym__pre_release,
      sym__post_release,
      sym__developmental_release,
      sym__local_version,
      aux_sym_version_token3,
  [96] = 2,
    ACTIONS(32), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(30), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASHe,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASHr,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHc,
      anon_sym_DASH_DASHconstraint,
      sym_name,
  [121] = 8,
    ACTIONS(36), 1,
      sym__pre_release,
    ACTIONS(38), 1,
      sym__post_release,
    ACTIONS(40), 1,
      sym__developmental_release,
    ACTIONS(42), 1,
      sym__local_version,
    ACTIONS(44), 1,
      aux_sym_version_token2,
    ACTIONS(46), 1,
      aux_sym_version_token3,
    STATE(7), 1,
      aux_sym_version_repeat1,
    ACTIONS(34), 13,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASHe,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASHr,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHc,
      anon_sym_DASH_DASHconstraint,
      sym_name,
  [158] = 8,
    ACTIONS(50), 1,
      sym__pre_release,
    ACTIONS(52), 1,
      sym__post_release,
    ACTIONS(54), 1,
      sym__developmental_release,
    ACTIONS(56), 1,
      sym__local_version,
    ACTIONS(58), 1,
      aux_sym_version_token2,
    ACTIONS(60), 1,
      aux_sym_version_token3,
    STATE(4), 1,
      aux_sym_version_repeat1,
    ACTIONS(48), 13,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASHe,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASHr,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHc,
      anon_sym_DASH_DASHconstraint,
      sym_name,
  [195] = 2,
    ACTIONS(64), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(62), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASHe,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASHr,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHc,
      anon_sym_DASH_DASHconstraint,
      sym_name,
  [220] = 2,
    ACTIONS(68), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(66), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASHe,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASHr,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHc,
      anon_sym_DASH_DASHconstraint,
      sym_name,
  [245] = 4,
    ACTIONS(72), 1,
      sym__post_release,
    ACTIONS(74), 1,
      sym__developmental_release,
    ACTIONS(76), 1,
      aux_sym_version_token3,
    ACTIONS(70), 13,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASHe,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASHr,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHc,
      anon_sym_DASH_DASHconstraint,
      sym_name,
  [270] = 4,
    ACTIONS(80), 1,
      aux_sym_version_token2,
    ACTIONS(82), 1,
      aux_sym_version_token3,
    STATE(16), 1,
      aux_sym_version_repeat1,
    ACTIONS(78), 13,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASHe,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASHr,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHc,
      anon_sym_DASH_DASHconstraint,
      sym_name,
  [295] = 4,
    ACTIONS(52), 1,
      sym__post_release,
    ACTIONS(54), 1,
      sym__developmental_release,
    ACTIONS(60), 1,
      aux_sym_version_token3,
    ACTIONS(48), 13,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASHe,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASHr,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHc,
      anon_sym_DASH_DASHconstraint,
      sym_name,
  [320] = 4,
    ACTIONS(60), 1,
      aux_sym_version_token3,
    ACTIONS(84), 1,
      aux_sym_version_token2,
    STATE(17), 1,
      aux_sym_version_repeat1,
    ACTIONS(48), 13,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASHe,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASHr,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHc,
      anon_sym_DASH_DASHconstraint,
      sym_name,
  [345] = 4,
    ACTIONS(76), 1,
      aux_sym_version_token3,
    ACTIONS(86), 1,
      aux_sym_version_token2,
    STATE(11), 1,
      aux_sym_version_repeat1,
    ACTIONS(70), 13,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASHe,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASHr,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHc,
      anon_sym_DASH_DASHconstraint,
      sym_name,
  [370] = 6,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(90), 1,
      sym_comment,
    ACTIONS(96), 1,
      sym_name,
    STATE(2), 1,
      sym__package_spec,
    STATE(15), 4,
      sym__expression,
      sym_package_spec,
      sym_option,
      aux_sym_requirements_repeat1,
    ACTIONS(93), 8,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASHe,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASHr,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHc,
      anon_sym_DASH_DASHconstraint,
  [399] = 3,
    ACTIONS(99), 1,
      aux_sym_version_token2,
    STATE(16), 1,
      aux_sym_version_repeat1,
    ACTIONS(25), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASHe,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASHr,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHc,
      anon_sym_DASH_DASHconstraint,
      sym_name,
      aux_sym_version_token3,
  [422] = 4,
    ACTIONS(76), 1,
      aux_sym_version_token3,
    ACTIONS(80), 1,
      aux_sym_version_token2,
    STATE(16), 1,
      aux_sym_version_repeat1,
    ACTIONS(70), 13,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASHe,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASHr,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHc,
      anon_sym_DASH_DASHconstraint,
      sym_name,
  [447] = 6,
    ACTIONS(9), 1,
      sym_name,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    ACTIONS(104), 1,
      sym_comment,
    STATE(2), 1,
      sym__package_spec,
    STATE(15), 4,
      sym__expression,
      sym_package_spec,
      sym_option,
      aux_sym_requirements_repeat1,
    ACTIONS(7), 8,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASHe,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASHr,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHc,
      anon_sym_DASH_DASHconstraint,
  [476] = 5,
    ACTIONS(108), 1,
      sym_str,
    STATE(41), 1,
      sym_marker_var,
    STATE(49), 1,
      sym_marker_expr,
    STATE(51), 1,
      sym_env_var,
    ACTIONS(106), 11,
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
  [502] = 3,
    ACTIONS(82), 1,
      aux_sym_version_token3,
    ACTIONS(110), 1,
      sym__developmental_release,
    ACTIONS(78), 13,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASHe,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASHr,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHc,
      anon_sym_DASH_DASHconstraint,
      sym_name,
  [524] = 5,
    ACTIONS(108), 1,
      sym_str,
    STATE(41), 1,
      sym_marker_var,
    STATE(48), 1,
      sym_marker_expr,
    STATE(51), 1,
      sym_env_var,
    ACTIONS(106), 11,
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
  [550] = 3,
    ACTIONS(74), 1,
      sym__developmental_release,
    ACTIONS(76), 1,
      aux_sym_version_token3,
    ACTIONS(70), 13,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASHe,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASHr,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHc,
      anon_sym_DASH_DASHconstraint,
      sym_name,
  [572] = 3,
    ACTIONS(54), 1,
      sym__developmental_release,
    ACTIONS(60), 1,
      aux_sym_version_token3,
    ACTIONS(48), 13,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASHe,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASHr,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHc,
      anon_sym_DASH_DASHconstraint,
      sym_name,
  [594] = 2,
    ACTIONS(82), 1,
      aux_sym_version_token3,
    ACTIONS(78), 13,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASHe,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASHr,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHc,
      anon_sym_DASH_DASHconstraint,
      sym_name,
  [613] = 3,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    STATE(30), 1,
      aux_sym__version_specifier_clause_repeat1,
    ACTIONS(112), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASHe,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASHr,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHc,
      anon_sym_DASH_DASHconstraint,
      sym_name,
  [634] = 2,
    ACTIONS(76), 1,
      aux_sym_version_token3,
    ACTIONS(70), 13,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASHe,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASHr,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHc,
      anon_sym_DASH_DASHconstraint,
      sym_name,
  [653] = 2,
    ACTIONS(60), 1,
      aux_sym_version_token3,
    ACTIONS(48), 13,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASHe,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASHr,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHc,
      anon_sym_DASH_DASHconstraint,
      sym_name,
  [672] = 2,
    ACTIONS(118), 1,
      aux_sym_version_token3,
    ACTIONS(116), 13,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASHe,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASHr,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHc,
      anon_sym_DASH_DASHconstraint,
      sym_name,
  [691] = 3,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    STATE(25), 1,
      aux_sym__version_specifier_clause_repeat1,
    ACTIONS(120), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASHe,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASHr,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHc,
      anon_sym_DASH_DASHconstraint,
      sym_name,
  [712] = 3,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    STATE(30), 1,
      aux_sym__version_specifier_clause_repeat1,
    ACTIONS(122), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASHe,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASHr,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHc,
      anon_sym_DASH_DASHconstraint,
      sym_name,
  [733] = 4,
    ACTIONS(129), 1,
      sym_str,
    STATE(46), 1,
      sym_env_var,
    STATE(47), 1,
      sym_marker_var,
    ACTIONS(127), 11,
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
  [756] = 1,
    ACTIONS(122), 13,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASHe,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASHr,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHc,
      anon_sym_DASH_DASHconstraint,
      sym_name,
  [772] = 4,
    ACTIONS(135), 1,
      sym_url,
    ACTIONS(137), 1,
      sym_local_path,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(133), 9,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASHe,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASHr,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHc,
      anon_sym_DASH_DASHconstraint,
      sym_name,
  [794] = 1,
    ACTIONS(139), 13,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASHe,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASHr,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHc,
      anon_sym_DASH_DASHconstraint,
      sym_name,
  [810] = 1,
    ACTIONS(116), 13,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASHe,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASHr,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHc,
      anon_sym_DASH_DASHconstraint,
      sym_name,
  [826] = 1,
    ACTIONS(141), 13,
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
  [842] = 1,
    ACTIONS(78), 13,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASHe,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASHr,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHc,
      anon_sym_DASH_DASHconstraint,
      sym_name,
  [858] = 1,
    ACTIONS(70), 13,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASHe,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASHr,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHc,
      anon_sym_DASH_DASHconstraint,
      sym_name,
  [874] = 1,
    ACTIONS(48), 13,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASHe,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASHr,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHc,
      anon_sym_DASH_DASHconstraint,
      sym_name,
  [890] = 1,
    ACTIONS(143), 13,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASHe,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASHr,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHc,
      anon_sym_DASH_DASHconstraint,
      sym_name,
  [906] = 6,
    ACTIONS(145), 1,
      anon_sym_in,
    ACTIONS(147), 1,
      anon_sym_not,
    STATE(31), 1,
      sym_marker_op,
    STATE(44), 1,
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
  [931] = 1,
    ACTIONS(149), 12,
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
  [946] = 2,
    ACTIONS(153), 1,
      anon_sym_SEMI,
    ACTIONS(151), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASHe,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASHr,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHc,
      anon_sym_DASH_DASHconstraint,
      sym_name,
  [963] = 1,
    ACTIONS(155), 12,
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
  [978] = 1,
    ACTIONS(157), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASHe,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASHr,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHc,
      anon_sym_DASH_DASHconstraint,
      sym_name,
  [992] = 1,
    ACTIONS(159), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASHe,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASHr,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHc,
      anon_sym_DASH_DASHconstraint,
      sym_name,
  [1006] = 1,
    ACTIONS(161), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASHe,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASHr,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHc,
      anon_sym_DASH_DASHconstraint,
      sym_name,
  [1020] = 1,
    ACTIONS(163), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASHe,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASHr,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHc,
      anon_sym_DASH_DASHconstraint,
      sym_name,
  [1034] = 1,
    ACTIONS(165), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASHe,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASHr,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHc,
      anon_sym_DASH_DASHconstraint,
      sym_name,
  [1048] = 1,
    ACTIONS(167), 11,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASHe,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASHr,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHc,
      anon_sym_DASH_DASHconstraint,
      sym_name,
  [1062] = 2,
    ACTIONS(169), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 7,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_in,
      anon_sym_not,
  [1077] = 2,
    ACTIONS(171), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(167), 7,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_in,
      anon_sym_not,
  [1092] = 4,
    STATE(32), 1,
      sym_version_specifier,
    STATE(57), 1,
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
  [1111] = 3,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(176), 1,
      anon_sym_RBRACK,
    STATE(54), 1,
      aux_sym__extras_repeat1,
  [1121] = 3,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(180), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym__extras_repeat1,
  [1131] = 3,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(182), 1,
      anon_sym_RBRACK,
    STATE(54), 1,
      aux_sym__extras_repeat1,
  [1141] = 2,
    ACTIONS(184), 1,
      aux_sym_version_token1,
    STATE(40), 1,
      sym_version,
  [1148] = 1,
    ACTIONS(186), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1153] = 1,
    ACTIONS(188), 1,
      sym_name,
  [1157] = 1,
    ACTIONS(190), 1,
      sym_name,
  [1161] = 1,
    ACTIONS(192), 1,
      aux_sym_marker_op_token1,
  [1165] = 1,
    ACTIONS(194), 1,
      anon_sym_in,
  [1169] = 1,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 69,
  [SMALL_STATE(5)] = 96,
  [SMALL_STATE(6)] = 121,
  [SMALL_STATE(7)] = 158,
  [SMALL_STATE(8)] = 195,
  [SMALL_STATE(9)] = 220,
  [SMALL_STATE(10)] = 245,
  [SMALL_STATE(11)] = 270,
  [SMALL_STATE(12)] = 295,
  [SMALL_STATE(13)] = 320,
  [SMALL_STATE(14)] = 345,
  [SMALL_STATE(15)] = 370,
  [SMALL_STATE(16)] = 399,
  [SMALL_STATE(17)] = 422,
  [SMALL_STATE(18)] = 447,
  [SMALL_STATE(19)] = 476,
  [SMALL_STATE(20)] = 502,
  [SMALL_STATE(21)] = 524,
  [SMALL_STATE(22)] = 550,
  [SMALL_STATE(23)] = 572,
  [SMALL_STATE(24)] = 594,
  [SMALL_STATE(25)] = 613,
  [SMALL_STATE(26)] = 634,
  [SMALL_STATE(27)] = 653,
  [SMALL_STATE(28)] = 672,
  [SMALL_STATE(29)] = 691,
  [SMALL_STATE(30)] = 712,
  [SMALL_STATE(31)] = 733,
  [SMALL_STATE(32)] = 756,
  [SMALL_STATE(33)] = 772,
  [SMALL_STATE(34)] = 794,
  [SMALL_STATE(35)] = 810,
  [SMALL_STATE(36)] = 826,
  [SMALL_STATE(37)] = 842,
  [SMALL_STATE(38)] = 858,
  [SMALL_STATE(39)] = 874,
  [SMALL_STATE(40)] = 890,
  [SMALL_STATE(41)] = 906,
  [SMALL_STATE(42)] = 931,
  [SMALL_STATE(43)] = 946,
  [SMALL_STATE(44)] = 963,
  [SMALL_STATE(45)] = 978,
  [SMALL_STATE(46)] = 992,
  [SMALL_STATE(47)] = 1006,
  [SMALL_STATE(48)] = 1020,
  [SMALL_STATE(49)] = 1034,
  [SMALL_STATE(50)] = 1048,
  [SMALL_STATE(51)] = 1062,
  [SMALL_STATE(52)] = 1077,
  [SMALL_STATE(53)] = 1092,
  [SMALL_STATE(54)] = 1111,
  [SMALL_STATE(55)] = 1121,
  [SMALL_STATE(56)] = 1131,
  [SMALL_STATE(57)] = 1141,
  [SMALL_STATE(58)] = 1148,
  [SMALL_STATE(59)] = 1153,
  [SMALL_STATE(60)] = 1157,
  [SMALL_STATE(61)] = 1161,
  [SMALL_STATE(62)] = 1165,
  [SMALL_STATE(63)] = 1169,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirements, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_spec, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__package_spec, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__package_spec, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_version_repeat1, 2), SHIFT_REPEAT(4),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__extras, 3, .production_id = 1),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__extras, 3, .production_id = 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 1),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 2),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__extras, 4, .production_id = 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__extras, 4, .production_id = 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__package_spec, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__package_spec, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 4),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_requirements_repeat1, 2),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_requirements_repeat1, 2), SHIFT_REPEAT(15),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_requirements_repeat1, 2), SHIFT_REPEAT(33),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_requirements_repeat1, 2), SHIFT_REPEAT(3),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_version_repeat1, 2), SHIFT_REPEAT(16),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirements, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_specifier_clause, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 5),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_specifier_clause, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__version_specifier_clause_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__version_specifier_clause_repeat1, 2), SHIFT_REPEAT(53),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 6),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_cmp, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_specifier, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_op, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_spec, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_op, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_var, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_expr, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_spec, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_spec, 4),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_var, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_marker_var, 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_var, 1),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__extras_repeat1, 2), SHIFT_REPEAT(59),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__extras_repeat1, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__extras_repeat1, 2, .production_id = 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [196] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
