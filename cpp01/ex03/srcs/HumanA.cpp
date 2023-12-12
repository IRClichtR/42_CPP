#include "define.hpp"

HumanA::HumanA(void) {
  
  std::cout << "HumanA default constructor called" << std::endl;
  return ;
}

HumanA::HumanA(std::string  input_name, Weapon defaultWeapon) _name(input_name), _personalWeapon(defaultWeapon) {

  std::cout << "HumanA other constructor called" << std::endl;
  return ;
}

HumanA::~HumanA (void) {

  std::cout << "HumanA destroyed" << std::endl;
}

void  HumanA::_setWeapon(std::string weaponName) {

  this->_personalWeapon = Weapon(weaponName);

  return ;
}

void  HumanA::attack(void) {

  std::cout << this->_name << ": attacked with " << this->_personalWeapon::_type << std::endl;
  return ;
}
