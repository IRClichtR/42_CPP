#include "define.hpp"

//______________________________________ Canonical form /

Fixed::Fixed(void) {

  std::cout << RED << "Default constructor called" << RESET << std::endl;

  this->_fvalue = 0;
  return ;
}

Fixed::Fixed(const Fixed& other) {

  std::cout << RED << "Copy constructor called" << RESET << std::endl;

  this->_fvalue = other.getRawBits();
  return ;
}

Fixed&  Fixed::operator=(const Fixed& rhs) {

  std::cout << RED << "Copy assignment operator called" << RESET << std::endl;

  if (this != &rhs) {
    this->_fvalue = rhs.getRawBits();
  }

  return (*this);
}

Fixed::~Fixed(void) {

  std::cout << RED << "Destructor called" << RESET << std::endl;
}

//______________________________________ Other constructors /

Fixed::Fixed(const int nbr) : _fvalue(nbr << this->_bits) {

  std::cout << BLUE << "Int constructor called" << RESET << std::endl;
  return ;
}

Fixed::Fixed(const float nbr) : _fvalue(roundf(nbr * (1 << this->_bits))) {

  return ;
}

//______________________________________ Public functions /

int Fixed::getRawBits(void) const {

  std::cout << "getRawBits member function called" << std::endl;

  return (this->_fvalue);
}

void  Fixed::setRawBits(int const raw) {

  std::cout << "setRawBits member function called" << std::endl;

  this->_fvalue = raw;

  return ;
}

//______________________________________ Conversion functions / 

float Fixed::toFloat(void) const {

  return (float(this->_fvalue) / float(1 << this->_bits));
}

int Fixed::toInt(void) const {

  return (this->_fvalue >> this->_bits);
}


//______________________________________ Friend functions /

std::ostream&  operator<<(std::ostream& out, const Fixed& fNb) {

  out << fNb.toFloat();
  return (out);
}
