#include "define.hpp"

int main(int ac, char **av) {

  if (ac < 2) {

    std::cout << RED << "Missing argument" << RESET << std::endl;
    return (1);
  }
  else if (ac > 2) {

    std::cout << RED << "Too many arguments" << RESET << std::endl;
    return (1);
  }

  std::string literal = av[1];
  ScalarConverter::convert(literal, av[1]);
  return (0);
}
