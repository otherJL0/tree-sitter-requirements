module.exports = grammar({
  name: 'requirements',

  rules: {
    requirements: $ => repeat($._expression),

    _expression: $ => choice($.version),

    _version_specifier_clause: $ => seq($._version_cmp, $.version),


    comment: _ => token(seq('#', /.*/)),

    _version_cmp: _ => choice(
      '~=', // Compatible release
      '==', // Version matching
      '!=', // Version exclusion
      '<=', // Inclusive ordered comparison
      '>=', // Inclusive ordered comparison
      '<', // Exclusive ordered comparison
      '>', // Exclusive ordered comparison
      '===', // Arbitrary equality
    ),

    _pre_release: _ => /\.\d+(a|b|rc)\d+/,
    _post_release: _ => /\.post\d+/,
    _developmental_release: _ => /\.dev\d+/,
    _local_version: _ => /\.\d+\+[\d\w]+/,
    version: $ => seq(
      /\d+/,
      repeat(/\.\d+/),
      optional(choice(
        seq(optional($._pre_release), optional($._post_release), optional($._developmental_release)),
        seq($._local_version, repeat(/\.\d+/))
      )),
      optional(/\.\*/),
    ),

  }
});
