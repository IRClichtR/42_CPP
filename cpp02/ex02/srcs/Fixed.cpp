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

Fixed::~Fixed() {

  std::cout << RED << "Destructor called" << RESET << std::endl;
}


//____________________________________________________Conversion functions/

int Fixed::toInt(void) const {

  return (_value >> _bits);
}

float Fixed::toFloat(void) const {

  return (float(_value) / float(1 << _bits));
}


//______________________________________________________Getter and Setter/

int Fixed::getRawBits(void) const {

  std::cout << "getRawBits member function called" << std::endl;

  return (this->_value);
  
}

void  Fixed::setRawBits(int const bit) {

  std::cout << "setRawBits member function called" << std::endl;

  this->_value = bit;

}

//______________________________________________________Min and max functs/

Fixed&  Fixed::min(Fixed& a, Fixed& b) {

  if (a.toFloat() > b.toFloat())
    return b;
  return a;
}

const Fixed&  Fixed::min(const Fixed& a, const Fixed& b) {

  if (a.toFloat() > b.toFloat())
    return b;
  return a;
}

Fixed&  Fixed::max(Fixed& a, Fixed& b) {

  if (a.toFloat() > b.toFloat())
    return a;
  return b;
}

const Fixed&  Fixed::max(const Fixed& a, const Fixed& b) {

  if (a.toFloat() > b.toFloat())
    return a;
  return b;
}

//______________________________________________________Operator Overloads/

std::ostream  &operator<<(std::ostream& out, const Fixed& fixed) {

  out << fixed.toFloat();
  return (out);
}

//____________________________________________________Arithmetic operators/

// Fixed&  Fixed::operator=(const Fixed& other) {
//
//   if (this != other)
//     this->_value = other.getRawBits();
//
//   return (*this);
// }
//
Fixed&  Fixed::operator+(const Fixed& other) {

  Fixed res = Fixed(this->toFloat() + other.toFloat());
  this->_value = res.getRawBits();

  return (*this);
}

Fixed&  Fixed::operator-(const Fixed& other) {

  Fixed res = Fixed(this->toFloat() - other.toFloat());
  this->_value = res.getRawBits();

  return (*this);
}

Fixed&  Fixed::operator*(const Fixed& other) {

  Fixed res = Fixed(this->toFloat() * other.toFloat());
  this->_value = res.getRawBits();

  return (*this);
}

Fixed&  Fixed::operator/(const Fixed& other) {

  Fixed res = Fixed(this->toFloat() / other.toFloat());
  this->_value = res.getRawBits();

  return (*this);
}

//______________________________________________________Increment Decremts/

Fixed&  Fixed::operator++(void) {

  this->_value += 1;
  return (*this);
}

Fixed&  Fixed::operator--(void) {

  this->_value -= 1;
  return (*this);
}

Fixed  Fixed::operator++(int) {

  Fixed res = *this;
  
  (this->_value) +=1;
  return (res);
}

Fixed  Fixed::operator--(int) {

  Fixed res = *this;
  
  (this->_value) -=1;
  return (res);
}

//______________________________________________________Compare operators/

bool  Fixed::operator==(const Fixed &other) {

  return (this->_value == other.getRawBits());
}

bool  Fixed::operator!=(const Fixed &other) {

  return (this->_value != other.getRawBits());
}

bool  Fixed::operator>=(const Fixed &other) {

  return (this->_value >= other.getRawBits());
}

bool  Fixed::operator<=(const Fixed &other) {

  return (this->_value <= other.getRawBits());
}

bool  Fixed::operator<(const Fixed &other) {

  return (this->_value < other.getRawBits());
}

bool  Fixed::operator>(const Fixed &other) {

  return (this->_value > other.getRawBits());
}
