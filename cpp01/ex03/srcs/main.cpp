#include "define.hpp"
#include <iostream>

int   main(void) {

  // std::cout << GREEN << "I'm OK" << RESET << std::endl;
  {
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
  }
  {
    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");

    std::cout << PURPLE << "--- added test to mark the difference between HumanA and HumanB: HumanB does not have a by default Weapon" << std::endl;
    jim.attack(); // line added to mark the difference between HumanA and Human B
    std::cout << "--- end of test ---" <<  RESET << std::endl;

    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
  }
  return 0;

  return (0);
}
