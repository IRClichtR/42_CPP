#include "define.hpp"


// Coplian form _________________________________________________________________//

WrongAnimal::WrongAnimal(void) {

  if (DEBUG)
    std::cout << RED << "WrongAnimal default constructor called" << RESET << std::endl;

  this->setType("WrongAnimal");
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {

  if (DEBUG)
    std::cout << RED << "WrongAnimal copy constructor called" << RESET << std::endl;

  this->_type = other._type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {

  if (DEBUG)
    std::cout << RED << "WrongAnimal overload operator= called" << RESET << std::endl;

  if (this != &other)
    this->_type = other._type;

  return (*this);
}

WrongAnimal::~WrongAnimal(void) {

  if (DEBUG)
    std::cout << RED << "WrongAnimal default destructor called" << RESET << std::endl;
}

// Initialization constructor____________________________________________________//

WrongAnimal::WrongAnimal(const std::string& name) {

  if (DEBUG)
    std::cout << RED << "WrongAnimal _type initialization constructor called" << RESET << std::endl;

  this->_type = name;
}

// Getters & Setters ____________________________________________________________//


void  WrongAnimal::setType(const std::string& name) {

  this->_type = name;
}
  
std::string  WrongAnimal::getType(void) const {

  return (this->_type);
}


// Public methods _______________________________________________________________//

void  WrongAnimal::makesound(void) const {

  std::cout << YELLOW << this->getType() << RESET << ": Agrou Agrou !" << std::endl; 
}
