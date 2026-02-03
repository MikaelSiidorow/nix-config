/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "po",

  // Newlines in extras: they don't create tree nodes, so mergiraf's tree
  // diffing operates on a compact tree of just messages and their parts.
  extras: (_$) => [/[ \t]/, /\r?\n/],

  rules: {
    source_file: ($) =>
      repeat(choice($.message, $.obsolete_comment)),

    message: ($) =>
      seq(
        repeat($.comment),
        optional($.msgctxt),
        $.msgid,
        optional($.msgid_plural),
        choice($.msgstr, repeat1($.msgstr_plural)),
      ),

    comment: ($) =>
      choice(
        $.translator_comment,
        $.extracted_comment,
        $.reference_comment,
        $.flag_comment,
        $.previous_comment,
      ),

    // Each comment type is a single token (including its trailing newline)
    // so the lexer handles them atomically. The newline inside token() is
    // matched literally (extras don't apply inside token()).
    translator_comment: (_$) =>
      token(seq("#", optional(seq(" ", /[^\n]*/)), /\r?\n/)),
    extracted_comment: (_$) =>
      token(seq("#.", optional(seq(" ", /[^\n]*/)), /\r?\n/)),
    reference_comment: (_$) =>
      token(seq("#:", optional(seq(" ", /[^\n]*/)), /\r?\n/)),
    flag_comment: (_$) =>
      token(seq("#,", optional(seq(" ", /[^\n]*/)), /\r?\n/)),
    previous_comment: (_$) =>
      token(seq("#|", optional(seq(" ", /[^\n]*/)), /\r?\n/)),
    obsolete_comment: (_$) =>
      token(seq("#~", optional(seq(" ", /[^\n]*/)), /\r?\n/)),

    // Keyword blocks: the keyword followed by one or more strings.
    // Newlines between continuation strings are consumed by extras.
    msgctxt: ($) => seq("msgctxt", repeat1($.string)),
    msgid: ($) => seq("msgid", repeat1($.string)),
    msgid_plural: ($) => seq("msgid_plural", repeat1($.string)),
    msgstr: ($) => seq("msgstr", repeat1($.string)),
    msgstr_plural: ($) =>
      seq("msgstr[", /[0-9]+/, "]", repeat1($.string)),

    // A string is a single token — no child nodes, minimal tree overhead.
    string: (_$) =>
      token(
        seq(
          '"',
          repeat(
            choice(
              /\\[\\'"abtnvfr]/,
              /\\[0-7]{1,3}/,
              /\\x[0-9a-fA-F]{2}/,
              /[^\\"\n]+/,
            ),
          ),
          '"',
        ),
      ),
  },
});
