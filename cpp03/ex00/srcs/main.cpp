#include "define.hpp"

bool DEBUG = false;

int main(int ac, char **av) {

  std::string input;

  if (checkArgs(ac, av) == false) {

    return (1);
  }

  ClapTrap  bob("Bob");
  
  while (1) {

    std::cout << BLUE << "enter an action <attack> <heal> <take little damage> <take critical damage>: " << RESET;

    std::getline(std::cin, input);

    if (std::cin.eof())
      break ;

    if (!input.empty()) 
      break ;
    else
      std::cout << RED << "Invalid command! ***the ClapTrap makes an awkward move***" << RESET << std::endl;

  }

  bob.doAction(input);

  return (0);
}
