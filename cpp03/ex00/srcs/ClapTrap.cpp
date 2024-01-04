#include "define.hpp"

ClapTrap::ClapTrap(void) {

  if (DEBUG)
    std::cout << "default Constructor called" << RESET << std::endl;

  return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {

  return ;
} 

ClapTrap::~ClapTrap(void) {

  if (DEBUG)
    std::cout << "default Destructor called" << RESET << std::endl;

  return ;
}

//____________________________Getters/

std::string&  ClapTrap::getName(void) {

  return (*this->_name);
}

int&  ClapTrap::getHitPoints(void) {

  return (*this->_hitPoints);
}

int&  ClapTrap::getEnergyPoints(void) {

  return (*this->_energyPoints);
}

int&  ClapTrap::getDamages(void) {

  return (*this->_attackDamage);
}


//____________________________Public functions/

void  ClapTrap::attack(const std::string& target) {

  if (this->getHitPoints() == 0) {
    std::cout << RED << "ClapTrap " << this->getName() 
              << " is DEAD, leave him alone!" << std::endl;
    return ;
  }
  if (getEnergyPoints() > 0) {

    std::cout << "ClapTrap " << BLUE << this->getName() << RESET 
              << " attacks " << BLUE << target << RESET << ", "
              << "causing " << RED << this->getDamages() << RESET
              << " points of damage!" << std::endl;
    this->_energyPoints--;
  }
  else {

    std::cout << "ClapTrap " << BLUE << this->getName() << RESET 
              << "has no energy point left :-(" << std::endl;
  }

  return ;
}

void  ClapTrap::takeDamage(unsigned int amount) {

  if ()

}
