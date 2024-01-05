#include "define.hpp"

Point::Point(void) {

  std::cout << CYAN << "Default constructor called" << RESET << std::endl;
}

Point::Point(const float x, const float y) : _x(x), _y(y) {

  std::cout << CYAN << "float constructor called" << RESET << std::endl;
  return ;
}

Point::Point(const Fixed x, const Fixed y) : _x(x), _y(y) {

  std::cout << CYAN << "Fixed constructor called" << RESET << std::endl;
  return ;
}

Point::Point(const Point& src) : _x(src._x), _y(src._y) {

  return ;
}

Point & Point::operator=(const Point& rhs) {

  if (this != &rhs)
    *this = Point(rhs._x, rhs._y);

  return (*this);
}

Point::~Point(void) {

  std::cout << CYAN << "Default Point destructor called" << RESET << std::endl;
}

//_____________________________________getter and setter/

const Fixed&  Point::getX(void) {

  return (*this->_x);
}

const Fixed&  Point::getY(void) {

  return (*this->_y);
}



//_____________________________________ friend Function /

std::ostream& operator<<(std::ostream& out, const Point& pt) {

  out << "Display Point" << std::endl;
  out << pt._x.toFloat();
  out << pt._y.toFloat();
  return (out);
}
