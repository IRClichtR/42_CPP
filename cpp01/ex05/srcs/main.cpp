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
      ultimateKaren.complain(usrInput);
    else if (usrInput == "EXIT")
      break ;
    else 
      std::cout << RED << "invalid cmd! I'm very irritated! Enter command or EXIT to kill me" << RESET << std::endl;
  }

  return (0);
}
