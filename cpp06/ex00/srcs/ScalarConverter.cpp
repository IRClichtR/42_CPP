#include "define.hpp"

void ScalarConverter::convert(std::string const &inputStr) {

  int type = defineType(literal);
  double a;
  int precision;
  std::string literal = inputStr;

  switch (type) {

    case CHAR: 
      a = literal[0];
      precision = 1;
      break ;

    case INT:
      a = atof(literal);
      precision = getPrecision(literal);
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
      return ;
  }
  displayChar(a, literal);
  displayInt(a, literal);
  displayFloat(a, precision);
  displayDouble(a, precision);

}


