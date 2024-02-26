#include "define.hpp"

void *ScalarConverter::convert(std::string& literal)
{
  int type = defineType(literal);
  switch (type)
  {
    case CHAR:
      break ;
    case INT:
      int *result = 
      break ;
    case FLOAT:
    case DOUBLE:
    default:
    std::cerr << literal << RED << "Error: Unknown type!" << RESET << std::endl;
  }
  
  else 
}

int defineType(std::string &literal)
{
  int type;

  if (isInt(literal))
    type = INT;
  else if (isDouble(literal))
    type = DOUBLE;
  else if (isFloat(literal))
    type = FLOAT;
  else if (isChar(literal))
    type =  CHAR;
  else 
    return (-1);
  }
}
