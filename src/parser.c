#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 21
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  sym_comment = 1,
  anon_sym_LT = 2,
  anon_sym_LT_EQ = 3,
  anon_sym_BANG_EQ = 4,
  anon_sym_EQ_EQ = 5,
  anon_sym_GT_EQ = 6,
  anon_sym_GT = 7,
  anon_sym_TILDE_EQ = 8,
  anon_sym_EQ_EQ_EQ = 9,
  sym__pre_release = 10,
  sym__post_release = 11,
  sym__developmental_release = 12,
  sym__local_version = 13,
  aux_sym_version_token1 = 14,
  aux_sym_version_token2 = 15,
  sym_requirements = 16,
  sym__expression = 17,
  sym_version = 18,
  aux_sym_requirements_repeat1 = 19,
  aux_sym_version_repeat1 = 20,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_GT] = ">",
  [anon_sym_TILDE_EQ] = "~=",
  [anon_sym_EQ_EQ_EQ] = "===",
  [sym__pre_release] = "_pre_release",
  [sym__post_release] = "_post_release",
  [sym__developmental_release] = "_developmental_release",
  [sym__local_version] = "_local_version",
  [aux_sym_version_token1] = "version_token1",
  [aux_sym_version_token2] = "version_token2",
  [sym_requirements] = "requirements",
  [sym__expression] = "_expression",
  [sym_version] = "version",
  [aux_sym_requirements_repeat1] = "requirements_repeat1",
  [aux_sym_version_repeat1] = "version_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_TILDE_EQ] = anon_sym_TILDE_EQ,
  [anon_sym_EQ_EQ_EQ] = anon_sym_EQ_EQ_EQ,
  [sym__pre_release] = sym__pre_release,
  [sym__post_release] = sym__post_release,
  [sym__developmental_release] = sym__developmental_release,
  [sym__local_version] = sym__local_version,
  [aux_sym_version_token1] = aux_sym_version_token1,
  [aux_sym_version_token2] = aux_sym_version_token2,
  [sym_requirements] = sym_requirements,
  [sym__expression] = sym__expression,
  [sym_version] = sym_version,
  [aux_sym_requirements_repeat1] = aux_sym_requirements_repeat1,
  [aux_sym_version_repeat1] = aux_sym_version_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_EQ] = {
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
  [sym_requirements] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
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
      if (lookahead == '!') ADVANCE(1);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '<') ADVANCE(17);
      if (lookahead == '=') ADVANCE(2);
      if (lookahead == '>') ADVANCE(22);
      if (lookahead == '~') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 1:
      if (lookahead == '=') ADVANCE(19);
      END_STATE();
    case 2:
      if (lookahead == '=') ADVANCE(20);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(23);
      END_STATE();
    case 4:
      if (lookahead == 'c') ADVANCE(11);
      END_STATE();
    case 5:
      if (lookahead == 'd') ADVANCE(6);
      if (lookahead == 'p') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(24);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(21);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__pre_release);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__post_release);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__developmental_release);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__local_version);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_version_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_version_token2);
      if (lookahead == '+') ADVANCE(14);
      if (lookahead == 'a' ||
          lookahead == 'b') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_TILDE_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(1),
    [sym__pre_release] = ACTIONS(1),
    [sym__post_release] = ACTIONS(1),
    [sym__developmental_release] = ACTIONS(1),
    [sym__local_version] = ACTIONS(1),
    [aux_sym_version_token1] = ACTIONS(1),
    [aux_sym_version_token2] = ACTIONS(1),
  },
  [1] = {
    [sym_requirements] = STATE(20),
    [sym__expression] = STATE(5),
    [sym_version] = STATE(5),
    [aux_sym_requirements_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_version_token1] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(9), 1,
      sym__pre_release,
    ACTIONS(11), 1,
      sym__post_release,
    ACTIONS(13), 1,
      sym__developmental_release,
    ACTIONS(15), 1,
      sym__local_version,
    ACTIONS(17), 1,
      aux_sym_version_token2,
    STATE(4), 1,
      aux_sym_version_repeat1,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      aux_sym_version_token1,
  [23] = 7,
    ACTIONS(21), 1,
      sym__pre_release,
    ACTIONS(23), 1,
      sym__post_release,
    ACTIONS(25), 1,
      sym__developmental_release,
    ACTIONS(27), 1,
      sym__local_version,
    ACTIONS(29), 1,
      aux_sym_version_token2,
    STATE(2), 1,
      aux_sym_version_repeat1,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      aux_sym_version_token1,
  [46] = 3,
    ACTIONS(33), 1,
      aux_sym_version_token2,
    STATE(4), 1,
      aux_sym_version_repeat1,
    ACTIONS(31), 6,
      ts_builtin_sym_end,
      sym__pre_release,
      sym__post_release,
      sym__developmental_release,
      sym__local_version,
      aux_sym_version_token1,
  [61] = 3,
    ACTIONS(5), 1,
      aux_sym_version_token1,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    STATE(6), 3,
      sym__expression,
      sym_version,
      aux_sym_requirements_repeat1,
  [73] = 3,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    ACTIONS(40), 1,
      aux_sym_version_token1,
    STATE(6), 3,
      sym__expression,
      sym_version,
      aux_sym_requirements_repeat1,
  [85] = 3,
    ACTIONS(11), 1,
      sym__post_release,
    ACTIONS(13), 1,
      sym__developmental_release,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      aux_sym_version_token1,
  [96] = 3,
    ACTIONS(43), 1,
      aux_sym_version_token2,
    STATE(9), 1,
      aux_sym_version_repeat1,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      aux_sym_version_token1,
  [107] = 3,
    ACTIONS(47), 1,
      aux_sym_version_token2,
    STATE(4), 1,
      aux_sym_version_repeat1,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      aux_sym_version_token1,
  [118] = 3,
    ACTIONS(49), 1,
      sym__post_release,
    ACTIONS(51), 1,
      sym__developmental_release,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      aux_sym_version_token1,
  [129] = 3,
    ACTIONS(53), 1,
      aux_sym_version_token2,
    STATE(12), 1,
      aux_sym_version_repeat1,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      aux_sym_version_token1,
  [140] = 3,
    ACTIONS(47), 1,
      aux_sym_version_token2,
    STATE(4), 1,
      aux_sym_version_repeat1,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      aux_sym_version_token1,
  [151] = 2,
    ACTIONS(51), 1,
      sym__developmental_release,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      aux_sym_version_token1,
  [159] = 2,
    ACTIONS(13), 1,
      sym__developmental_release,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      aux_sym_version_token1,
  [167] = 2,
    ACTIONS(57), 1,
      sym__developmental_release,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      aux_sym_version_token1,
  [175] = 1,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      aux_sym_version_token1,
  [180] = 1,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      aux_sym_version_token1,
  [185] = 1,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      aux_sym_version_token1,
  [190] = 1,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      aux_sym_version_token1,
  [195] = 1,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 61,
  [SMALL_STATE(6)] = 73,
  [SMALL_STATE(7)] = 85,
  [SMALL_STATE(8)] = 96,
  [SMALL_STATE(9)] = 107,
  [SMALL_STATE(10)] = 118,
  [SMALL_STATE(11)] = 129,
  [SMALL_STATE(12)] = 140,
  [SMALL_STATE(13)] = 151,
  [SMALL_STATE(14)] = 159,
  [SMALL_STATE(15)] = 167,
  [SMALL_STATE(16)] = 175,
  [SMALL_STATE(17)] = 180,
  [SMALL_STATE(18)] = 185,
  [SMALL_STATE(19)] = 190,
  [SMALL_STATE(20)] = 195,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirements, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_version_repeat1, 2), SHIFT_REPEAT(4),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirements, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_requirements_repeat1, 2),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_requirements_repeat1, 2), SHIFT_REPEAT(3),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 4),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 5),
  [61] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
