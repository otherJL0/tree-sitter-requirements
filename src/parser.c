#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 33
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
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
  sym__pre_release = 13,
  sym__post_release = 14,
  sym__developmental_release = 15,
  sym__local_version = 16,
  aux_sym_version_token1 = 17,
  aux_sym_version_token2 = 18,
  aux_sym_version_token3 = 19,
  sym_requirements = 20,
  sym__expression = 21,
  sym__version_specifier_clause = 22,
  sym_version_specifier = 23,
  sym__version_cmp = 24,
  sym_version = 25,
  aux_sym_requirements_repeat1 = 26,
  aux_sym__version_specifier_clause_repeat1 = 27,
  aux_sym_version_repeat1 = 28,
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
  [sym__version_cmp] = "_version_cmp",
  [sym_version] = "version",
  [aux_sym_requirements_repeat1] = "requirements_repeat1",
  [aux_sym__version_specifier_clause_repeat1] = "_version_specifier_clause_repeat1",
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
  [sym__version_cmp] = sym__version_cmp,
  [sym_version] = sym_version,
  [aux_sym_requirements_repeat1] = aux_sym_requirements_repeat1,
  [aux_sym__version_specifier_clause_repeat1] = aux_sym__version_specifier_clause_repeat1,
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
      if (eof) ADVANCE(15);
      if (lookahead == '!') ADVANCE(2);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '.') ADVANCE(1);
      if (lookahead == '<') ADVANCE(25);
      if (lookahead == '=') ADVANCE(3);
      if (lookahead == '>') ADVANCE(26);
      if (lookahead == '[') ADVANCE(17);
      if (lookahead == ']') ADVANCE(18);
      if (lookahead == '~') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == 'd') ADVANCE(6);
      if (lookahead == 'p') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 2:
      if (lookahead == '=') ADVANCE(22);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(21);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == 'c') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'v') ADVANCE(12);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(27);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(23);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(24);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__pre_release);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__post_release);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__developmental_release);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__local_version);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_version_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_version_token2);
      if (lookahead == '+') ADVANCE(14);
      if (lookahead == 'a' ||
          lookahead == 'b') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_version_token3);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
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
    [sym_requirements] = STATE(32),
    [sym__expression] = STATE(6),
    [sym__version_specifier_clause] = STATE(6),
    [sym_version_specifier] = STATE(21),
    [sym__version_cmp] = STATE(31),
    [sym_version] = STATE(6),
    [aux_sym_requirements_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_TILDE_EQ] = ACTIONS(5),
    [anon_sym_EQ_EQ] = ACTIONS(7),
    [anon_sym_BANG_EQ] = ACTIONS(5),
    [anon_sym_LT_EQ] = ACTIONS(5),
    [anon_sym_GT_EQ] = ACTIONS(5),
    [anon_sym_LT] = ACTIONS(7),
    [anon_sym_GT] = ACTIONS(7),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(5),
    [aux_sym_version_token1] = ACTIONS(9),
  },
  [2] = {
    [aux_sym_version_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_TILDE_EQ] = ACTIONS(11),
    [anon_sym_EQ_EQ] = ACTIONS(13),
    [anon_sym_BANG_EQ] = ACTIONS(11),
    [anon_sym_LT_EQ] = ACTIONS(11),
    [anon_sym_GT_EQ] = ACTIONS(11),
    [anon_sym_LT] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(13),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(11),
    [sym__pre_release] = ACTIONS(15),
    [sym__post_release] = ACTIONS(17),
    [sym__developmental_release] = ACTIONS(19),
    [sym__local_version] = ACTIONS(21),
    [aux_sym_version_token1] = ACTIONS(11),
    [aux_sym_version_token2] = ACTIONS(23),
    [aux_sym_version_token3] = ACTIONS(25),
  },
  [3] = {
    [aux_sym_version_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_TILDE_EQ] = ACTIONS(27),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(27),
    [anon_sym_GT_EQ] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(27),
    [sym__pre_release] = ACTIONS(27),
    [sym__post_release] = ACTIONS(27),
    [sym__developmental_release] = ACTIONS(27),
    [sym__local_version] = ACTIONS(27),
    [aux_sym_version_token1] = ACTIONS(27),
    [aux_sym_version_token2] = ACTIONS(31),
    [aux_sym_version_token3] = ACTIONS(27),
  },
  [4] = {
    [aux_sym_version_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(34),
    [anon_sym_COMMA] = ACTIONS(34),
    [anon_sym_TILDE_EQ] = ACTIONS(34),
    [anon_sym_EQ_EQ] = ACTIONS(36),
    [anon_sym_BANG_EQ] = ACTIONS(34),
    [anon_sym_LT_EQ] = ACTIONS(34),
    [anon_sym_GT_EQ] = ACTIONS(34),
    [anon_sym_LT] = ACTIONS(36),
    [anon_sym_GT] = ACTIONS(36),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(34),
    [sym__pre_release] = ACTIONS(38),
    [sym__post_release] = ACTIONS(40),
    [sym__developmental_release] = ACTIONS(42),
    [sym__local_version] = ACTIONS(44),
    [aux_sym_version_token1] = ACTIONS(34),
    [aux_sym_version_token2] = ACTIONS(46),
    [aux_sym_version_token3] = ACTIONS(48),
  },
  [5] = {
    [sym__expression] = STATE(5),
    [sym__version_specifier_clause] = STATE(5),
    [sym_version_specifier] = STATE(21),
    [sym__version_cmp] = STATE(31),
    [sym_version] = STATE(5),
    [aux_sym_requirements_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(50),
    [anon_sym_TILDE_EQ] = ACTIONS(52),
    [anon_sym_EQ_EQ] = ACTIONS(55),
    [anon_sym_BANG_EQ] = ACTIONS(52),
    [anon_sym_LT_EQ] = ACTIONS(52),
    [anon_sym_GT_EQ] = ACTIONS(52),
    [anon_sym_LT] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(55),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(52),
    [aux_sym_version_token1] = ACTIONS(58),
  },
  [6] = {
    [sym__expression] = STATE(5),
    [sym__version_specifier_clause] = STATE(5),
    [sym_version_specifier] = STATE(21),
    [sym__version_cmp] = STATE(31),
    [sym_version] = STATE(5),
    [aux_sym_requirements_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_TILDE_EQ] = ACTIONS(5),
    [anon_sym_EQ_EQ] = ACTIONS(7),
    [anon_sym_BANG_EQ] = ACTIONS(5),
    [anon_sym_LT_EQ] = ACTIONS(5),
    [anon_sym_GT_EQ] = ACTIONS(5),
    [anon_sym_LT] = ACTIONS(7),
    [anon_sym_GT] = ACTIONS(7),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(5),
    [aux_sym_version_token1] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(67), 1,
      aux_sym_version_token2,
    ACTIONS(69), 1,
      aux_sym_version_token3,
    STATE(3), 1,
      aux_sym_version_repeat1,
    ACTIONS(65), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      aux_sym_version_token1,
  [25] = 5,
    ACTIONS(75), 1,
      aux_sym_version_token2,
    ACTIONS(77), 1,
      aux_sym_version_token3,
    STATE(7), 1,
      aux_sym_version_repeat1,
    ACTIONS(73), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      aux_sym_version_token1,
  [50] = 5,
    ACTIONS(40), 1,
      sym__post_release,
    ACTIONS(42), 1,
      sym__developmental_release,
    ACTIONS(48), 1,
      aux_sym_version_token3,
    ACTIONS(36), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(34), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      aux_sym_version_token1,
  [75] = 5,
    ACTIONS(77), 1,
      aux_sym_version_token3,
    ACTIONS(79), 1,
      sym__post_release,
    ACTIONS(81), 1,
      sym__developmental_release,
    ACTIONS(73), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      aux_sym_version_token1,
  [100] = 5,
    ACTIONS(48), 1,
      aux_sym_version_token3,
    ACTIONS(83), 1,
      aux_sym_version_token2,
    STATE(12), 1,
      aux_sym_version_repeat1,
    ACTIONS(36), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(34), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      aux_sym_version_token1,
  [125] = 5,
    ACTIONS(67), 1,
      aux_sym_version_token2,
    ACTIONS(77), 1,
      aux_sym_version_token3,
    STATE(3), 1,
      aux_sym_version_repeat1,
    ACTIONS(73), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      aux_sym_version_token1,
  [150] = 4,
    ACTIONS(42), 1,
      sym__developmental_release,
    ACTIONS(48), 1,
      aux_sym_version_token3,
    ACTIONS(36), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(34), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      aux_sym_version_token1,
  [172] = 4,
    ACTIONS(77), 1,
      aux_sym_version_token3,
    ACTIONS(81), 1,
      sym__developmental_release,
    ACTIONS(73), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      aux_sym_version_token1,
  [194] = 4,
    ACTIONS(69), 1,
      aux_sym_version_token3,
    ACTIONS(85), 1,
      sym__developmental_release,
    ACTIONS(65), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      aux_sym_version_token1,
  [216] = 4,
    ACTIONS(89), 1,
      anon_sym_COMMA,
    STATE(19), 1,
      aux_sym__version_specifier_clause_repeat1,
    ACTIONS(91), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 7,
      ts_builtin_sym_end,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      aux_sym_version_token1,
  [237] = 3,
    ACTIONS(77), 1,
      aux_sym_version_token3,
    ACTIONS(73), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      aux_sym_version_token1,
  [256] = 3,
    ACTIONS(48), 1,
      aux_sym_version_token3,
    ACTIONS(36), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(34), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      aux_sym_version_token1,
  [275] = 4,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    STATE(19), 1,
      aux_sym__version_specifier_clause_repeat1,
    ACTIONS(98), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 7,
      ts_builtin_sym_end,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      aux_sym_version_token1,
  [296] = 3,
    ACTIONS(69), 1,
      aux_sym_version_token3,
    ACTIONS(65), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      aux_sym_version_token1,
  [315] = 4,
    ACTIONS(89), 1,
      anon_sym_COMMA,
    STATE(16), 1,
      aux_sym__version_specifier_clause_repeat1,
    ACTIONS(102), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(100), 7,
      ts_builtin_sym_end,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      aux_sym_version_token1,
  [336] = 3,
    ACTIONS(108), 1,
      aux_sym_version_token3,
    ACTIONS(106), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(104), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      aux_sym_version_token1,
  [355] = 2,
    ACTIONS(112), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(110), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      aux_sym_version_token1,
  [371] = 2,
    ACTIONS(73), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      aux_sym_version_token1,
  [387] = 2,
    ACTIONS(36), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(34), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      aux_sym_version_token1,
  [403] = 2,
    ACTIONS(98), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      aux_sym_version_token1,
  [419] = 2,
    ACTIONS(65), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      aux_sym_version_token1,
  [435] = 2,
    ACTIONS(106), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(104), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      aux_sym_version_token1,
  [451] = 2,
    ACTIONS(116), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(114), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      aux_sym_version_token1,
  [467] = 4,
    STATE(26), 1,
      sym_version_specifier,
    STATE(31), 1,
      sym__version_cmp,
    ACTIONS(7), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(5), 5,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
  [486] = 2,
    ACTIONS(9), 1,
      aux_sym_version_token1,
    STATE(23), 1,
      sym_version,
  [493] = 1,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 25,
  [SMALL_STATE(9)] = 50,
  [SMALL_STATE(10)] = 75,
  [SMALL_STATE(11)] = 100,
  [SMALL_STATE(12)] = 125,
  [SMALL_STATE(13)] = 150,
  [SMALL_STATE(14)] = 172,
  [SMALL_STATE(15)] = 194,
  [SMALL_STATE(16)] = 216,
  [SMALL_STATE(17)] = 237,
  [SMALL_STATE(18)] = 256,
  [SMALL_STATE(19)] = 275,
  [SMALL_STATE(20)] = 296,
  [SMALL_STATE(21)] = 315,
  [SMALL_STATE(22)] = 336,
  [SMALL_STATE(23)] = 355,
  [SMALL_STATE(24)] = 371,
  [SMALL_STATE(25)] = 387,
  [SMALL_STATE(26)] = 403,
  [SMALL_STATE(27)] = 419,
  [SMALL_STATE(28)] = 435,
  [SMALL_STATE(29)] = 451,
  [SMALL_STATE(30)] = 467,
  [SMALL_STATE(31)] = 486,
  [SMALL_STATE(32)] = 493,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirements, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_repeat1, 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_version_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_version_repeat1, 2), SHIFT_REPEAT(3),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 2),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version, 2),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_requirements_repeat1, 2),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_requirements_repeat1, 2), SHIFT_REPEAT(31),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_requirements_repeat1, 2), SHIFT_REPEAT(31),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_requirements_repeat1, 2), SHIFT_REPEAT(2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirements, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 4),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version, 4),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_specifier_clause, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__version_specifier_clause, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__version_specifier_clause_repeat1, 2),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__version_specifier_clause_repeat1, 2), SHIFT_REPEAT(30),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__version_specifier_clause_repeat1, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_specifier_clause, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__version_specifier_clause, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 5),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version, 5),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_specifier, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_specifier, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 6),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version, 6),
  [118] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
