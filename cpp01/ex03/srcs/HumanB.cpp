#include "define.hpp"

HumanB::HumanB() {
  
  return ;
}

HumanB::HumanB(std::string input_name) : _name(input_name){

  return ;
}

HumanB::~HumanB () {

 }

void  HumanB::setWeapon (Weapon& weaponRef) {

  this->_personalWeapon = &weaponRef;

  return ;
}

void  HumanB::attack(void) {

 std::cout << this->_name << " attacks with their " << this->_personalWeapon->getType() << std::endl;
  
  return ;
}
