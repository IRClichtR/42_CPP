#include "define.hpp"

int main(void) {

  std::string usrInput;
  Harl        ultimateKaren;
  
  while (1) {

    std::cout << BLUE << "Harl: " << RESET;

    if (std::cin.eof()) {
      std::cerr << RED << "Exit CTRL D" << RESET << std::endl;
      return (1);
    }
    
    std::getline(std::cin, usrInput);

    if (checkInput(usrInput) == true)
      ultimateKaren.actionPtr(usrInput);
    else if (usrInput == "EXIT")
      break ;
    else 
      std::cout << RED << "not valid input" << RESET << std::endl;
  }

  return (0);
}
