#include "define.hpp"

int defineType(std::string& literal) {

  if (!isdigit(literal[0]) && literal.size() == 1)
    return (CHAR);
  else if (literal.size() > 1 && literal[1] != 1 && !isdigit(literal[1]) && notNumberOrFloat(literal && notInf(literal))
      return (0);
  else {
    for (unsigned int i = 0; i < literal.size(); i++) {
      if (literal[1] == '.') {
        if (literal[literal.size() - 1] == 'f')
          return (2);
        return (3);
      }
    }
      return (4);
  }
}

bool notNumberOrFloat(std::string& literal) {
  
  std::string tab[2] = {"nan","nanf"};

  for (int i = 0 ; i < tab.length() ; i++)
    if (literal == tab[i])
      return (true);
  return (false);
}

bool notInf(std::string& literal) {
  
  std::string tab[6] = {"inf","inff","-inf", "-inff", "+inf","+inff"};

  for (int i = 0 ; i < tab.length() ; i++)
    if (literal == tab[i])
      return (true);
  return (false);
}

int getPrecision(literal) {

  std::size_t position = literal.find(".");
  int precision = literal.size() - position - 1;
  if (literal[literal.size() - 1] == 'f')
    precision--;

  return (precision);
}

void  displayChar(double value, std::string& literal) {

  if (value < 0 || value >255 || notNumberOrFloat(literal))
    std::cout << RED << "char: impossible cast" << RESET << std::endl;
  else {
    char c = static_cast<char>(value);
    if (!is_print(c)) 
      std::cout << RED << "char: not displayable" << RESET << std::endl;
    else 
      std::cout << "char: '" << c << "'" << std::endl;
  }
}

void  displayInt(double value,std::string& literal) {

  if (value > 2147483647 || value < -2147483648 || notNumberOrFloat(literal))
    std::cout << RED << "int: impossible cast" << RESET << std::endl;
  else {

    int i = static_cast<int>(value);
    std::cout << "int: '" << i << "'" << std::endl;
  }
}

void displayFloat(double value, int precision) {
  
  float f = static_cast<float>(value);
  std::cout << "float: '" << std::fixed << std::setprecision(precision) << f << "f'" << std::endl;
}

void displayDouble(double value, int precision) {
  
  std::cout << "double: '" << std::fixed << std::setprecision(precision) << value << std::endl;
}
