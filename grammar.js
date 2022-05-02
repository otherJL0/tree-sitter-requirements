module.exports = grammar({
  name: 'requirements',

  rules: {
    source_file: $ => repeat($._expression),

    _expression: $ => choice(
      $._package_expression,
      $.comment,
    ),

    _package_expression: $ => prec.left(seq($._package, optional($._version_constraints), optional($.comment))),
    _package: $ => seq($.name, optional($.extra)),
    extra: $ => seq('[', $.name, ']'),

    _version_constraints: $ => seq(
      field('operators', choice('==', '!=', '>=', '<=', '~=')),
      $.version
    ),

    comment: _ => token(seq('#', /.*/)),

    name: _ => /[A-Za-z]+[A-Za-z-_\d]+/,
    extras: _ => /\[.+\]/,
    version: _ => /\d+\.\d+(\.\d[A-Za-z]*\d*)?/,

  }
});
