#include "Zombie.hpp"

//Constructors Destructors_____________________________________________________/

Zombie::Zombie(std::string input_name) {

  this->_name = input_name;

  std::cout << CYAN << "ZombieClass Object created!" << RESET << std::endl;

  this->announce();

  return ;

}

Zombie::~Zombie(void) {

  std::cout << CYAN << "ZombieClass Object Deleted!" << RESET << std::endl;

}

//Announce_____________________________________________________________________/

void  Zombie::announce(void) {

  std::cout << PURPLE 
    << this->_name << ": " << "BraiiiiiiinnnzzzZ..." 
    << RESET << std::endl;

}
