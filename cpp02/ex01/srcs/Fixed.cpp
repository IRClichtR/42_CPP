#include "define.hpp"

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
// Other constructors_______/

Fixed::Fixed(const int nb) {

  this->_value = nb << this->_bits;
  std::cout << BLUE << "Int constructor called" << RESET << std::endl;
}

Fixed::Fixed(const float fl) : _value(roundf(fl * (1 << _bits))) {

  std::cout << BLUE << "Float constructor called" << RESET << std::endl;
}

// Destructor_______________/
//
Fixed::~Fixed() {

  std::cout << RED << "Destructor called" << RESET << std::endl;
}


// Member Functions___/

int Fixed::toInt(void) const {

  return (_value >> _bits);
}

float Fixed::toFloat(void) const {

  return (float(_value) / float(1 << _bits));
}

int Fixed::getRawBits(void) const {

  std::cout << "getRawBits member function called" << std::endl;

  return (this->_value);
  
}

void  Fixed::setRawBits(int const bit) {

  std::cout << "setRawBits member function called" << std::endl;

  this->_value = bit;

}

std::ostream  &operator<<(std::ostream& out, const Fixed& fixed) {

  out << fixed.toFloat();
  return (out);
}
