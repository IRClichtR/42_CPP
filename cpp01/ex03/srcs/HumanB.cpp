#include "define.hpp"

HumanB::HumanB() {
  
  // std::cout << "HumanB default constructor called" << std::endl;
  return ;
}

HumanB::HumanB(std::string input_name) : _name(input_name){

  // std::cout << "HumanB other constructor called" << std::endl;
  return ;
}

HumanB::~HumanB () {

  // std::cout << "HumanB destroyed" << std::endl;
}

void  HumanB::setWeapon (Weapon newWeapon) {

  this->_personalWeapon = newWeapon;
  return ;
}

void  HumanB::attack(void) {

  std::cout << this->_name << ": attacked with their " << this->_personalWeapon.getType() << std::endl;
  
  return ;
}
