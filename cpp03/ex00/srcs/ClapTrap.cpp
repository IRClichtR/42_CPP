#include "define.hpp"

//____________________________Canonical form /

ClapTrap::ClapTrap(void) {

  if (DEBUG)
    std::cout << YELLOW << "default Constructor called" << RESET << std::endl;

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

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {

  if (this != &other) {

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

}

//____________________________Other constructors/

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {

} 

//____________________________Getters/

std::string  ClapTrap::getName(void) const {

  return (this->_name);
}

unsigned int  ClapTrap::getHitPoints(void) const {

  return (this->_hitPoints);
}

unsigned int  ClapTrap::getEnergyPoints(void) const {

  return (this->_energyPoints);
}

unsigned int  ClapTrap::getDamages(void) const {

  return (this->_attackDamage);
}

//____________________________ Actions hub functions /

void  ClapTrap::doAction(std::string input, unsigned int intArg) {

  if (input.compare("heal"))
    this->takeDamage(intArg);
  else if (input.compare("damage"))
    this->takeDamage(intArg);
  else {
    std::cout << this->_name << " is confused..." << std::endl;
    return ;
  }

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

}

void  ClapTrap::takeDamage(unsigned int amount) {

  if (amount >= this->getHitPoints())
    this->_hitPoints = 0;

  if (this->getHitPoints() == 0) {
    std::cout << RED << "ClapTrap " << this->getName() 
              << " is DEAD, leave him alone!" << RESET << std::endl;
  }
  else {
    this->_hitPoints -= amount;
    std::cout << "ClapTrap " << BLUE << this->getName() << RESET
              << " took " << BLUE << amount << RESET 
              << " damages!" << std::endl;
  }

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

}
