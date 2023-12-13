#include "define.hpp"

void  displayInstructions(void) {

  std::cout << BLUE << "Enter 3 parameters:" << RESET << std::endl;
  std::cout << BLUE << "1: " << RESET << "filename" << std::endl;
  std::cout << BLUE << "2: " << RESET << "s1: string to find" << std::endl;
  std::cout << BLUE << "3: " << RESET << "s2: string that will replace s1 in file" << std::endl;
  std::cout << "Have Fun!" << std::endl;
  
}

void  errOpen(void) {

  std::cerr << RED << "Invalid FD" << RESET << std::endl;
}
