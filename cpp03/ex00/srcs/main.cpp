#include "define.hpp"
#include <string>

int main(int ac, char **av) {

  std::string   input;
  std::string   strArg;
  unsigned int  intArg;

  if (checkArgs(ac, av) == false) {

    return (1);
  }

  ClapTrap  bob("Bob");
  
  input = getUsrInput();
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

  if (!input.compare("attack")) {

    bob.doAction(input, getStrArg());
  }
  else
    bob.doAction(input, getIntArg());

  return (0);
}
