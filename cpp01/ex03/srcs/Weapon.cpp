#include "define.hpp"

//Constructors & Destructors
//
Weapon::Weapon {void} {
  
  std::cout << "created Weapon" << std::endl;
  return ; 
}


Weapon::Weapon {std::string name} _type(name) {

  std::cout << "created Weapon: " << _type << std::endl;
  return ;
}

~Weapon::Weapon {void} {

  std::cout << "Destroyed Weapon" << std::endl;
}


//Public functions______________________________/


std::string&  Weapon::getType(void) {

  std::string&  typeRef = this->_type;

  return (typeRef);
}

void  Weapon::setType(std::string newType) {

  this->_type = newType;
  this->_typeRef = type 
  return ;
}
