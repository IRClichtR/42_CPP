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

    if (usrInput == "EXIT")
      break ;
    else if (checkInput(usrInput) == true)
      ultimateKaren.switchStatements(usrInput);
    else 
      std::cout << RED << "invalid cmd! I'm very irritated!" << RESET << std::endl;
  }

  return (0);
}
