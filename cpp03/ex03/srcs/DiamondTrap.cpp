#include "define.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name) {

  ClapTrap::setName(name + "_clap_name");
  this->_name = name;
  FragTrap::setHitPoints(100);
  ScavTrap::setEnergyPoints(50);
  FragTrap::setAttackDamage(30);

  if (DEBUG)
    std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap &src) : ClapTrap(src._name), FragTrap(src._name), ScavTrap(src._name){

	*this = src;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap &rhs) {

  this->_name = rhs._name;
  FragTrap::setHitPoints(rhs.getHitPoints());
  ScavTrap::setEnergyPoints(rhs.getEnergyPoints());
  FragTrap::setAttackDamage(rhs.getDamages());

  return (*this);
}

DiamondTrap::~DiamondTrap(void) {

  if (DEBUG)
    sstd::cout << "DiamondTrap destroyed" << std::endl;
}

void  DiamondTrap::whoAmI(void) {

  std::cout << BLUE << "ClapTrap name: " << ClapTrap::getName() << RESET << std::endl;
  std::cout << PURPLE << "DiamondTrap name: " << this->_name << RESET << std::endl;
}
