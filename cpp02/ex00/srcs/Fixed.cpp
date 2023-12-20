#include "define.hpp"

Fixed() {
  
  std::cout << RED << "Default constructor called" << RESET << std::endl;
  return ;
}

Fixed(const Fixed&) {

  std::cout << RED << "Copy constructor called" << RESET << std::endl;
  return ;
}

Fixed& operator=(const Fixed& cpy) {

  if (this != cpy) {

  }
  return *this;
}
