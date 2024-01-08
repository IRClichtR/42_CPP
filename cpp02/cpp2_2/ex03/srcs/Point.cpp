#include "define.hpp"

Point::Point(void) {

  // std::cout << CYAN << "Default constructor called" << RESET << std::endl;
}

Point::Point(const float x, const float y) : _x(x), _y(y) {

  // std::cout << CYAN << "float constructor called" << RESET << std::endl;
  return ;
}

Point::Point(const Fixed x, const Fixed y) : _x(x), _y(y) {

  // std::cout << CYAN << "Fixed constructor called" << RESET << std::endl;
  return ;
}

Point::Point(const Point& src) : _x(src._x), _y(src._y) {

  return ;
}

Point & Point::operator=(const Point& rhs) {

  if (this != &rhs) {
    // this->_x = rhs._x;
    // this->_y = rhs._y;
    *this = Point(rhs._x, rhs._y);
  }

  return (*this);
}

Point::~Point(void) {

  // std::cout << CYAN << "Default Point destructor called" << RESET << std::endl;
}

//_____________________________________getter and setter/

const Fixed  Point::getX(void) const {

  return (this->_x);
}

const Fixed  Point::getY(void) const{

  return (this->_y);
}



//_____________________________________ friend Function /

std::ostream& operator<<(std::ostream& out, const Point& pt) {

  // out << "Display Point" << std::endl;
  out << pt.getX();
  out << " | ";
  out << pt.getY();
  return (out);
}
