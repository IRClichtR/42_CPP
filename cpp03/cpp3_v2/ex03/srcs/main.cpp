#include "define.hpp"

int main(int ac, char **av) {

  std::string   input;

  if (checkArgs(ac, av) == false)
    return (1);

  DiamondTrap bob("Aunt Lydia");
  
  while (1) {

    input = getUsrInput();
    if (!input.compare("attack"))
      bob.attack(getStrArg(input));
    else if (!input.compare("damage"))
      bob.takeDamage(getIntArg(input));
    else if (!input.compare("heal"))
      bob.beRepaired(getIntArg(input));
    else if (!input.compare("high five"))
      bob.highFivesGuys();
    else if (!input.compare("Who"))
      bob.whoAmI();
    else if (!input.compare("guard gate"))
      bob.guardGate();
    else if (std::cin.eof() || !input.compare("exit"))
      break ;
    else {
      std::cout << RED << "No valid entry" << RESET << std::endl;
    }
  }

  return (0);
}
