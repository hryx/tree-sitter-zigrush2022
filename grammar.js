module.exports = grammar({
  name: "zigrush2022",

	externals: ($) => [$._string_content],

  rules: {
    source_file: ($) => repeat($._expression),
		_expression: ($) => choice($.word, $.number, $.string),
		word: () => /[A-Za-z_][A-Za-z0-9_]*/,
		number: () => /-?[0-9]+(\.[0-9]*)?/,
    string: ($) => seq('"', $._string_content, '"')
  }
});
