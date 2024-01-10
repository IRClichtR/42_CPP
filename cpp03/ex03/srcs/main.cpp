#include "define.hpp"

int main(int ac, char **av) {

  std::string   input;

  if (checkArgs(ac, av) == false)
    return (1);

  FragTrap  Robot("OfFred");

  input = getUsrInput();

  if (!input.compare("attack"))
    Robot.attack(getStrArg(input));
  else if (!input.compare("damage") || !input.compare("heal")){
    unsigned int  intArg = getIntArg(input);
    Robot.doAction(input, intArg);
  }
  else if (!input.compare("hi five"))
    Robot.highFivesGuys();
  else {
    std::cout << RED << "No valid entry" << RESET << std::endl;
  }

  return (0);
}
