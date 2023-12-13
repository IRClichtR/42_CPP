#include "define.hpp"

HumanA::HumanA() {
  
  //std::cout << "HumanA default constructor called" << std::endl;
  return ;
}

HumanA::HumanA(std::string input_name, Weapon defaultWeapon) : _personalWeapon(defaultWeapon),  _name(input_name){

 // std::cout << "HumanA other constructor called" << std::endl;
  return ;
}

HumanA::~HumanA () {

//  std::cout << "HumanA destroyed" << std::endl;
}

void  HumanA::setWeapon(Weapon newWeapon) {

  this->_personalWeapon = newWeapon;
  return ;
}

void  HumanA::attack(void) {

  std::cout << this->_name << ": attacked with their " << this->_personalWeapon.getType() << std::endl;
  
  return ;
}
