#include <iostream>
#include "define.hpp"

int main( void ) {

  Point::Point a(0.34, 0.1);
  Point::Point b(4,98, 0.1);
  Point::Point c(2.45, 4.45);
  Point::Point point(2.0, 2.0);
  
  if (bsp(a, b, c, point)) {
    std::cout << GREEN << "Point is inside triangle" << RESET << std::endl;
  }
  else {
    std::cout << RED << "Point is outside triangle" << RESET << std::endl;
  }

  return (0);
}
