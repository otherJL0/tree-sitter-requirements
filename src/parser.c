#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_COMMA = 1,
  anon_sym_LBRACK = 2,
  anon_sym_RBRACK = 3,
  sym_comment = 4,
  anon_sym_TILDE_EQ = 5,
  anon_sym_EQ_EQ = 6,
  anon_sym_BANG_EQ = 7,
  anon_sym_LT_EQ = 8,
  anon_sym_GT_EQ = 9,
  anon_sym_LT = 10,
  anon_sym_GT = 11,
  anon_sym_EQ_EQ_EQ = 12,
  sym_name = 13,
  sym__pre_release = 14,
  sym__post_release = 15,
  sym__developmental_release = 16,
  sym__local_version = 17,
  aux_sym_version_token1 = 18,
  aux_sym_version_token2 = 19,
  aux_sym_version_token3 = 20,
  sym_requirements = 21,
  sym__expression = 22,
  sym__version_specifier_clause = 23,
  sym_version_specifier = 24,
  sym__package_spec = 25,
  sym_extras = 26,
  sym_package_spec = 27,
  sym__version_cmp = 28,
  sym_version = 29,
  aux_sym_requirements_repeat1 = 30,
  aux_sym__version_specifier_clause_repeat1 = 31,
  aux_sym_extras_repeat1 = 32,
  aux_sym_version_repeat1 = 33,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_comment] = "comment",
  [anon_sym_TILDE_EQ] = "~=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_EQ_EQ_EQ] = "===",
  [sym_name] = "name",
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
  [sym_extras] = "extras",
  [sym_package_spec] = "package_spec",
  [sym__version_cmp] = "_version_cmp",
  [sym_version] = "version",
  [aux_sym_requirements_repeat1] = "requirements_repeat1",
  [aux_sym__version_specifier_clause_repeat1] = "_version_specifier_clause_repeat1",
  [aux_sym_extras_repeat1] = "extras_repeat1",
  [aux_sym_version_repeat1] = "version_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_comment] = sym_comment,
  [anon_sym_TILDE_EQ] = anon_sym_TILDE_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_EQ_EQ_EQ] = anon_sym_EQ_EQ_EQ,
  [sym_name] = sym_name,
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
  [sym_extras] = sym_extras,
  [sym_package_spec] = sym_package_spec,
  [sym__version_cmp] = sym__version_cmp,
  [sym_version] = sym_version,
  [aux_sym_requirements_repeat1] = aux_sym_requirements_repeat1,
  [aux_sym__version_specifier_clause_repeat1] = aux_sym__version_specifier_clause_repeat1,
  [aux_sym_extras_repeat1] = aux_sym_extras_repeat1,
  [aux_sym_version_repeat1] = aux_sym_version_repeat1,
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
  [sym_name] = {
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
  [sym_extras] = {
    .visible = true,
    .named = true,
  },
  [sym_package_spec] = {
    .visible = true,
    .named = true,
  },
  [sym__version_cmp] = {
    .visible = false,
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
  [aux_sym_extras_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_version_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      if (lookahead == '!') ADVANCE(3);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '.') ADVANCE(1);
      if (lookahead == '<') ADVANCE(29);
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == '>') ADVANCE(30);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == ']') ADVANCE(22);
      if (lookahead == '~') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(40);
      if (lookahead == 'd') ADVANCE(7);
      if (lookahead == 'p') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(26);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(25);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(24);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(13);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == 'v') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 17:
      if (eof) ADVANCE(19);
      if (lookahead == '!') ADVANCE(3);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '.') ADVANCE(1);
      if (lookahead == '<') ADVANCE(29);
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == '>') ADVANCE(30);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == '~') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '.') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(31);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(27);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(28);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__pre_release);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__post_release);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__developmental_release);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__local_version);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_version_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_version_token2);
      if (lookahead == '+') ADVANCE(16);
      if (lookahead == 'a' ||
          lookahead == 'b') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_version_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_version_token3);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 17},
  [2] = {.lex_state = 17},
  [3] = {.lex_state = 17},
  [4] = {.lex_state = 17},
  [5] = {.lex_state = 17},
  [6] = {.lex_state = 17},
  [7] = {.lex_state = 17},
  [8] = {.lex_state = 17},
  [9] = {.lex_state = 17},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 17},
  [12] = {.lex_state = 18},
  [13] = {.lex_state = 17},
  [14] = {.lex_state = 18},
  [15] = {.lex_state = 17},
  [16] = {.lex_state = 18},
  [17] = {.lex_state = 18},
  [18] = {.lex_state = 17},
  [19] = {.lex_state = 18},
  [20] = {.lex_state = 17},
  [21] = {.lex_state = 17},
  [22] = {.lex_state = 17},
  [23] = {.lex_state = 17},
  [24] = {.lex_state = 17},
  [25] = {.lex_state = 17},
  [26] = {.lex_state = 17},
  [27] = {.lex_state = 17},
  [28] = {.lex_state = 17},
  [29] = {.lex_state = 17},
  [30] = {.lex_state = 17},
  [31] = {.lex_state = 17},
  [32] = {.lex_state = 17},
  [33] = {.lex_state = 17},
  [34] = {.lex_state = 17},
  [35] = {.lex_state = 17},
  [36] = {.lex_state = 17},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 17},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 17},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 17},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_TILDE_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(1),
    [sym__pre_release] = ACTIONS(1),
    [sym__post_release] = ACTIONS(1),
    [sym__developmental_release] = ACTIONS(1),
    [sym__local_version] = ACTIONS(1),
    [aux_sym_version_token1] = ACTIONS(1),
    [aux_sym_version_token2] = ACTIONS(1),
    [aux_sym_version_token3] = ACTIONS(1),
  },
  [1] = {
    [sym_requirements] = STATE(44),
    [sym__expression] = STATE(15),
    [sym__package_spec] = STATE(2),
    [sym_package_spec] = STATE(15),
    [aux_sym_requirements_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_name] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    STATE(27), 1,
      sym_version_specifier,
    STATE(38), 1,
      sym__version_specifier_clause,
    STATE(41), 1,
      sym__version_cmp,
    ACTIONS(9), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_name,
    ACTIONS(13), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(11), 5,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
  [27] = 4,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    STATE(8), 1,
      sym_extras,
    ACTIONS(19), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(15), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      sym_name,
  [49] = 2,
    ACTIONS(23), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      sym_name,
  [65] = 3,
    ACTIONS(27), 1,
      aux_sym_version_token2,
    STATE(5), 1,
      aux_sym_version_repeat1,
    ACTIONS(25), 9,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_comment,
      sym_name,
      sym__pre_release,
      sym__post_release,
      sym__developmental_release,
      sym__local_version,
      aux_sym_version_token3,
  [83] = 2,
    ACTIONS(32), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(30), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      sym_name,
  [99] = 8,
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
    STATE(5), 1,
      aux_sym_version_repeat1,
    ACTIONS(34), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_comment,
      sym_name,
  [127] = 2,
    ACTIONS(50), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(48), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      sym_name,
  [143] = 8,
    ACTIONS(54), 1,
      sym__pre_release,
    ACTIONS(56), 1,
      sym__post_release,
    ACTIONS(58), 1,
      sym__developmental_release,
    ACTIONS(60), 1,
      sym__local_version,
    ACTIONS(62), 1,
      aux_sym_version_token2,
    ACTIONS(64), 1,
      aux_sym_version_token3,
    STATE(7), 1,
      aux_sym_version_repeat1,
    ACTIONS(52), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_comment,
      sym_name,
  [171] = 4,
    STATE(30), 1,
      sym_version_specifier,
    STATE(41), 1,
      sym__version_cmp,
    ACTIONS(13), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(11), 5,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
  [190] = 4,
    ACTIONS(38), 1,
      sym__post_release,
    ACTIONS(40), 1,
      sym__developmental_release,
    ACTIONS(46), 1,
      aux_sym_version_token3,
    ACTIONS(34), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_comment,
      sym_name,
  [206] = 3,
    ACTIONS(66), 1,
      aux_sym_version_token2,
    STATE(12), 1,
      aux_sym_version_repeat1,
    ACTIONS(25), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_comment,
      sym_name,
      aux_sym_version_token3,
  [220] = 5,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      sym_comment,
    ACTIONS(74), 1,
      sym_name,
    STATE(2), 1,
      sym__package_spec,
    STATE(13), 3,
      sym__expression,
      sym_package_spec,
      aux_sym_requirements_repeat1,
  [238] = 4,
    ACTIONS(79), 1,
      aux_sym_version_token2,
    ACTIONS(81), 1,
      aux_sym_version_token3,
    STATE(12), 1,
      aux_sym_version_repeat1,
    ACTIONS(77), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_comment,
      sym_name,
  [254] = 5,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 1,
      sym_comment,
    STATE(2), 1,
      sym__package_spec,
    STATE(13), 3,
      sym__expression,
      sym_package_spec,
      aux_sym_requirements_repeat1,
  [272] = 4,
    ACTIONS(46), 1,
      aux_sym_version_token3,
    ACTIONS(87), 1,
      aux_sym_version_token2,
    STATE(19), 1,
      aux_sym_version_repeat1,
    ACTIONS(34), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_comment,
      sym_name,
  [288] = 4,
    ACTIONS(91), 1,
      aux_sym_version_token2,
    ACTIONS(93), 1,
      aux_sym_version_token3,
    STATE(14), 1,
      aux_sym_version_repeat1,
    ACTIONS(89), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_comment,
      sym_name,
  [304] = 4,
    ACTIONS(93), 1,
      aux_sym_version_token3,
    ACTIONS(95), 1,
      sym__post_release,
    ACTIONS(97), 1,
      sym__developmental_release,
    ACTIONS(89), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_comment,
      sym_name,
  [320] = 4,
    ACTIONS(79), 1,
      aux_sym_version_token2,
    ACTIONS(93), 1,
      aux_sym_version_token3,
    STATE(12), 1,
      aux_sym_version_repeat1,
    ACTIONS(89), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_comment,
      sym_name,
  [336] = 3,
    ACTIONS(81), 1,
      aux_sym_version_token3,
    ACTIONS(99), 1,
      sym__developmental_release,
    ACTIONS(77), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_comment,
      sym_name,
  [349] = 3,
    ACTIONS(40), 1,
      sym__developmental_release,
    ACTIONS(46), 1,
      aux_sym_version_token3,
    ACTIONS(34), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_comment,
      sym_name,
  [362] = 3,
    ACTIONS(93), 1,
      aux_sym_version_token3,
    ACTIONS(97), 1,
      sym__developmental_release,
    ACTIONS(89), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_comment,
      sym_name,
  [375] = 2,
    ACTIONS(93), 1,
      aux_sym_version_token3,
    ACTIONS(89), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_comment,
      sym_name,
  [385] = 2,
    ACTIONS(103), 1,
      aux_sym_version_token3,
    ACTIONS(101), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_comment,
      sym_name,
  [395] = 3,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      aux_sym__version_specifier_clause_repeat1,
    ACTIONS(105), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_name,
  [407] = 2,
    ACTIONS(81), 1,
      aux_sym_version_token3,
    ACTIONS(77), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_comment,
      sym_name,
  [417] = 3,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    STATE(25), 1,
      aux_sym__version_specifier_clause_repeat1,
    ACTIONS(109), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_name,
  [429] = 3,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      aux_sym__version_specifier_clause_repeat1,
    ACTIONS(111), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_name,
  [441] = 2,
    ACTIONS(46), 1,
      aux_sym_version_token3,
    ACTIONS(34), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_comment,
      sym_name,
  [451] = 1,
    ACTIONS(111), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_comment,
      sym_name,
  [458] = 1,
    ACTIONS(89), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_comment,
      sym_name,
  [465] = 1,
    ACTIONS(34), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_comment,
      sym_name,
  [472] = 1,
    ACTIONS(77), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_comment,
      sym_name,
  [479] = 1,
    ACTIONS(101), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_comment,
      sym_name,
  [486] = 1,
    ACTIONS(116), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_comment,
      sym_name,
  [493] = 1,
    ACTIONS(118), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_comment,
      sym_name,
  [500] = 3,
    ACTIONS(120), 1,
      anon_sym_COMMA,
    ACTIONS(123), 1,
      anon_sym_RBRACK,
    STATE(37), 1,
      aux_sym_extras_repeat1,
  [510] = 1,
    ACTIONS(125), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_name,
  [516] = 3,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    ACTIONS(129), 1,
      anon_sym_RBRACK,
    STATE(37), 1,
      aux_sym_extras_repeat1,
  [526] = 3,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    ACTIONS(131), 1,
      anon_sym_RBRACK,
    STATE(39), 1,
      aux_sym_extras_repeat1,
  [536] = 2,
    ACTIONS(133), 1,
      aux_sym_version_token1,
    STATE(35), 1,
      sym_version,
  [543] = 1,
    ACTIONS(123), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [548] = 1,
    ACTIONS(135), 1,
      sym_name,
  [552] = 1,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
  [556] = 1,
    ACTIONS(139), 1,
      sym_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 49,
  [SMALL_STATE(5)] = 65,
  [SMALL_STATE(6)] = 83,
  [SMALL_STATE(7)] = 99,
  [SMALL_STATE(8)] = 127,
  [SMALL_STATE(9)] = 143,
  [SMALL_STATE(10)] = 171,
  [SMALL_STATE(11)] = 190,
  [SMALL_STATE(12)] = 206,
  [SMALL_STATE(13)] = 220,
  [SMALL_STATE(14)] = 238,
  [SMALL_STATE(15)] = 254,
  [SMALL_STATE(16)] = 272,
  [SMALL_STATE(17)] = 288,
  [SMALL_STATE(18)] = 304,
  [SMALL_STATE(19)] = 320,
  [SMALL_STATE(20)] = 336,
  [SMALL_STATE(21)] = 349,
  [SMALL_STATE(22)] = 362,
  [SMALL_STATE(23)] = 375,
  [SMALL_STATE(24)] = 385,
  [SMALL_STATE(25)] = 395,
  [SMALL_STATE(26)] = 407,
  [SMALL_STATE(27)] = 417,
  [SMALL_STATE(28)] = 429,
  [SMALL_STATE(29)] = 441,
  [SMALL_STATE(30)] = 451,
  [SMALL_STATE(31)] = 458,
  [SMALL_STATE(32)] = 465,
  [SMALL_STATE(33)] = 472,
  [SMALL_STATE(34)] = 479,
  [SMALL_STATE(35)] = 486,
  [SMALL_STATE(36)] = 493,
  [SMALL_STATE(37)] = 500,
  [SMALL_STATE(38)] = 510,
  [SMALL_STATE(39)] = 516,
  [SMALL_STATE(40)] = 526,
  [SMALL_STATE(41)] = 536,
  [SMALL_STATE(42)] = 543,
  [SMALL_STATE(43)] = 548,
  [SMALL_STATE(44)] = 552,
  [SMALL_STATE(45)] = 556,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirements, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_spec, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__package_spec, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__package_spec, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extras, 3),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extras, 3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_version_repeat1, 2), SHIFT_REPEAT(5),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extras, 4),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extras, 4),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__package_spec, 2),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__package_spec, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_version_repeat1, 2), SHIFT_REPEAT(12),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_requirements_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_requirements_repeat1, 2), SHIFT_REPEAT(13),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_requirements_repeat1, 2), SHIFT_REPEAT(3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 4),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirements, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 5),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_specifier_clause, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_specifier_clause, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__version_specifier_clause_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__version_specifier_clause_repeat1, 2), SHIFT_REPEAT(10),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_specifier, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 6),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extras_repeat1, 2), SHIFT_REPEAT(45),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_extras_repeat1, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_spec, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [137] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
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
