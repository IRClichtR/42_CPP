#include "define.hpp"

//____________________________Canonical form /

DiamondTrap::DiamondTrap(void) {

  if (DEBUG)
    std::cout << "DiamondTrap default constructor called"<< std::endl;

}

DiamondTrap::DiamondTrap(const DiamondTrap &other) {

  if (DEBUG)
    std::cout << "DiamondTrap Copy Constructor called" << RESET << std::endl;

  this->_name = other.getName();
  this->_hitPoints = other.getHitPoints();
  this->_energyPoints = other.getEnergyPoints();
  this->_attackDamage = other.getDamages();

  return ;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {

  if (DEBUG)
    std::cout << "DiamondTrap overload operator= called"<< std::endl;

  if (this != &other) {

    this->_name = other.getName();
    this->_hitPoints = other.getHitPoints();
    this->_energyPoints = other.getEnergyPoints();
    this->_attackDamage = other.getDamages();
  }

  return (*this);
}

DiamondTrap::~DiamondTrap(void) {

  if (DEBUG)
    std::cout << "DiamondTrap default Destructor called" << RESET << std::endl;

}

//____________________________Other constructors/

DiamondTrap::DiamondTrap(std::string name) {

  this->_name = name;
  this->ClapTrap::_name = this->_name + "_clap_name";
  this->setHitPoints(100);
  this->setEnergyPoints(50);
  this->_attackDamage = 30;

  if (DEBUG)
    std::cout << "DiamondTrap constructor called" << RESET << std::endl;

} 


//____________________________Actions /

// void  DiamondTrap::attack(const std::string& target) {
//
//   if (DEBUG) {
//     std::cout << "attack called with "<< target << std::endl;
//     std::cout << "DiamondTrap has: " 
//       << RED << this->_energyPoints << RESET << "energy points" << std::endl
//       << RED << this->_hitPoints << RESET << "hit points" << std::endl
//       << RED << this->_attackDamage << RESET << "atttack points" << std::endl;
//   }
//
//   if (getEnergyPoints() > 0) {
//
//     std::cout << "DiamondTrap " << BLUE << this->getName() << RESET 
//               << " attacks " << BLUE << target << RESET << ", "
//               << "causing " << RED << this->getDamages() << RESET
//               << " points of damage!" << std::endl;
//     this->_energyPoints--;
//   }
//   else {
//
//     std::cout << "DiamondTrap " << BLUE << this->getName() << RESET 
//               << "has no energy point left :-(" << std::endl;
//   }
//
// }

void  DiamondTrap::whoAmI() {

  std::cout << "My clap name is: " << BLUE << this->ClapTrap::_name << RESET << std::endl;
  std::cout << "Bu as a DiamondTrap you should call me: " << BLUE << this->_name << RESET << std::endl;
  
}
