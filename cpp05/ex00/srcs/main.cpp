#include "define.hpp"

int main() {

  std::string name1 = "God of Bureaucrats";

  try {Bureaucrat God(name1, 0);}
  catch(const std::exception& e) {std::cerr << RED << e.what() << RESET << std::endl;}

  return (0);
}
