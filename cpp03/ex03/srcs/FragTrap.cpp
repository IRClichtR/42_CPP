#include "define.hpp"

//____________________________Canonical form /

FragTrap::FragTrap(void) : ClapTrap() {

  if (DEBUG)
    std::cout << "FragTrap Default constructor called"<< std::endl;

}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap() {

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

FragTrap::FragTrap(std::string name) : ClapTrap() {

  this->_name = name;
  this->_hitPoints = 100;
  this->_energyPoints = 50;
  this->_attackDamage = 30;

  if (DEBUG) {
    std::cout << "FragTrap " << _name << " created" << std::endl;
    std::cout << YELLOW << "name: " << RESET
              << this->getName()
              << std::endl;
  }
} 

//____________________________Specific functions/

void  FragTrap::highFivesGuys(void) {

  std::cout << BLUE << this->getName() << " requests a positive HIGH FIVE to the team" << RESET << std::endl;
}
