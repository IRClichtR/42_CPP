#include "define.hpp"

//____________________________Canonical form /

ClapTrap::ClapTrap(void) {

  if (DEBUG)
    std::cout << "Default constructor called"<< std::endl;

}

ClapTrap::ClapTrap(const ClapTrap &other) {

  if (DEBUG)
    std::cout << "Copy Constructor called" << RESET << std::endl;

  this->_name = other.getName();
  this->_hitPoints = other.getHitPoints();
  this->_energyPoints = other.getEnergyPoints();
  this->_attackDamage = other.getDamages();

  return ;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {

  if (DEBUG)
    std::cout << "overload operator= called"<< std::endl;

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

//____________________________Getters and setters/

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

void  ClapTrap::setName(const std::string name) {

  this->_name = name;
}

void  ClapTrap::setHitPoints(const unsigned int amount) {

  this->_energyPoints = amount;
}

void  ClapTrap::setAttackDamage(const unsigned int amount) {

  this->_attackDamage = amount;
}

//____________________________ Actions hub functions /

void  ClapTrap::doAction(std::string input, unsigned int intArg) {

  if (DEBUG)
    std::cout << "doAction called with "<< input << " | " << intArg << std::endl;

  if (!input.compare("heal"))
    this->beRepaired(intArg);
  else if (!input.compare("damage"))
    this->takeDamage(intArg);
  else {
    std::cout << this->_name << " is confused..." << std::endl;
    return ;
  }

}

//____________________________Public functions/
  
void  ClapTrap::attack(const std::string& target) {

  if (DEBUG)
    std::cout << "attack called with "<< target << std::endl;

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

  if (DEBUG) 
    std::cout << "takeDamage() called" << std::endl;

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

  if (DEBUG) 
    std::cout << "beRepaired() called" << std::endl;

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
