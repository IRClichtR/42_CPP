#include "define.hpp"

void ScalarConverter::convert(std::string const &inputStr, char *rawArg) {

  std::string literal = inputStr;
  int type = defineType(literal);
  double a;
  int precision;

  switch (type) {

    case CHAR: 
      a = literal[0];
      precision = 1;
      break ;

    case INT:
      a = atof(rawArg);
      precision = getPrecision(literal);
      break ;

    case FLOAT:
      a = atof(rawArg);
      precision = getPrecision(literal);
      break ;

    case DOUBLE:
      a = atof(rawArg);
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


