
#include "define.hpp"

//____________________________Canonical form /

FragTrap::FragTrap(void) {

  if (DEBUG)
    std::cout << "FragTrap default constructor called"<< std::endl;


  if (DEBUG)
    std::cout << "FragTrap default Constructor called" << RESET << std::endl;

}

FragTrap::FragTrap(const FragTrap &other) {

  if (DEBUG)
    std::cout << "FragTrap Copy Constructor called" << RESET << std::endl;

  this->_name = other.getName();
  this->_hitPoints = other.getHitPoints();
  this->_energyPoints = other.getEnergyPoints();
  this->_attackDamage = other.getDamages();

  return ;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {

  if (DEBUG)
    std::cout << "FragTrap overload operator= called"<< std::endl;

  if (this != &other) {

    this->_name = other.getName();
    this->_hitPoints = other.getHitPoints();
    this->_energyPoints = other.getEnergyPoints();
    this->_attackDamage = other.getDamages();
  }

  return (*this);
}

FragTrap::~FragTrap(void) {

  if (DEBUG)
    std::cout << "FragTrap default Destructor called" << RESET << std::endl;

}

//____________________________Other constructors/

FragTrap::FragTrap(std::string name) {

  this->_name = name;
  this->setHitPoints(100);
  this->setEnergyPoints(100);
  this->_attackDamage = 30;

  if (DEBUG)
    std::cout << "FragTrap constructor called" << RESET << std::endl;

} 


//_____________________________________Actions/
  
void  FragTrap::attack(const std::string& target) {

  if (DEBUG) {
    std::cout << "attack called with "<< target << std::endl;
    std::cout << "FragTrap has: " 
      << RED << this->_energyPoints << RESET << "energy points" << std::endl
      << RED << this->_hitPoints << RESET << "hit points" << std::endl
      << RED << this->_attackDamage << RESET << "atttack points" << std::endl;
  }

  if (getEnergyPoints() > 0) {

    std::cout << "FragTrap " << BLUE << this->getName() << RESET 
              << " attacks " << BLUE << target << RESET << ", "
              << "causing " << RED << this->getDamages() << RESET
              << " points of damage!" << std::endl;
    this->_energyPoints--;
  }
  else {

    std::cout << "FragTrap " << BLUE << this->getName() << RESET 
              << "has no energy point left :-(" << std::endl;
  }

}

void  FragTrap::highFivesGuys(void) {

  if (DEBUG) {
    std::cout << "highFivesGuys() called " << std::endl;
    std::cout << "FragTrap has: " 
      << RED << this->_energyPoints << RESET << "energy points" << std::endl
      << RED << this->_hitPoints << RESET << "hit points" << std::endl
      << RED << this->_attackDamage << RESET << "atttack points" << std::endl;
  }

  std::cout << BLUE << "Hey HIGH FIVE GUYS!" << RESET << std::endl;
  std::cout << this->getName() << " did High Five to the guys" << std::endl;
}
