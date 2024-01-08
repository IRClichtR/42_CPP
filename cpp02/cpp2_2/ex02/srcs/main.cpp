#include "define.hpp"

int main( void ) {

  Fixed a;
  Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

  std::cout << a << std::endl;
  std::cout << ++a << std::endl;
  std::cout << a << std::endl;
  std::cout << a++ << std::endl;
  std::cout << a << std::endl;
  std::cout << b << std::endl;
  std::cout << Fixed::max( a, b ) << std::endl;

  std::cout << BLUE << "[test of comparaison operators d=12 and c=3]" << RESET << std::endl;
  Fixed d(12);
  Fixed c(3);

  std::cout << BLUE << "(d < c)" << RESET << std::endl;
  // Fixed d(12);
  std::cout <<(d < c)<< std::endl;
  std::cout << BLUE << "(d > c)" << RESET << std::endl;
  std::cout <<(d > c)<< std::endl;
  std::cout << BLUE << "(d <= c)" << RESET << std::endl;
  std::cout <<(d <= c)<< std::endl;
  std::cout << BLUE << "(d >= c)" << RESET << std::endl;
  std::cout <<(d >= c)<< std::endl;
  std::cout << BLUE << "(d == c)" << RESET << std::endl;
  std::cout <<(d == c)<< std::endl;
  std::cout << BLUE << "(d != c)" << RESET << std::endl;
  std::cout <<(d != c)<< std::endl;
  std::cout << BLUE << "d == 12 and c==12" << std::endl;
  std::cout << "(d == c)" << RESET << std::endl;
  std::cout <<(d == c)<< std::endl;
  std::cout << BLUE << "(d != c)" << RESET << std::endl;
  std::cout <<(d != c)<< std::endl;

  std::cout << BLUE << "[test of arithmetic operators d=12 and c=3]" << RESET << std::endl;
  std::cout << BLUE << "(d + c)" << RESET << std::endl;
  std::cout <<(d + c)<< std::endl;
  std::cout << BLUE << "(d - c)" << RESET << std::endl;
  std::cout <<(d - c)<< std::endl;
  std::cout << BLUE << "(d * c)" << RESET << std::endl;
  std::cout <<(d * c)<< std::endl;
  std::cout << BLUE << "(d / c)" << RESET << std::endl;
  std::cout <<(d / c)<< std::endl;


  return (0);
}
