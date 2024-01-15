#include "define.hpp"

//____________________________Canonical form /

ScavTrap::ScavTrap(void) {

  if (DEBUG)
    std::cout << "ScavTrap default constructor called"<< std::endl;


  if (DEBUG)
    std::cout << "ScavTrap default Constructor called" << RESET << std::endl;

}

ScavTrap::ScavTrap(const ScavTrap &other) {

  if (DEBUG)
    std::cout << "ScavTrap Copy Constructor called" << RESET << std::endl;

  this->_name = other.getName();
  this->_hitPoints = other.getHitPoints();
  this->_energyPoints = other.getEnergyPoints();
  this->_attackDamage = other.getDamages();

  return ;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {

  if (DEBUG)
    std::cout << "ScavTrap overload operator= called"<< std::endl;

  if (this != &other) {

    this->_name = other.getName();
    this->_hitPoints = other.getHitPoints();
    this->_energyPoints = other.getEnergyPoints();
    this->_attackDamage = other.getDamages();
  }

  return (*this);
}

ScavTrap::~ScavTrap(void) {

  if (DEBUG)
    std::cout << "ScavTrap default Destructor called" << RESET << std::endl;

}

//____________________________Other constructors/

ScavTrap::ScavTrap(std::string name) {

  this->_name = name;
  this->setHitPoints(100);
  this->setEnergyPoints(50);
  this->_attackDamage = 20;

  if (DEBUG)
    std::cout << "ScavTrap constructor called" << RESET << std::endl;

} 


//_____________________________________Actions/
  
void  ScavTrap::attack(const std::string& target) {

  if (DEBUG) {
    std::cout << "attack called with "<< target << std::endl;
    std::cout << "ScavTrap has: " 
      << RED << this->_energyPoints << RESET << "energy points" << std::endl
      << RED << this->_hitPoints << RESET << "hit points" << std::endl
      << RED << this->_attackDamage << RESET << "atttack points" << std::endl;
  }

  if (getEnergyPoints() > 0) {

    std::cout << "ScavTrap " << BLUE << this->getName() << RESET 
              << " attacks " << BLUE << target << RESET << ", "
              << "causing " << RED << this->getDamages() << RESET
              << " points of damage!" << std::endl;
    this->_energyPoints--;
  }
  else {

    std::cout << "ScavTrap " << BLUE << this->getName() << RESET 
              << "has no energy point left :-(" << std::endl;
  }

}


void  ScavTrap::guardGate(void) {

  if (DEBUG) {
    std::cout << "guardGate() called " << std::endl;
    std::cout << "ScavTrap has: " 
      << RED << this->_energyPoints << RESET << "energy points" << std::endl
      << RED << this->_hitPoints << RESET << "hit points" << std::endl
      << RED << this->_attackDamage << RESET << "atttack points" << std::endl;
  }

  std::cout << BLUE << "Thou shall not pass!" << RESET << std::endl;
  std::cout << this->getName() << " is in gate keeper mode." << std::endl;
}
