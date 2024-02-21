#include "define.hpp"

int main(void) {

  Bureaucrat A("The Boss", 1);
  std::cout << A;

  Bureaucrat B("The Wanna be more than Boss", 58);
  std::cout << B;
  B.incGrade(59);
  std::cout << B;
  std::cout << "For his audacity The Wanna be more than Boss is punished" << std::endl;
  B.decGrade(92);
  std::cout << B;
  std::cout << "Can we be a little bit more saddistic?" << std::endl;
  B.decGrade(1);
  std::cout << "No because cruelty is not part of the company values: " << B << std::endl;

  return (0);
} 
