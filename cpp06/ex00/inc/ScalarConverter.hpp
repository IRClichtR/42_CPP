#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

# include "define.hpp"

class ScalarConverter {
  
public:

  ScalarConverter();
  virtual ~ScalarConverter() = 0;

 static void convert(std::string const &, char *); 
};




#endif // !SCALAR_CONVERTER_HPP
