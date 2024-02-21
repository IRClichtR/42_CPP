#include "define.hpp"

int main(void) {

  std::string name1 = "God of the Bureaucrats";

  std::cout << "Trying to create the God of the Bureaucrats: " << name1 << "grade = 0" << std::endl;
  try {

    Bureaucrat God(name1, 0);
    std::cout << God;
  }
  catch (const std::exception& e) {
    std::cerr << name1 << ": " << RED << e.what() << RESET << std::endl;
  }















  // Bureaucrat Peasant("Simple Peasant", 151);
  //
  // Bureaucrat A("The Boss", 1);
  // std::cout << A;
  //
  // Bureaucrat B("Wanna be God", 58);
  // std::cout << B;
  // B.incGrade(59);
  // std::cout << B;
  // std::cout << "For his audacity The Wanna be God is punished" << std::endl;
  // B.decGrade(92);
  // std::cout << B;
  // std::cout << "Can we be a little bit more saddistic?" << std::endl;
  // B.decGrade(1);
  // std::cout << "No because cruelty is not part of the company values: " << B << std::endl;

  return (0);
} 
