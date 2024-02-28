#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

# include "define.hpp"

class ScalarConverter {
  
public:

  ScalarConverter();
  ~ScalarConverter() = 0;

 static void *convert(std::string const &); 
};




#endif // !SCALAR_CONVERTER_HPP
