#include "define.hpp"

HumanA::HumanA() {
  
  //std::cout << "HumanA default constructor called" << std::endl;
  return ;
}

HumanA::HumanA(std::string input_name, Weapon& defaultWeapon) : _name(input_name){
  
  HumanA::setWeapon(defaultWeapon);
  std::cout << BLUE << "HumanA name:" << _name << " | default weapon addr: " << _personalWeapon->getType() << RESET << std::endl;
  return ;
}

HumanA::~HumanA () {

//  std::cout << "HumanA destroyed" << std::endl;
}

void  HumanA::setWeapon(Weapon& weaponRef) {

  this->_personalWeapon = &weaponRef;
  
  return ;
}

void  HumanA::attack(void) {

  std::cout << this->_name << ": attacked with their " << this->_personalWeapon->getType() << std::endl;
  
  return ;
}
