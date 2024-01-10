#include "define.hpp"

int main(int ac, char **av) {

  std::string   input;

  if (checkArgs(ac, av) == false)
    return (1);

  ClapTrap  bob("Bob");
  
  input = getUsrInput();

  if (!input.compare("attack"))
    bob.attack(getStrArg(input));
  else if (!input.compare("damage") || !input.compare("heal")){
    unsigned int  intArg = getIntArg(input);
    bob.doAction(input, intArg);
  }
  else {
    std::cout << RED << "No valid entry" << RESET << std::endl;
  }

  return (0);
}
