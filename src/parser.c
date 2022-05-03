#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 73
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 70
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
  sym__extra_index_url = 56,
  sym__index_url = 57,
  sym__editable = 58,
  sym__requirement_file = 59,
  sym__constraint_file = 60,
  sym_env_var = 61,
  sym_marker_op = 62,
  sym_marker_var = 63,
  sym_marker_expr = 64,
  sym_version = 65,
  aux_sym_requirements_repeat1 = 66,
  aux_sym__version_specifier_clause_repeat1 = 67,
  aux_sym__extras_repeat1 = 68,
  aux_sym_version_repeat1 = 69,
  alias_sym_extra = 70,
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
  [sym__extra_index_url] = "_extra_index_url",
  [sym__index_url] = "_index_url",
  [sym__editable] = "_editable",
  [sym__requirement_file] = "_requirement_file",
  [sym__constraint_file] = "_constraint_file",
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
  [sym__extra_index_url] = sym__extra_index_url,
  [sym__index_url] = sym__index_url,
  [sym__editable] = sym__editable,
  [sym__requirement_file] = sym__requirement_file,
  [sym__constraint_file] = sym__constraint_file,
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
  [sym__extra_index_url] = {
    .visible = false,
    .named = true,
  },
  [sym__index_url] = {
    .visible = false,
    .named = true,
  },
  [sym__editable] = {
    .visible = false,
    .named = true,
  },
  [sym__requirement_file] = {
    .visible = false,
    .named = true,
  },
  [sym__constraint_file] = {
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
      if (eof) ADVANCE(190);
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(195);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == ',') ADVANCE(191);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == ';') ADVANCE(194);
      if (lookahead == '<') ADVANCE(201);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(202);
      if (lookahead == '[') ADVANCE(192);
      if (lookahead == ']') ADVANCE(193);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == 'o') ADVANCE(146);
      if (lookahead == 'p') ADVANCE(79);
      if (lookahead == 's') ADVANCE(180);
      if (lookahead == '~') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(249);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(249);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(257);
      if (lookahead == 'd') ADVANCE(40);
      if (lookahead == 'p') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == 'c') ADVANCE(210);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(173);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(78);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(174);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(238);
      if (lookahead == '/') ADVANCE(237);
      if (lookahead == 'h') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (lookahead != 0) ADVANCE(244);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(238);
      if (lookahead == '/') ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0) ADVANCE(244);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(198);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(197);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(196);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(61);
      END_STATE();
    case 15:
      if (lookahead == '_') ADVANCE(94);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(114);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(107);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(176);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(68);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(131);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(222);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 33:
      if (lookahead == 'b') ADVANCE(85);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(184);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(120);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(69);
      if (lookahead == 'x') ADVANCE(165);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 61:
      if (lookahead == 'f') ADVANCE(172);
      if (lookahead == 'v') ADVANCE(50);
      END_STATE();
    case 62:
      if (lookahead == 'f') ADVANCE(119);
      END_STATE();
    case 63:
      if (lookahead == 'f') ADVANCE(129);
      END_STATE();
    case 64:
      if (lookahead == 'h') ADVANCE(121);
      END_STATE();
    case 65:
      if (lookahead == 'h') ADVANCE(70);
      END_STATE();
    case 66:
      if (lookahead == 'h') ADVANCE(124);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == 'y') ADVANCE(157);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(130);
      if (lookahead == 'n') ADVANCE(245);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(213);
      END_STATE();
    case 91:
      if (lookahead == 'm') ADVANCE(15);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(43);
      END_STATE();
    case 94:
      if (lookahead == 'm') ADVANCE(24);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 'r') ADVANCE(52);
      if (lookahead == 'v') ADVANCE(56);
      END_STATE();
    case 95:
      if (lookahead == 'm') ADVANCE(47);
      END_STATE();
    case 96:
      if (lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 97:
      if (lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 98:
      if (lookahead == 'm') ADVANCE(132);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(30);
      if (lookahead == 'v') ADVANCE(58);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(169);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 130:
      if (lookahead == 'p') ADVANCE(82);
      END_STATE();
    case 131:
      if (lookahead == 'p') ADVANCE(87);
      END_STATE();
    case 132:
      if (lookahead == 'p') ADVANCE(88);
      END_STATE();
    case 133:
      if (lookahead == 'q') ADVANCE(171);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 138:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 140:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 146:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 147:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 148:
      if (lookahead == 's') ADVANCE(161);
      END_STATE();
    case 149:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 150:
      if (lookahead == 's') ADVANCE(73);
      END_STATE();
    case 151:
      if (lookahead == 's') ADVANCE(166);
      END_STATE();
    case 152:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 153:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 154:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 171:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 172:
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 173:
      if (lookahead == 'u') ADVANCE(138);
      END_STATE();
    case 174:
      if (lookahead == 'u') ADVANCE(141);
      END_STATE();
    case 175:
      if (lookahead == 'v') ADVANCE(185);
      END_STATE();
    case 176:
      if (lookahead == 'v') ADVANCE(57);
      END_STATE();
    case 177:
      if (lookahead == 'x') ADVANCE(155);
      END_STATE();
    case 178:
      if (lookahead == 'x') ADVANCE(6);
      END_STATE();
    case 179:
      if (lookahead == 'x') ADVANCE(8);
      END_STATE();
    case 180:
      if (lookahead == 'y') ADVANCE(147);
      END_STATE();
    case 181:
      if (lookahead == 'y') ADVANCE(167);
      END_STATE();
    case 182:
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 183:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(247);
      END_STATE();
    case 184:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      END_STATE();
    case 185:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      END_STATE();
    case 186:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      END_STATE();
    case 187:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 188:
      if (eof) ADVANCE(190);
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '#') ADVANCE(195);
      if (lookahead == ',') ADVANCE(191);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == ';') ADVANCE(194);
      if (lookahead == '<') ADVANCE(201);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(202);
      if (lookahead == '[') ADVANCE(192);
      if (lookahead == '~') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(188)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 189:
      if (eof) ADVANCE(190);
      if (lookahead == '#') ADVANCE(195);
      if (lookahead == ',') ADVANCE(191);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == ';') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(189)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(203);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(199);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(200);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_DASH_DASHextra_DASHindex_DASHurl);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_DASH_DASHindex_DASHurl);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_DASHe);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_DASH_DASHeditable);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_DASHr);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_DASH_DASHrequirement);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_DASHc);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_DASH_DASHconstraint);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_os_name);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_sys_platform);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_platform_machine);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_platform_python_implementation);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_platform_release);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_platform_version);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_python_version);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_python_full_version);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_implementation_name);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_implementation_version);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_extra);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '+') ADVANCE(226);
      if (lookahead == '/') ADVANCE(225);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '.') ADVANCE(231);
      if (lookahead == '/') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == '/') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '/') ADVANCE(225);
      if (lookahead == 'h') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '/') ADVANCE(225);
      if (lookahead == 'p') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '/') ADVANCE(225);
      if (lookahead == 's') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '/') ADVANCE(225);
      if (lookahead == 't') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '/') ADVANCE(225);
      if (lookahead == 't') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '/') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '+') ADVANCE(240);
      if (lookahead == '/') ADVANCE(237);
      if (lookahead == 'p') ADVANCE(236);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(244);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '+') ADVANCE(240);
      if (lookahead == '/') ADVANCE(237);
      if (lookahead == 't') ADVANCE(232);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(244);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '+') ADVANCE(240);
      if (lookahead == '/') ADVANCE(237);
      if (lookahead == 't') ADVANCE(233);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(244);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '+') ADVANCE(240);
      if (lookahead == '/') ADVANCE(237);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(244);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '+') ADVANCE(226);
      if (lookahead == '/') ADVANCE(225);
      if (lookahead == 's') ADVANCE(223);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '.') ADVANCE(238);
      if (lookahead == '/') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(244);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '.') ADVANCE(244);
      if (lookahead == '/') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(244);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(225);
      if (lookahead == 's') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(237);
      if (lookahead == 'h') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(244);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(237);
      if (lookahead == 'p') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(244);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(237);
      if (lookahead == 't') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(244);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(237);
      if (lookahead == 't') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(244);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_local_path);
      if (lookahead == '/') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_marker_op_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_str);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__pre_release);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__post_release);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__developmental_release);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__local_version);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_version_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_version_token2);
      if (lookahead == '+') ADVANCE(187);
      if (lookahead == 'a' ||
          lookahead == 'b') ADVANCE(184);
      if (lookahead == 'r') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_version_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_version_token3);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 188},
  [2] = {.lex_state = 188},
  [3] = {.lex_state = 188},
  [4] = {.lex_state = 188},
  [5] = {.lex_state = 188},
  [6] = {.lex_state = 188},
  [7] = {.lex_state = 188},
  [8] = {.lex_state = 188},
  [9] = {.lex_state = 188},
  [10] = {.lex_state = 188},
  [11] = {.lex_state = 188},
  [12] = {.lex_state = 189},
  [13] = {.lex_state = 189},
  [14] = {.lex_state = 188},
  [15] = {.lex_state = 189},
  [16] = {.lex_state = 189},
  [17] = {.lex_state = 188},
  [18] = {.lex_state = 189},
  [19] = {.lex_state = 188},
  [20] = {.lex_state = 188},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 188},
  [24] = {.lex_state = 188},
  [25] = {.lex_state = 188},
  [26] = {.lex_state = 188},
  [27] = {.lex_state = 188},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 188},
  [30] = {.lex_state = 188},
  [31] = {.lex_state = 188},
  [32] = {.lex_state = 188},
  [33] = {.lex_state = 188},
  [34] = {.lex_state = 188},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 188},
  [37] = {.lex_state = 188},
  [38] = {.lex_state = 188},
  [39] = {.lex_state = 188},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 188},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 188},
  [45] = {.lex_state = 188},
  [46] = {.lex_state = 188},
  [47] = {.lex_state = 188},
  [48] = {.lex_state = 188},
  [49] = {.lex_state = 188},
  [50] = {.lex_state = 188},
  [51] = {.lex_state = 188},
  [52] = {.lex_state = 188},
  [53] = {.lex_state = 188},
  [54] = {.lex_state = 188},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 188},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 183},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 188},
  [72] = {.lex_state = 9},
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
    [sym_requirements] = STATE(66),
    [sym__expression] = STATE(5),
    [sym__package_spec] = STATE(2),
    [sym_package_spec] = STATE(5),
    [sym_option] = STATE(5),
    [sym__extra_index_url] = STATE(50),
    [sym__index_url] = STATE(50),
    [sym__editable] = STATE(50),
    [sym__requirement_file] = STATE(50),
    [sym__constraint_file] = STATE(50),
    [aux_sym_requirements_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DASH_DASHextra_DASHindex_DASHurl] = ACTIONS(7),
    [anon_sym_DASH_DASHindex_DASHurl] = ACTIONS(9),
    [anon_sym_DASHe] = ACTIONS(11),
    [anon_sym_DASH_DASHeditable] = ACTIONS(11),
    [anon_sym_DASHr] = ACTIONS(13),
    [anon_sym_DASH_DASHrequirement] = ACTIONS(13),
    [anon_sym_DASHc] = ACTIONS(15),
    [anon_sym_DASH_DASHconstraint] = ACTIONS(15),
    [sym_name] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(21), 1,
      anon_sym_SEMI,
    STATE(26), 1,
      sym_version_specifier,
    STATE(41), 1,
      sym__version_specifier_clause,
    STATE(63), 1,
      sym_version_cmp,
    ACTIONS(25), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 5,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(19), 11,
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
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      sym__extras,
    ACTIONS(31), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 17,
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
  [69] = 11,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(38), 1,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
    ACTIONS(41), 1,
      anon_sym_DASH_DASHindex_DASHurl,
    ACTIONS(53), 1,
      sym_name,
    STATE(2), 1,
      sym__package_spec,
    ACTIONS(44), 2,
      anon_sym_DASHe,
      anon_sym_DASH_DASHeditable,
    ACTIONS(47), 2,
      anon_sym_DASHr,
      anon_sym_DASH_DASHrequirement,
    ACTIONS(50), 2,
      anon_sym_DASHc,
      anon_sym_DASH_DASHconstraint,
    STATE(4), 4,
      sym__expression,
      sym_package_spec,
      sym_option,
      aux_sym_requirements_repeat1,
    STATE(50), 5,
      sym__extra_index_url,
      sym__index_url,
      sym__editable,
      sym__requirement_file,
      sym__constraint_file,
  [113] = 11,
    ACTIONS(7), 1,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
    ACTIONS(9), 1,
      anon_sym_DASH_DASHindex_DASHurl,
    ACTIONS(17), 1,
      sym_name,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    ACTIONS(58), 1,
      sym_comment,
    STATE(2), 1,
      sym__package_spec,
    ACTIONS(11), 2,
      anon_sym_DASHe,
      anon_sym_DASH_DASHeditable,
    ACTIONS(13), 2,
      anon_sym_DASHr,
      anon_sym_DASH_DASHrequirement,
    ACTIONS(15), 2,
      anon_sym_DASHc,
      anon_sym_DASH_DASHconstraint,
    STATE(4), 4,
      sym__expression,
      sym_package_spec,
      sym_option,
      aux_sym_requirements_repeat1,
    STATE(50), 5,
      sym__extra_index_url,
      sym__index_url,
      sym__editable,
      sym__requirement_file,
      sym__constraint_file,
  [157] = 8,
    ACTIONS(62), 1,
      sym__pre_release,
    ACTIONS(64), 1,
      sym__post_release,
    ACTIONS(66), 1,
      sym__developmental_release,
    ACTIONS(68), 1,
      sym__local_version,
    ACTIONS(70), 1,
      aux_sym_version_token2,
    ACTIONS(72), 1,
      aux_sym_version_token3,
    STATE(10), 1,
      aux_sym_version_repeat1,
    ACTIONS(60), 13,
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
  [194] = 2,
    ACTIONS(76), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(74), 17,
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
  [219] = 3,
    ACTIONS(80), 1,
      aux_sym_version_token2,
    STATE(8), 1,
      aux_sym_version_repeat1,
    ACTIONS(78), 18,
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
  [246] = 2,
    ACTIONS(85), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(83), 17,
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
  [271] = 8,
    ACTIONS(89), 1,
      sym__pre_release,
    ACTIONS(91), 1,
      sym__post_release,
    ACTIONS(93), 1,
      sym__developmental_release,
    ACTIONS(95), 1,
      sym__local_version,
    ACTIONS(97), 1,
      aux_sym_version_token2,
    ACTIONS(99), 1,
      aux_sym_version_token3,
    STATE(8), 1,
      aux_sym_version_repeat1,
    ACTIONS(87), 13,
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
  [308] = 2,
    ACTIONS(103), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 17,
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
  [333] = 3,
    ACTIONS(105), 1,
      aux_sym_version_token2,
    STATE(12), 1,
      aux_sym_version_repeat1,
    ACTIONS(78), 14,
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
  [356] = 4,
    ACTIONS(110), 1,
      aux_sym_version_token2,
    ACTIONS(112), 1,
      aux_sym_version_token3,
    STATE(12), 1,
      aux_sym_version_repeat1,
    ACTIONS(108), 13,
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
  [381] = 4,
    ACTIONS(91), 1,
      sym__post_release,
    ACTIONS(93), 1,
      sym__developmental_release,
    ACTIONS(99), 1,
      aux_sym_version_token3,
    ACTIONS(87), 13,
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
  [406] = 4,
    ACTIONS(99), 1,
      aux_sym_version_token3,
    ACTIONS(114), 1,
      aux_sym_version_token2,
    STATE(18), 1,
      aux_sym_version_repeat1,
    ACTIONS(87), 13,
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
  [431] = 4,
    ACTIONS(118), 1,
      aux_sym_version_token2,
    ACTIONS(120), 1,
      aux_sym_version_token3,
    STATE(13), 1,
      aux_sym_version_repeat1,
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
  [456] = 4,
    ACTIONS(120), 1,
      aux_sym_version_token3,
    ACTIONS(122), 1,
      sym__post_release,
    ACTIONS(124), 1,
      sym__developmental_release,
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
  [481] = 4,
    ACTIONS(110), 1,
      aux_sym_version_token2,
    ACTIONS(120), 1,
      aux_sym_version_token3,
    STATE(12), 1,
      aux_sym_version_repeat1,
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
  [506] = 3,
    ACTIONS(93), 1,
      sym__developmental_release,
    ACTIONS(99), 1,
      aux_sym_version_token3,
    ACTIONS(87), 13,
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
  [528] = 3,
    ACTIONS(112), 1,
      aux_sym_version_token3,
    ACTIONS(126), 1,
      sym__developmental_release,
    ACTIONS(108), 13,
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
  [550] = 5,
    ACTIONS(130), 1,
      sym_str,
    STATE(40), 1,
      sym_marker_var,
    STATE(49), 1,
      sym_marker_expr,
    STATE(56), 1,
      sym_env_var,
    ACTIONS(128), 11,
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
  [576] = 5,
    ACTIONS(130), 1,
      sym_str,
    STATE(40), 1,
      sym_marker_var,
    STATE(46), 1,
      sym_marker_expr,
    STATE(56), 1,
      sym_env_var,
    ACTIONS(128), 11,
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
  [602] = 3,
    ACTIONS(120), 1,
      aux_sym_version_token3,
    ACTIONS(124), 1,
      sym__developmental_release,
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
  [624] = 2,
    ACTIONS(120), 1,
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
  [643] = 2,
    ACTIONS(134), 1,
      aux_sym_version_token3,
    ACTIONS(132), 13,
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
  [662] = 3,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym__version_specifier_clause_repeat1,
    ACTIONS(136), 12,
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
  [683] = 3,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      aux_sym__version_specifier_clause_repeat1,
    ACTIONS(140), 12,
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
  [704] = 4,
    ACTIONS(144), 1,
      sym_str,
    STATE(44), 1,
      sym_marker_var,
    STATE(47), 1,
      sym_env_var,
    ACTIONS(142), 11,
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
  [727] = 3,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      aux_sym__version_specifier_clause_repeat1,
    ACTIONS(146), 12,
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
  [748] = 2,
    ACTIONS(112), 1,
      aux_sym_version_token3,
    ACTIONS(108), 13,
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
  [767] = 2,
    ACTIONS(99), 1,
      aux_sym_version_token3,
    ACTIONS(87), 13,
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
  [786] = 1,
    ACTIONS(132), 13,
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
  [802] = 1,
    ACTIONS(151), 13,
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
  [818] = 1,
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
  [834] = 1,
    ACTIONS(153), 13,
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
  [850] = 1,
    ACTIONS(155), 13,
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
  [866] = 1,
    ACTIONS(87), 13,
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
  [882] = 1,
    ACTIONS(146), 13,
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
  [898] = 1,
    ACTIONS(108), 13,
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
  [914] = 6,
    ACTIONS(157), 1,
      anon_sym_in,
    ACTIONS(159), 1,
      anon_sym_not,
    STATE(28), 1,
      sym_marker_op,
    STATE(43), 1,
      sym_version_cmp,
    ACTIONS(25), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 5,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
  [939] = 2,
    ACTIONS(163), 1,
      anon_sym_SEMI,
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
  [956] = 1,
    ACTIONS(165), 12,
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
  [971] = 1,
    ACTIONS(167), 12,
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
  [986] = 1,
    ACTIONS(169), 11,
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
  [1000] = 1,
    ACTIONS(171), 11,
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
  [1014] = 1,
    ACTIONS(173), 11,
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
  [1028] = 1,
    ACTIONS(175), 11,
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
  [1042] = 1,
    ACTIONS(177), 11,
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
  [1056] = 1,
    ACTIONS(179), 11,
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
  [1070] = 1,
    ACTIONS(181), 11,
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
  [1084] = 1,
    ACTIONS(183), 11,
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
  [1098] = 1,
    ACTIONS(185), 11,
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
  [1112] = 1,
    ACTIONS(187), 11,
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
  [1126] = 1,
    ACTIONS(189), 11,
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
  [1140] = 4,
    STATE(38), 1,
      sym_version_specifier,
    STATE(63), 1,
      sym_version_cmp,
    ACTIONS(25), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 5,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
  [1159] = 2,
    ACTIONS(191), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(175), 7,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_in,
      anon_sym_not,
  [1174] = 2,
    ACTIONS(193), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(177), 7,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_in,
      anon_sym_not,
  [1189] = 3,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_RBRACK,
    STATE(59), 1,
      aux_sym__extras_repeat1,
  [1199] = 3,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    ACTIONS(202), 1,
      anon_sym_RBRACK,
    STATE(59), 1,
      aux_sym__extras_repeat1,
  [1209] = 3,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(204), 1,
      anon_sym_RBRACK,
    STATE(58), 1,
      aux_sym__extras_repeat1,
  [1219] = 1,
    ACTIONS(206), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1224] = 2,
    ACTIONS(208), 1,
      sym_url,
    ACTIONS(210), 1,
      sym_local_path,
  [1231] = 2,
    ACTIONS(212), 1,
      aux_sym_version_token1,
    STATE(36), 1,
      sym_version,
  [1238] = 1,
    ACTIONS(214), 1,
      sym_name,
  [1242] = 1,
    ACTIONS(216), 1,
      sym_url,
  [1246] = 1,
    ACTIONS(218), 1,
      ts_builtin_sym_end,
  [1250] = 1,
    ACTIONS(220), 1,
      sym_local_path,
  [1254] = 1,
    ACTIONS(222), 1,
      sym_local_path,
  [1258] = 1,
    ACTIONS(224), 1,
      aux_sym_marker_op_token1,
  [1262] = 1,
    ACTIONS(226), 1,
      anon_sym_in,
  [1266] = 1,
    ACTIONS(228), 1,
      sym_name,
  [1270] = 1,
    ACTIONS(230), 1,
      sym_url,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 69,
  [SMALL_STATE(5)] = 113,
  [SMALL_STATE(6)] = 157,
  [SMALL_STATE(7)] = 194,
  [SMALL_STATE(8)] = 219,
  [SMALL_STATE(9)] = 246,
  [SMALL_STATE(10)] = 271,
  [SMALL_STATE(11)] = 308,
  [SMALL_STATE(12)] = 333,
  [SMALL_STATE(13)] = 356,
  [SMALL_STATE(14)] = 381,
  [SMALL_STATE(15)] = 406,
  [SMALL_STATE(16)] = 431,
  [SMALL_STATE(17)] = 456,
  [SMALL_STATE(18)] = 481,
  [SMALL_STATE(19)] = 506,
  [SMALL_STATE(20)] = 528,
  [SMALL_STATE(21)] = 550,
  [SMALL_STATE(22)] = 576,
  [SMALL_STATE(23)] = 602,
  [SMALL_STATE(24)] = 624,
  [SMALL_STATE(25)] = 643,
  [SMALL_STATE(26)] = 662,
  [SMALL_STATE(27)] = 683,
  [SMALL_STATE(28)] = 704,
  [SMALL_STATE(29)] = 727,
  [SMALL_STATE(30)] = 748,
  [SMALL_STATE(31)] = 767,
  [SMALL_STATE(32)] = 786,
  [SMALL_STATE(33)] = 802,
  [SMALL_STATE(34)] = 818,
  [SMALL_STATE(35)] = 834,
  [SMALL_STATE(36)] = 850,
  [SMALL_STATE(37)] = 866,
  [SMALL_STATE(38)] = 882,
  [SMALL_STATE(39)] = 898,
  [SMALL_STATE(40)] = 914,
  [SMALL_STATE(41)] = 939,
  [SMALL_STATE(42)] = 956,
  [SMALL_STATE(43)] = 971,
  [SMALL_STATE(44)] = 986,
  [SMALL_STATE(45)] = 1000,
  [SMALL_STATE(46)] = 1014,
  [SMALL_STATE(47)] = 1028,
  [SMALL_STATE(48)] = 1042,
  [SMALL_STATE(49)] = 1056,
  [SMALL_STATE(50)] = 1070,
  [SMALL_STATE(51)] = 1084,
  [SMALL_STATE(52)] = 1098,
  [SMALL_STATE(53)] = 1112,
  [SMALL_STATE(54)] = 1126,
  [SMALL_STATE(55)] = 1140,
  [SMALL_STATE(56)] = 1159,
  [SMALL_STATE(57)] = 1174,
  [SMALL_STATE(58)] = 1189,
  [SMALL_STATE(59)] = 1199,
  [SMALL_STATE(60)] = 1209,
  [SMALL_STATE(61)] = 1219,
  [SMALL_STATE(62)] = 1224,
  [SMALL_STATE(63)] = 1231,
  [SMALL_STATE(64)] = 1238,
  [SMALL_STATE(65)] = 1242,
  [SMALL_STATE(66)] = 1246,
  [SMALL_STATE(67)] = 1250,
  [SMALL_STATE(68)] = 1254,
  [SMALL_STATE(69)] = 1258,
  [SMALL_STATE(70)] = 1262,
  [SMALL_STATE(71)] = 1266,
  [SMALL_STATE(72)] = 1270,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirements, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_spec, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__package_spec, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__package_spec, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_requirements_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_requirements_repeat1, 2), SHIFT_REPEAT(4),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_requirements_repeat1, 2), SHIFT_REPEAT(65),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_requirements_repeat1, 2), SHIFT_REPEAT(72),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_requirements_repeat1, 2), SHIFT_REPEAT(62),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_requirements_repeat1, 2), SHIFT_REPEAT(68),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_requirements_repeat1, 2), SHIFT_REPEAT(67),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_requirements_repeat1, 2), SHIFT_REPEAT(3),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirements, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__extras, 3, .production_id = 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__extras, 3, .production_id = 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_repeat1, 2),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_version_repeat1, 2), SHIFT_REPEAT(8),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__package_spec, 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__package_spec, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__extras, 4, .production_id = 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__extras, 4, .production_id = 1),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_version_repeat1, 2), SHIFT_REPEAT(12),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 4),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 5),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_specifier_clause, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_specifier_clause, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__version_specifier_clause_repeat1, 2),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__version_specifier_clause_repeat1, 2), SHIFT_REPEAT(55),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 6),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_cmp, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_specifier, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_spec, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_op, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_op, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_expr, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__extra_index_url, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_spec, 4),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_var, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_var, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_spec, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint_file, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__requirement_file, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__editable, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__index_url, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_marker_var, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_var, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__extras_repeat1, 2), SHIFT_REPEAT(71),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__extras_repeat1, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__extras_repeat1, 2, .production_id = 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [218] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
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
