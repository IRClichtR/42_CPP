#include "define.hpp"

void ScalarConverter::convert(std::string const &literal) {

  int type = defineType();
  double a;
  int precision;

  switch (type) {

    case CHAR: 
      a = literal[0];
      precision = 1;
      break ;

    case INT:
      a = atof(literal);
      prec = getPrecision(literal);
      break ;

    case FLOAT:
      a = atof(literal);
      precision = getPrecision(literal);
      break ;

    case DOUBLE:
      a = atof(literal);
      precision = getPrecision(literal);
      break ;

    default:
      isImpossible();
  }
  displayChar(a, literal);
  displayInt(a, literal);
  displayFloat(a, precision);
  displayDouble(a, precision);

}


