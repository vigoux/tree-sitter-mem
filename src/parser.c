#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 49
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  anon_sym_PLUS = 1,
  anon_sym_COLON = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_AT = 5,
  aux_sym_attachement_token1 = 6,
  anon_sym_AMP = 7,
  anon_sym_TODO = 8,
  anon_sym_DOING = 9,
  anon_sym_DONE = 10,
  anon_sym_SCHEDULED_LPAREN = 11,
  anon_sym_RPAREN = 12,
  aux_sym_date_token1 = 13,
  anon_sym_DASH = 14,
  aux_sym_date_token2 = 15,
  sym__word = 16,
  sym_text = 17,
  sym_file = 18,
  sym_item = 19,
  sym_body = 20,
  sym_attachement = 21,
  sym_reference = 22,
  sym_status = 23,
  sym_date = 24,
  aux_sym_file_repeat1 = 25,
  aux_sym_body_repeat1 = 26,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_PLUS] = "+",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_AT] = "@",
  [aux_sym_attachement_token1] = "attachement_token1",
  [anon_sym_AMP] = "&",
  [anon_sym_TODO] = "TODO",
  [anon_sym_DOING] = "DOING",
  [anon_sym_DONE] = "DONE",
  [anon_sym_SCHEDULED_LPAREN] = "SCHEDULED(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_date_token1] = "date_token1",
  [anon_sym_DASH] = "-",
  [aux_sym_date_token2] = "date_token2",
  [sym__word] = "_word",
  [sym_text] = "text",
  [sym_file] = "file",
  [sym_item] = "item",
  [sym_body] = "body",
  [sym_attachement] = "attachement",
  [sym_reference] = "reference",
  [sym_status] = "status",
  [sym_date] = "date",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_attachement_token1] = aux_sym_attachement_token1,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_TODO] = anon_sym_TODO,
  [anon_sym_DOING] = anon_sym_DOING,
  [anon_sym_DONE] = anon_sym_DONE,
  [anon_sym_SCHEDULED_LPAREN] = anon_sym_SCHEDULED_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_date_token1] = aux_sym_date_token1,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_date_token2] = aux_sym_date_token2,
  [sym__word] = sym__word,
  [sym_text] = sym_text,
  [sym_file] = sym_file,
  [sym_item] = sym_item,
  [sym_body] = sym_body,
  [sym_attachement] = sym_attachement,
  [sym_reference] = sym_reference,
  [sym_status] = sym_status,
  [sym_date] = sym_date,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_attachement_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TODO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOING] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DONE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SCHEDULED_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_token2] = {
    .visible = false,
    .named = false,
  },
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym_item] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_attachement] = {
    .visible = true,
    .named = true,
  },
  [sym_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_status] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_day = 1,
  field_id = 2,
  field_month = 3,
  field_title = 4,
  field_year = 5,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_day] = "day",
  [field_id] = "id",
  [field_month] = "month",
  [field_title] = "title",
  [field_year] = "year",
};

static const TSFieldMapSlice ts_field_map_slices[5] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_id, 1},
    {field_title, 3},
  [2] =
    {field_id, 2},
    {field_title, 4},
  [4] =
    {field_month, 2},
    {field_year, 0},
  [6] =
    {field_day, 4},
    {field_month, 2},
    {field_year, 0},
};

