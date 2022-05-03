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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(42);
      if (lookahead == 'd') ADVANCE(7);
      if (lookahead == 'p') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
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
      if (lookahead == 'c') ADVANCE(14);
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
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == 'v') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 13:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '.') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__pre_release);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__post_release);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__developmental_release);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__local_version);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_version_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_version_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_version_token2);
      if (lookahead == '+') ADVANCE(17);
      if (lookahead == 'a' ||
          lookahead == 'b') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_version_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
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
  [13] = {.lex_state = 18},
  [14] = {.lex_state = 18},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 18},
  [17] = {.lex_state = 18},
  [18] = {.lex_state = 18},
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
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 13},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
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
    [sym_name] = ACTIONS(1),
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
    [sym__expression] = STATE(11),
    [sym__package_spec] = STATE(2),
    [sym_package_spec] = STATE(11),
    [sym_version] = STATE(11),
    [aux_sym_requirements_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_name] = ACTIONS(5),
    [aux_sym_version_token1] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(15), 1,
      aux_sym_version_token1,
    STATE(24), 1,
      sym_version_specifier,
    STATE(38), 1,
      sym__version_specifier_clause,
    STATE(41), 1,
      sym__version_cmp,
    ACTIONS(9), 2,
      ts_builtin_sym_end,
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
  [29] = 4,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    STATE(6), 1,
      sym_extras,
    ACTIONS(21), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_version_token1,
    ACTIONS(17), 7,
      ts_builtin_sym_end,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      sym_name,
  [51] = 9,
    ACTIONS(25), 1,
      sym__pre_release,
    ACTIONS(27), 1,
      sym__post_release,
    ACTIONS(29), 1,
      sym__developmental_release,
    ACTIONS(31), 1,
      sym__local_version,
    ACTIONS(33), 1,
      aux_sym_version_token1,
    ACTIONS(35), 1,
      aux_sym_version_token2,
    ACTIONS(37), 1,
      aux_sym_version_token3,
    STATE(7), 1,
      aux_sym_version_repeat1,
    ACTIONS(23), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_name,
  [81] = 2,
    ACTIONS(41), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_version_token1,
    ACTIONS(39), 7,
      ts_builtin_sym_end,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      sym_name,
  [97] = 2,
    ACTIONS(45), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_version_token1,
    ACTIONS(43), 7,
      ts_builtin_sym_end,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      sym_name,
  [113] = 9,
    ACTIONS(49), 1,
      sym__pre_release,
    ACTIONS(51), 1,
      sym__post_release,
    ACTIONS(53), 1,
      sym__developmental_release,
    ACTIONS(55), 1,
      sym__local_version,
    ACTIONS(57), 1,
      aux_sym_version_token1,
    ACTIONS(59), 1,
      aux_sym_version_token2,
    ACTIONS(61), 1,
      aux_sym_version_token3,
    STATE(9), 1,
      aux_sym_version_repeat1,
    ACTIONS(47), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_name,
  [143] = 2,
    ACTIONS(65), 4,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_version_token1,
    ACTIONS(63), 7,
      ts_builtin_sym_end,
      anon_sym_TILDE_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      sym_name,
  [159] = 4,
    ACTIONS(69), 1,
      aux_sym_version_token1,
    ACTIONS(71), 1,
      aux_sym_version_token2,
    STATE(9), 1,
      aux_sym_version_repeat1,
    ACTIONS(67), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_name,
      sym__pre_release,
      sym__post_release,
      sym__developmental_release,
      sym__local_version,
      aux_sym_version_token3,
  [179] = 4,
    STATE(33), 1,
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
  [198] = 5,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      aux_sym_version_token1,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym__package_spec,
    STATE(12), 4,
      sym__expression,
      sym_package_spec,
      sym_version,
      aux_sym_requirements_repeat1,
  [217] = 5,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    ACTIONS(78), 1,
      sym_name,
    ACTIONS(81), 1,
      aux_sym_version_token1,
    STATE(2), 1,
      sym__package_spec,
    STATE(12), 4,
      sym__expression,
      sym_package_spec,
      sym_version,
      aux_sym_requirements_repeat1,
  [236] = 4,
    ACTIONS(69), 1,
      aux_sym_version_token1,
    ACTIONS(84), 1,
      aux_sym_version_token2,
    STATE(13), 1,
      aux_sym_version_repeat1,
    ACTIONS(67), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_name,
      aux_sym_version_token3,
  [252] = 5,
    ACTIONS(89), 1,
      aux_sym_version_token1,
    ACTIONS(91), 1,
      aux_sym_version_token2,
    ACTIONS(93), 1,
      aux_sym_version_token3,
    STATE(13), 1,
      aux_sym_version_repeat1,
    ACTIONS(87), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_name,
  [270] = 5,
    ACTIONS(51), 1,
      sym__post_release,
    ACTIONS(53), 1,
      sym__developmental_release,
    ACTIONS(57), 1,
      aux_sym_version_token1,
    ACTIONS(61), 1,
      aux_sym_version_token3,
    ACTIONS(47), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_name,
  [288] = 5,
    ACTIONS(91), 1,
      aux_sym_version_token2,
    ACTIONS(97), 1,
      aux_sym_version_token1,
    ACTIONS(99), 1,
      aux_sym_version_token3,
    STATE(13), 1,
      aux_sym_version_repeat1,
    ACTIONS(95), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_name,
  [306] = 5,
    ACTIONS(57), 1,
      aux_sym_version_token1,
    ACTIONS(61), 1,
      aux_sym_version_token3,
    ACTIONS(101), 1,
      aux_sym_version_token2,
    STATE(14), 1,
      aux_sym_version_repeat1,
    ACTIONS(47), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_name,
  [324] = 5,
    ACTIONS(89), 1,
      aux_sym_version_token1,
    ACTIONS(93), 1,
      aux_sym_version_token3,
    ACTIONS(103), 1,
      aux_sym_version_token2,
    STATE(16), 1,
      aux_sym_version_repeat1,
    ACTIONS(87), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_name,
  [342] = 5,
    ACTIONS(89), 1,
      aux_sym_version_token1,
    ACTIONS(93), 1,
      aux_sym_version_token3,
    ACTIONS(105), 1,
      sym__post_release,
    ACTIONS(107), 1,
      sym__developmental_release,
    ACTIONS(87), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_name,
  [360] = 4,
    ACTIONS(53), 1,
      sym__developmental_release,
    ACTIONS(57), 1,
      aux_sym_version_token1,
    ACTIONS(61), 1,
      aux_sym_version_token3,
    ACTIONS(47), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_name,
  [375] = 4,
    ACTIONS(97), 1,
      aux_sym_version_token1,
    ACTIONS(99), 1,
      aux_sym_version_token3,
    ACTIONS(109), 1,
      sym__developmental_release,
    ACTIONS(95), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_name,
  [390] = 4,
    ACTIONS(89), 1,
      aux_sym_version_token1,
    ACTIONS(93), 1,
      aux_sym_version_token3,
    ACTIONS(107), 1,
      sym__developmental_release,
    ACTIONS(87), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_name,
  [405] = 3,
    ACTIONS(97), 1,
      aux_sym_version_token1,
    ACTIONS(99), 1,
      aux_sym_version_token3,
    ACTIONS(95), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_name,
  [417] = 4,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    ACTIONS(115), 1,
      aux_sym_version_token1,
    STATE(28), 1,
      aux_sym__version_specifier_clause_repeat1,
    ACTIONS(111), 2,
      ts_builtin_sym_end,
      sym_name,
  [431] = 3,
    ACTIONS(119), 1,
      aux_sym_version_token1,
    ACTIONS(121), 1,
      aux_sym_version_token3,
    ACTIONS(117), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_name,
  [443] = 3,
    ACTIONS(89), 1,
      aux_sym_version_token1,
    ACTIONS(93), 1,
      aux_sym_version_token3,
    ACTIONS(87), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_name,
  [455] = 3,
    ACTIONS(57), 1,
      aux_sym_version_token1,
    ACTIONS(61), 1,
      aux_sym_version_token3,
    ACTIONS(47), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_name,
  [467] = 4,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    ACTIONS(125), 1,
      aux_sym_version_token1,
    STATE(29), 1,
      aux_sym__version_specifier_clause_repeat1,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      sym_name,
  [481] = 4,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    ACTIONS(132), 1,
      aux_sym_version_token1,
    STATE(29), 1,
      aux_sym__version_specifier_clause_repeat1,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      sym_name,
  [495] = 2,
    ACTIONS(97), 1,
      aux_sym_version_token1,
    ACTIONS(95), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_name,
  [504] = 2,
    ACTIONS(89), 1,
      aux_sym_version_token1,
    ACTIONS(87), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_name,
  [513] = 2,
    ACTIONS(57), 1,
      aux_sym_version_token1,
    ACTIONS(47), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_name,
  [522] = 2,
    ACTIONS(132), 1,
      aux_sym_version_token1,
    ACTIONS(127), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_name,
  [531] = 2,
    ACTIONS(136), 1,
      aux_sym_version_token1,
    ACTIONS(134), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_name,
  [540] = 2,
    ACTIONS(119), 1,
      aux_sym_version_token1,
    ACTIONS(117), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_name,
  [549] = 2,
    ACTIONS(140), 1,
      aux_sym_version_token1,
    ACTIONS(138), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_name,
  [558] = 3,
    ACTIONS(142), 1,
      anon_sym_COMMA,
    ACTIONS(144), 1,
      anon_sym_RBRACK,
    STATE(39), 1,
      aux_sym_extras_repeat1,
  [568] = 2,
    ACTIONS(148), 1,
      aux_sym_version_token1,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      sym_name,
  [576] = 3,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    ACTIONS(153), 1,
      anon_sym_RBRACK,
    STATE(39), 1,
      aux_sym_extras_repeat1,
  [586] = 3,
    ACTIONS(142), 1,
      anon_sym_COMMA,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
    STATE(37), 1,
      aux_sym_extras_repeat1,
  [596] = 2,
    ACTIONS(157), 1,
      aux_sym_version_token1,
    STATE(34), 1,
      sym_version,
  [603] = 1,
    ACTIONS(153), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [608] = 1,
    ACTIONS(159), 1,
      sym_name,
  [612] = 1,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
  [616] = 1,
    ACTIONS(163), 1,
      sym_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 51,
  [SMALL_STATE(5)] = 81,
  [SMALL_STATE(6)] = 97,
  [SMALL_STATE(7)] = 113,
  [SMALL_STATE(8)] = 143,
  [SMALL_STATE(9)] = 159,
  [SMALL_STATE(10)] = 179,
  [SMALL_STATE(11)] = 198,
  [SMALL_STATE(12)] = 217,
  [SMALL_STATE(13)] = 236,
  [SMALL_STATE(14)] = 252,
  [SMALL_STATE(15)] = 270,
  [SMALL_STATE(16)] = 288,
  [SMALL_STATE(17)] = 306,
  [SMALL_STATE(18)] = 324,
  [SMALL_STATE(19)] = 342,
  [SMALL_STATE(20)] = 360,
  [SMALL_STATE(21)] = 375,
  [SMALL_STATE(22)] = 390,
  [SMALL_STATE(23)] = 405,
  [SMALL_STATE(24)] = 417,
  [SMALL_STATE(25)] = 431,
  [SMALL_STATE(26)] = 443,
  [SMALL_STATE(27)] = 455,
  [SMALL_STATE(28)] = 467,
  [SMALL_STATE(29)] = 481,
  [SMALL_STATE(30)] = 495,
  [SMALL_STATE(31)] = 504,
  [SMALL_STATE(32)] = 513,
  [SMALL_STATE(33)] = 522,
  [SMALL_STATE(34)] = 531,
  [SMALL_STATE(35)] = 540,
  [SMALL_STATE(36)] = 549,
  [SMALL_STATE(37)] = 558,
  [SMALL_STATE(38)] = 568,
  [SMALL_STATE(39)] = 576,
  [SMALL_STATE(40)] = 586,
  [SMALL_STATE(41)] = 596,
  [SMALL_STATE(42)] = 603,
  [SMALL_STATE(43)] = 608,
  [SMALL_STATE(44)] = 612,
  [SMALL_STATE(45)] = 616,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirements, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_spec, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_package_spec, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__package_spec, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__package_spec, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extras, 4),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extras, 4),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__package_spec, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__package_spec, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extras, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extras, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_repeat1, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_version_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_version_repeat1, 2), SHIFT_REPEAT(9),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirements, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_requirements_repeat1, 2),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_requirements_repeat1, 2), SHIFT_REPEAT(3),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_requirements_repeat1, 2), SHIFT_REPEAT(4),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_version_repeat1, 2), SHIFT_REPEAT(13),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 4),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version, 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_specifier_clause, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__version_specifier_clause, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 5),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version, 5),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_specifier_clause, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__version_specifier_clause, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__version_specifier_clause_repeat1, 2),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__version_specifier_clause_repeat1, 2), SHIFT_REPEAT(10),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__version_specifier_clause_repeat1, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_specifier, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_specifier, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 6),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version, 6),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_spec, 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_package_spec, 2),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extras_repeat1, 2), SHIFT_REPEAT(43),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_extras_repeat1, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [161] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
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
