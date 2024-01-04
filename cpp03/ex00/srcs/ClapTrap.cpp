#include "define.hpp"

//____________________________Canonical form /

ClapTrap::ClapTrap(void) {

  if (DEBUG)
    std::cout << YELLOW << "default Constructor called" << RESET << std::endl;

  return ;
}

ClapTrap::ClapTrap(const ClapTrap &other) {

  if (DEBUG)
    std::cout << YELLOW << "Copy Constructor called" << RESET << std::endl;

  this->_name = other.getName();
  this->_hitPoints = other.getHitPoints();
  this->_energyPoints = other.getEnergyPoints();
  this->_attackDamage = other.getDamages();

  return ;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs) {

  if (this != &rhs) {

    this->_name = other.getName();
    this->_hitPoints = other.getHitPoints();
    this->_energyPoints = other.getEnergyPoints();
    this->_attackDamage = other.getDamages();
  }

  return (*this);
}

ClapTrap::~ClapTrap(void) {

  if (DEBUG)
    std::cout << "default Destructor called" << RESET << std::endl;

  return ;
}

//____________________________Other constructors/

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {

  return ;
} 

//____________________________Getters/

std::string  ClapTrap::getName(void) {

  return (this->_name);
}

int  ClapTrap::getHitPoints(void) {

  return (this->_hitPoints);
}

int  ClapTrap::getEnergyPoints(void) {

  return (this->_energyPoints);
}

int  ClapTrap::getDamages(void) {

  return (this->_attackDamage);
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

  if (amount >= this->getHitPoints())
    this->_hitPoints = 0;

  switch (true) {

    case (this->getHitPoints() == 0) :
      std::cout << RED << "ClapTrap " << this->getName() 
                << " is DEAD, leave him alone!" << RESET << std::endl;
      break ;

    default :
      this->getHitPoints() -= amount;
      std::cout << "ClapTrap " << BLUE << this->getName() << RESET
                << " took " << BLUE << amount << RESET 
                << " damages!" << std::endl;
  }

   return ;
}

void  ClapTrap::beRepaired(unsigned int amount) {

  if (this->_hitPoints == this->_maxHealth 
      || (this->_hitPoints + amount) > this->_maxHealth) {

    std::cout << "ClapTrap " << BLUE << this->getName() << RESET
              << " is already at max Health " << std::endl; 
    return ;
  }

  this->_hitPoints += amount;

  std::cout << "ClapTrap " << BLUE << this->getName() << RESET
            << " has retaken " << BLUE << amount << RESET
            << " hit points" << std::endl;

  return ;
}
