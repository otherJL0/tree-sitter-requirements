module.exports = grammar({
  name: 'requirements',

  rules: {
    requirements: $ => repeat($._expression),

    _expression: $ => choice(
      $.version,
      $._version_specifier_clause,
    ),

    _version_specifier_clause: $ => seq($.version_specifier, repeat(seq(',', $.version_specifier))),
    version_specifier: $ => seq($._version_cmp, $.version),
    package_name: $ => seq($.name, optional($.extras)),
    extras: $ => seq('[', $.name, repeat(seq(',', $.name)), ']'),
    name_req: $ => seq($.package_name, optional($._version_specifier_clause)),


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

    name: _ => /[A-Za-z\d][\w\.\-]*[A-Z\d]/,

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
