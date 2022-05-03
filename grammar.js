module.exports = grammar({
  name: 'requirements',

  rules: {
    requirements: $ => repeat($._expression),

    _expression: $ => choice(
      $.comment,
      $.package_spec,
    ),

    _version_specifier_clause: $ => seq($.version_specifier, repeat(seq(',', $.version_specifier))),
    version_specifier: $ => seq($._version_cmp, $.version),
    _package_spec: $ => seq($.name, optional($._extras)),
    _extras: $ => seq('[', alias($.name, $.extra), repeat(seq(',', alias($.name, $.extra))), ']'),
    package_spec: $ => prec.left(seq($._package_spec, optional($._version_specifier_clause), optional(seq(';', $.marker_expr)),optional($.comment))),


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
  

    env_var: _ => choice(
      'os_name',
      'sys_platform',
      'platform_machine',
      'platform_python_implementation',
      'platform_release',
      'platform_version',
      'python_version',
      'python_full_version',
      'implementation_name',
      'implementation_version',
      'extra',
    ),

    marker_op: $ => choice($._version_cmp, 'in', seq('not', /\s+/, 'in')),
    marker_var: $ => choice($.env_var, $.str),
    marker_expr: $ => seq($.marker_var, $.marker_op, $.marker_var),

    name: _ => /[A-Za-z0-9][A-Za-z0-9\.\-_]*[A-Za-z0-9]/,
    str: _ => /(\'[^\']*\'|\"[^\"]*\")/,

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
