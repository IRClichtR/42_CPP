#include "define.hpp"

int main(int ac, char **av) {

  // std::string   input;

  if (checkArgs(ac, av) == false)
    return (1);

  DiamondTrap Robot1("Serena");
  DiamondTrap Robot2(Robot1);
  DiamondTrap Robot3("OfFred");

  std::cout << "--------------------------" << std::endl;
  std::cout << "TEST ATTACK" << std::endl;
  Robot1.attack("Aunt Lydia");
  Robot2.attack("Aunt Lydia");
  Robot3.attack("Aunt Lydia");

  std::cout << "--------------------------" << std::endl;
  std::cout << "TEST TAKE DAMAGE" << std::endl;
  Robot1.takeDamage(30);
  Robot2.takeDamage(30);
  Robot3.takeDamage(30);

  std::cout << "--------------------------" << std::endl;
  std::cout << "TEST HEAL" << std::endl;
  Robot1.beRepaired(20);
  Robot2.beRepaired(20);
  Robot3.beRepaired(20);

  //
  // FragTrap  Robot("OfFred");
  //
  // input = getUsrInput();
  //
  // if (!input.compare("attack"))
  //   Robot.attack(getStrArg(input));
  // else if (!input.compare("damage") || !input.compare("heal")){
  //   unsigned int  intArg = getIntArg(input);
  //   Robot.doAction(input, intArg);
  // }
  // else if (!input.compare("hi five"))
  //   Robot.highFivesGuys();
  // else {
  //   std::cout << RED << "No valid entry" << RESET << std::endl;
  // }
  //
  return (0);
}
