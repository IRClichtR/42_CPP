#include "define.hpp"

HumanB::HumanB(void) {
  
  std::cout << "HumanB default constructor called" << std::endl;
  return ;
}

HumanB::HumanB(std::string  input_name) _name(input_name) {

  std::cout << "HumanB other constructor called" << std::endl;
  return ;
}

HumanB::~HumanB (void) {

  std::cout << "HumanB destroyed" << std::endl;
}

void  HumanB::attack(void) {

  std::cout << this->_name << ": attacked with " << this->_personalWeapon::_type << std::endl;
  return ;
}

void  HumanB::_setWeapon(std::string weaponName) {

  this->_personalWeapon = Weapon(weaponName);

  return ;
}
