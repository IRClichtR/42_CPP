#include "define.hpp"

// Coplian form _________________________________________________________________//
Animal::Animal(void) {

  if (DEBUG)
    std::cout << RED << "Animal default constructor called" << RESET << std::endl;

  this->setType("Animal");
}

Animal::Animal(const Animal &other) {

  if (DEBUG)
    std::cout << RED << "Animal copy constructor called" << RESET << std::endl;

  this->_type = other._type;
}

Animal& Animal::operator=(const Animal& other) {

  if (DEBUG)
    std::cout << RED << "Animal overload operator= called" << RESET << std::endl;

  if (this != &other)
    this->_type = other._type;

  return (*this);
}

Animal::~Animal(void) {

  if (DEBUG)
    std::cout << RED << "Animal default destructor called" << RESET << std::endl;
}

// Initialization constructor____________________________________________________//

Animal::Animal(const std::string& name) {

  if (DEBUG)
    std::cout << RED << "Animal _type initialization constructor called" << RESET << std::endl;

  this->_type = name;
}

// Getters & Setters ____________________________________________________________//


void  Animal::setType(const std::string& name) {

  this->_type = name;
}
  
std::string  Animal::getType(void) const {

  return (this->_type);
}

// Public methods _______________________________________________________________//

void  Animal::makesound(void) const {

  std::cout << YELLOW << this->getType() << RESET << ": Agrougrou!" << std::endl; 
}
