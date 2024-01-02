#include "define.hpp"

// const declaration of bits

const int Fixed::_bits(8);

// Canonical form constructors and destructors___/

Fixed::Fixed(void) {
  
  this->_value = 0;

  std::cout << RED << "Default constructor called" << RESET << std::endl;

  return ;
}

Fixed::Fixed(const Fixed& src) {

  std::cout << RED << "Copy constructor called" << RESET << std::endl;

  this->_value = src.getRawBits();

  return ;
}

Fixed & Fixed::operator=(const Fixed& rhs) {

  std::cout << RED << "Copy assignment operator called" << RESET << std::endl;

  if (this != &rhs)
    this->_value = rhs.getRawBits();

  return (*this);
}

Fixed::~Fixed() {

  std::cout << RED << "Destructor called" << RESET << std::endl;
}


// Member Functions___/

int Fixed::getRawBits(void) const {

  std::cout << "getRawBits member function called" << std::endl;

  return (this->_value);
  
}

void  Fixed::setRawBits(int const bit) {

  std::cout << "setRawBits member function called" << std::endl;

  this->_value = bit;

}
