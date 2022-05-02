#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 16
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_LBRACK = 1,
  anon_sym_RBRACK = 2,
  anon_sym_EQ_EQ = 3,
  anon_sym_BANG_EQ = 4,
  anon_sym_GT_EQ = 5,
  anon_sym_LT_EQ = 6,
  anon_sym_TILDE_EQ = 7,
  sym_comment = 8,
  sym_name = 9,
  sym_version = 10,
  sym_source_file = 11,
  sym__expression = 12,
  sym__package_expression = 13,
  sym__package = 14,
  sym_extra = 15,
  sym__version_constraints = 16,
  aux_sym_source_file_repeat1 = 17,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_TILDE_EQ] = "~=",
  [sym_comment] = "comment",
  [sym_name] = "name",
  [sym_version] = "version",
  [sym_source_file] = "source_file",
  [sym__expression] = "_expression",
  [sym__package_expression] = "_package_expression",
  [sym__package] = "_package",
  [sym_extra] = "extra",
  [sym__version_constraints] = "_version_constraints",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_TILDE_EQ] = anon_sym_TILDE_EQ,
  [sym_comment] = sym_comment,
  [sym_name] = sym_name,
  [sym_version] = sym_version,
  [sym_source_file] = sym_source_file,
  [sym__expression] = sym__expression,
  [sym__package_expression] = sym__package_expression,
  [sym__package] = sym__package,
  [sym_extra] = sym_extra,
  [sym__version_constraints] = sym__version_constraints,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__package_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__package] = {
    .visible = false,
    .named = true,
  },
  [sym_extra] = {
    .visible = true,
    .named = true,
  },
  [sym__version_constraints] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_operators = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_operators] = "operators",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_operators, 0, .inherited = true},
  [1] =
    {field_operators, 1, .inherited = true},
  [2] =
    {field_operators, 0, .inherited = true},
    {field_operators, 1, .inherited = true},
  [4] =
    {field_operators, 0},
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
      if (eof) ADVANCE(10);
      if (lookahead == '!') ADVANCE(2);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '<') ADVANCE(3);
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == '>') ADVANCE(5);
      if (lookahead == '[') ADVANCE(11);
      if (lookahead == ']') ADVANCE(12);
      if (lookahead == '~') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == '.') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '=') ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(17);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 9:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '.') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_version);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_version);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_TILDE_EQ] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [sym_version] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(12),
    [sym__expression] = STATE(8),
    [sym__package_expression] = STATE(9),
    [sym__package] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_name] = ACTIONS(7),
  },
  [2] = {
    [sym_extra] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_EQ_EQ] = ACTIONS(9),
    [anon_sym_BANG_EQ] = ACTIONS(9),
    [anon_sym_GT_EQ] = ACTIONS(9),
    [anon_sym_LT_EQ] = ACTIONS(9),
    [anon_sym_TILDE_EQ] = ACTIONS(9),
    [sym_comment] = ACTIONS(9),
    [sym_name] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    STATE(10), 1,
      sym__version_constraints,
    ACTIONS(13), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_name,
    ACTIONS(15), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_TILDE_EQ,
  [16] = 1,
    ACTIONS(17), 8,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_TILDE_EQ,
      sym_comment,
      sym_name,
  [27] = 1,
    ACTIONS(19), 8,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_TILDE_EQ,
      sym_comment,
      sym_name,
  [38] = 7,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym__package,
    STATE(7), 1,
      aux_sym_source_file_repeat1,
    STATE(8), 1,
      sym__expression,
    STATE(9), 1,
      sym__package_expression,
  [60] = 7,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(28), 1,
      sym_name,
    STATE(3), 1,
      sym__package,
    STATE(7), 1,
      aux_sym_source_file_repeat1,
    STATE(8), 1,
      sym__expression,
    STATE(9), 1,
      sym__package_expression,
  [82] = 1,
    ACTIONS(31), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_name,
  [88] = 1,
    ACTIONS(33), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_name,
  [94] = 1,
    ACTIONS(35), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_name,
  [100] = 1,
    ACTIONS(37), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_name,
  [106] = 1,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
  [110] = 1,
    ACTIONS(41), 1,
      sym_name,
  [114] = 1,
    ACTIONS(43), 1,
      sym_version,
  [118] = 1,
    ACTIONS(45), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 16,
  [SMALL_STATE(5)] = 27,
  [SMALL_STATE(6)] = 38,
  [SMALL_STATE(7)] = 60,
  [SMALL_STATE(8)] = 82,
  [SMALL_STATE(9)] = 88,
  [SMALL_STATE(10)] = 94,
  [SMALL_STATE(11)] = 100,
  [SMALL_STATE(12)] = 106,
  [SMALL_STATE(13)] = 110,
  [SMALL_STATE(14)] = 114,
  [SMALL_STATE(15)] = 118,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__package, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__package_expression, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__package, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extra, 3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(8),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, .production_id = 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__package_expression, 2, .production_id = 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_constraints, 2, .production_id = 4),
  [39] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
