#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

# include "define.hpp"

class ScalarConverter {
  
public:

  ScalarConverter();
  ScalarConverter(const ScalarConverter &);
  ScalarConverter &operator=(const ScalarConverter &);
  ~ScalarConverter() = 0;

 static void *convert(std::string const &); 
};


int         defineType(std::string &);
bool        isInt(std::string &);
bool        isChar(std::string &);
bool        isDouble(std::string &);
bool        isFloat(std::string &);


#endif // !SCALAR_CONVERTER_HPP
