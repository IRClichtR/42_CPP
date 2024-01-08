#include "define.hpp"

int main(void) {

  Point A(1, 0);
  Point B(0, 1);
  Point C(1, 1);

  std::cout << BLUE << "test point inside triangle" << RESET << std::endl;
  Point p1(0.5, 0.5);
  std::cout << (bsp(A, B, C, p1) ? "IN" : "OUT") << std::endl;
  std::cout << BLUE << "test point outside triangle" << RESET << std::endl;
  Point p2(1.5, 1);
  std::cout << (bsp(A, B, C, p2) ? "IN" : "OUT") << std::endl;

  return (0);
}
