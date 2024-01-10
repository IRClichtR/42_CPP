#include "define.hpp"

//____________________________Canonical form /

ScavTrap::ScavTrap(void) : ClapTrap() {

  if (DEBUG)
    std::cout << "ScavTrap Default constructor called"<< std::endl;

}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap() {

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

ScavTrap::ScavTrap(std::string name) : ClapTrap() {

  this->_name = name;
  this->_hitPoints = 100;
  this->_energyPoints = 50;
  this->_attackDamage = 20;

  if (DEBUG) {
    std::cout << "ScavTrap " << _name << " created" << std::endl;
    std::cout << YELLOW << "name: " << RESET
              << this->getName()
              << std::endl;
  }
} 

//____________________________Specific functions/

void  ScavTrap::guardGate(void) {

  std::cout << BLUE << this->getName() << " is in Gate Keeper mode" << RESET << std::endl;
}
