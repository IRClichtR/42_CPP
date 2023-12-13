#include "define.hpp"

// Constructors and Destructors________________________/

Weapon::Weapon () {
  
  return ; 
}


Weapon::Weapon (std::string name) : _type(name) {

  return ;
}

Weapon::~Weapon (void) {

}

// Accessors___________________________________________/

std::string&  Weapon::getType(void) {

  return (_type);
}

void  Weapon::setType(std::string newType) {

  this->_type = newType;
  return ;
}
