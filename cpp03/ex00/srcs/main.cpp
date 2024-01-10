#include "define.hpp"

int main(int ac, char **av) {

  std::string   input;

  if (checkArgs(ac, av) == false)
    return (1);

  ClapTrap  bob("Bob");
  
  input = getUsrInput();

  if (!input.compare("attack"))
    bob.attack(getStrArg(input));
  else {
    unsigned int  intArg = getIntArg(input);
    bob.doAction(input, intArg);
  }

  return (0);
}
