/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "po",

  extras: (_$) => [/[ \t]/],

  conflicts: ($) => [[$.source_file, $.message]],

  rules: {
    source_file: ($) => repeat(choice($.message, $.comment, $._newline)),

    _newline: (_$) => /\r?\n/,

    // Each keyword block handles its own continuation strings and trailing newline.
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
        $.obsolete_comment,
        $.translator_comment,
        $.extracted_comment,
        $.reference_comment,
        $.flag_comment,
        $.previous_comment,
      ),

    translator_comment: ($) =>
      seq("#", optional(seq(" ", /[^.,:|~\n][^\n]*/)), $._newline),
    extracted_comment: ($) =>
      seq("#.", optional(seq(" ", /[^\n]*/)), $._newline),
    reference_comment: ($) =>
      seq("#:", optional(seq(" ", /[^\n]*/)), $._newline),
    flag_comment: ($) =>
      seq("#,", optional(seq(" ", /[^\n]*/)), $._newline),
    previous_comment: ($) =>
      seq("#|", optional(seq(" ", /[^\n]*/)), $._newline),
    obsolete_comment: ($) =>
      seq("#~", optional(seq(" ", /[^\n]*/)), $._newline),

    msgctxt: ($) => seq("msgctxt", $._string_line, repeat($._continuation_line)),
    msgid: ($) => seq("msgid", $._string_line, repeat($._continuation_line)),
    msgid_plural: ($) => seq("msgid_plural", $._string_line, repeat($._continuation_line)),
    msgstr: ($) => seq("msgstr", $._string_line, repeat($._continuation_line)),
    msgstr_plural: ($) =>
      seq("msgstr[", /[0-9]+/, "]", $._string_line, repeat($._continuation_line)),

    // A string followed by a newline
    _string_line: ($) => seq($.string, $._newline),

    // A continuation line: a string at the start of a line (after optional whitespace) followed by newline
    _continuation_line: ($) => seq($.string, $._newline),

    string: (_$) =>
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
  },
});