static TSSymbol ts_alias_sequences[5][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(26);
      if (lookahead == '&') ADVANCE(45);
      if (lookahead == ')') ADVANCE(53);
      if (lookahead == '+') ADVANCE(27);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == '@') ADVANCE(31);
      if (lookahead == 'D') ADVANCE(37);
      if (lookahead == 'T') ADVANCE(38);
      if (lookahead == '{') ADVANCE(29);
      if (lookahead == '}') ADVANCE(30);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 1:
      if (lookahead == '&') ADVANCE(45);
      if (lookahead == '+') ADVANCE(27);
      if (lookahead == '@') ADVANCE(31);
      if (lookahead == '{') ADVANCE(29);
      if (lookahead == '}') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 2:
      if (lookahead == '&') ADVANCE(45);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == 'D') ADVANCE(17);
      if (lookahead == 'S') ADVANCE(5);
      if (lookahead == 'T') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(52);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 5:
      if (lookahead == 'C') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == 'D') ADVANCE(20);
      END_STATE();
    case 7:
      if (lookahead == 'D') ADVANCE(3);
      END_STATE();
    case 8:
      if (lookahead == 'D') ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == 'E') ADVANCE(50);
      END_STATE();
    case 10:
      if (lookahead == 'E') ADVANCE(6);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(7);
      END_STATE();
    case 12:
      if (lookahead == 'G') ADVANCE(48);
      END_STATE();
    case 13:
      if (lookahead == 'H') ADVANCE(10);
      END_STATE();
    case 14:
      if (lookahead == 'I') ADVANCE(16);
      if (lookahead == 'N') ADVANCE(9);
      END_STATE();
    case 15:
      if (lookahead == 'L') ADVANCE(11);
      END_STATE();
    case 16:
      if (lookahead == 'N') ADVANCE(12);
      END_STATE();
    case 17:
      if (lookahead == 'O') ADVANCE(14);
      END_STATE();
    case 18:
      if (lookahead == 'O') ADVANCE(8);
      END_STATE();
    case 19:
      if (lookahead == 'O') ADVANCE(46);
      END_STATE();
    case 20:
      if (lookahead == 'U') ADVANCE(15);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 25:
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      END_STATE();
    case 26:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_attachement_token1);
      if (lookahead == 'D') ADVANCE(39);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_attachement_token1);
      if (lookahead == 'E') ADVANCE(51);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_attachement_token1);
      if (lookahead == 'G') ADVANCE(49);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_attachement_token1);
      if (lookahead == 'I') ADVANCE(36);
      if (lookahead == 'N') ADVANCE(33);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_attachement_token1);
      if (lookahead == 'N') ADVANCE(34);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_attachement_token1);
      if (lookahead == 'O') ADVANCE(35);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_attachement_token1);
      if (lookahead == 'O') ADVANCE(32);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_attachement_token1);
      if (lookahead == 'O') ADVANCE(47);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_attachement_token1);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_attachement_token1);
      if (lookahead == '.' ||
          lookahead == '/' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_attachement_token1);
      if (lookahead == '.' ||
          lookahead == '/' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_attachement_token1);
      if (lookahead == '.' ||
          lookahead == '/' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_attachement_token1);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_TODO);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_TODO);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DOING);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DOING);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_DONE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DONE);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_SCHEDULED_LPAREN);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_date_token1);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_date_token2);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '+' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '+' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(59);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 25},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_attachement_token1] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_TODO] = ACTIONS(1),
    [anon_sym_DOING] = ACTIONS(1),
    [anon_sym_DONE] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_date_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_date_token2] = ACTIONS(1),
    [sym__word] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(48),
    [sym_item] = STATE(17),
    [aux_sym_file_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(7), 1,
      anon_sym_PLUS,
    ACTIONS(9), 1,
      anon_sym_RBRACE,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(13), 1,
      anon_sym_AMP,
    ACTIONS(15), 1,
      sym_text,
    STATE(5), 4,
      sym_item,
      sym_attachement,
      sym_reference,
      aux_sym_body_repeat1,
  [22] = 6,
    ACTIONS(7), 1,
      anon_sym_PLUS,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(13), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(19), 1,
      sym_text,
    STATE(6), 4,
      sym_item,
      sym_attachement,
      sym_reference,
      aux_sym_body_repeat1,
  [44] = 6,
    ACTIONS(7), 1,
      anon_sym_PLUS,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(13), 1,
      anon_sym_AMP,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    ACTIONS(23), 1,
      sym_text,
    STATE(3), 4,
      sym_item,
      sym_attachement,
      sym_reference,
      aux_sym_body_repeat1,
  [66] = 6,
    ACTIONS(7), 1,
      anon_sym_PLUS,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(13), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      sym_text,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    STATE(6), 4,
      sym_item,
      sym_attachement,
      sym_reference,
      aux_sym_body_repeat1,
  [88] = 6,
    ACTIONS(27), 1,
      anon_sym_PLUS,
    ACTIONS(30), 1,
      anon_sym_RBRACE,
    ACTIONS(32), 1,
      anon_sym_AT,
    ACTIONS(35), 1,
      anon_sym_AMP,
    ACTIONS(38), 1,
      sym_text,
    STATE(6), 4,
      sym_item,
      sym_attachement,
      sym_reference,
      aux_sym_body_repeat1,
  [110] = 4,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      sym_text,
    STATE(14), 1,
      sym_body,
    ACTIONS(41), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [126] = 5,
    ACTIONS(47), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_SCHEDULED_LPAREN,
    STATE(27), 1,
      sym_status,
    STATE(43), 1,
      sym_reference,
    ACTIONS(49), 3,
      anon_sym_TODO,
      anon_sym_DOING,
      anon_sym_DONE,
  [144] = 5,
    ACTIONS(47), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_SCHEDULED_LPAREN,
    STATE(26), 1,
      sym_status,
    STATE(45), 1,
      sym_reference,
    ACTIONS(49), 3,
      anon_sym_TODO,
      anon_sym_DOING,
      anon_sym_DONE,
  [162] = 4,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      sym_text,
    STATE(13), 1,
      sym_body,
    ACTIONS(53), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [178] = 2,
    ACTIONS(59), 1,
      sym_text,
    ACTIONS(57), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [188] = 2,
    ACTIONS(63), 1,
      sym_text,
    ACTIONS(61), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [198] = 2,
    ACTIONS(67), 1,
      sym_text,
    ACTIONS(65), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [208] = 2,
    ACTIONS(71), 1,
      sym_text,
    ACTIONS(69), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [218] = 2,
    ACTIONS(75), 1,
      sym_text,
    ACTIONS(73), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [228] = 2,
    ACTIONS(79), 1,
      sym_text,
    ACTIONS(77), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [238] = 3,
    ACTIONS(5), 1,
      anon_sym_PLUS,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    STATE(18), 2,
      sym_item,
      aux_sym_file_repeat1,
  [249] = 3,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 1,
      anon_sym_PLUS,
    STATE(18), 2,
      sym_item,
      aux_sym_file_repeat1,
  [260] = 3,
    ACTIONS(88), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_body,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [271] = 3,
    ACTIONS(88), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_body,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [282] = 2,
    STATE(36), 1,
      sym_date,
    ACTIONS(90), 2,
      aux_sym_date_token1,
      anon_sym_DASH,
  [290] = 2,
    ACTIONS(92), 1,
      anon_sym_RPAREN,
    ACTIONS(94), 1,
      aux_sym_date_token2,
  [297] = 1,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [302] = 1,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [307] = 1,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [312] = 2,
    ACTIONS(47), 1,
      anon_sym_AMP,
    STATE(46), 1,
      sym_reference,
  [319] = 2,
    ACTIONS(47), 1,
      anon_sym_AMP,
    STATE(34), 1,
      sym_reference,
  [326] = 1,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [331] = 1,
    ACTIONS(96), 1,
      sym_text,
  [335] = 1,
    ACTIONS(98), 1,
      anon_sym_RPAREN,
  [339] = 1,
    ACTIONS(100), 1,
      sym_text,
  [343] = 1,
    ACTIONS(102), 1,
      anon_sym_AMP,
  [347] = 1,
    ACTIONS(104), 1,
      aux_sym_date_token2,
  [351] = 1,
    ACTIONS(106), 1,
      anon_sym_COLON,
  [355] = 1,
    ACTIONS(108), 1,
      anon_sym_DASH,
  [359] = 1,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
  [363] = 1,
    ACTIONS(112), 1,
      anon_sym_DASH,
  [367] = 1,
    ACTIONS(59), 1,
      anon_sym_COLON,
  [371] = 1,
    ACTIONS(114), 1,
      aux_sym_attachement_token1,
  [375] = 1,
    ACTIONS(116), 1,
      sym__word,
  [379] = 1,
    ACTIONS(118), 1,
      sym_text,
  [383] = 1,
    ACTIONS(120), 1,
      sym_text,
  [387] = 1,
    ACTIONS(122), 1,
      anon_sym_COLON,
  [391] = 1,
    ACTIONS(124), 1,
      anon_sym_AMP,
  [395] = 1,
    ACTIONS(126), 1,
      anon_sym_COLON,
  [399] = 1,
    ACTIONS(128), 1,
      anon_sym_COLON,
  [403] = 1,
    ACTIONS(130), 1,
      sym__word,
  [407] = 1,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 66,
  [SMALL_STATE(6)] = 88,
  [SMALL_STATE(7)] = 110,
  [SMALL_STATE(8)] = 126,
  [SMALL_STATE(9)] = 144,
  [SMALL_STATE(10)] = 162,
  [SMALL_STATE(11)] = 178,
  [SMALL_STATE(12)] = 188,
  [SMALL_STATE(13)] = 198,
  [SMALL_STATE(14)] = 208,
  [SMALL_STATE(15)] = 218,
  [SMALL_STATE(16)] = 228,
  [SMALL_STATE(17)] = 238,
  [SMALL_STATE(18)] = 249,
  [SMALL_STATE(19)] = 260,
  [SMALL_STATE(20)] = 271,
  [SMALL_STATE(21)] = 282,
  [SMALL_STATE(22)] = 290,
  [SMALL_STATE(23)] = 297,
  [SMALL_STATE(24)] = 302,
  [SMALL_STATE(25)] = 307,
  [SMALL_STATE(26)] = 312,
  [SMALL_STATE(27)] = 319,
  [SMALL_STATE(28)] = 326,
  [SMALL_STATE(29)] = 331,
  [SMALL_STATE(30)] = 335,
  [SMALL_STATE(31)] = 339,
  [SMALL_STATE(32)] = 343,
  [SMALL_STATE(33)] = 347,
  [SMALL_STATE(34)] = 351,
  [SMALL_STATE(35)] = 355,
  [SMALL_STATE(36)] = 359,
  [SMALL_STATE(37)] = 363,
  [SMALL_STATE(38)] = 367,
  [SMALL_STATE(39)] = 371,
  [SMALL_STATE(40)] = 375,
  [SMALL_STATE(41)] = 379,
  [SMALL_STATE(42)] = 383,
  [SMALL_STATE(43)] = 387,
  [SMALL_STATE(44)] = 391,
  [SMALL_STATE(45)] = 395,
  [SMALL_STATE(46)] = 399,
  [SMALL_STATE(47)] = 403,
  [SMALL_STATE(48)] = 407,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(9),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(39),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(40),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(6),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 5, .production_id = 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 5, .production_id = 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 4, .production_id = 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 4, .production_id = 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 5, .production_id = 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 5, .production_id = 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 6, .production_id = 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 6, .production_id = 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attachement, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attachement, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(8),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 4, .production_id = 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 5, .production_id = 4),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [132] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_mem(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
