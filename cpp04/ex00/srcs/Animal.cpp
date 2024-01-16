#include "define.hpp"

// Coplian form _________________________________________________________________//
Animal::Animal(void) {

  if (DEBUG)
    std::cout << RED << "Animal default constructor called" << RESET << std::endl;
}

Animal::Animal(const Animal &other) {

  if (DEBUG)
    std::cout << RED << "Animal copy constructor called" << RESET << std::endl;

  this->type = other.type;
}

Animal& Animal::operator=(const Animal& other) {

  if (DEBUG)
    std::cout << RED << "Animal overload operator= called" << RESET << std::endl;

  if (this != other)
    this->_type = other._type;

  return (*this);
}

Animal::~Animal(void) {

  if (DEBUG)
    std::cout << RED << "Animal default destructor called" << RESET << std::endl;
}

// Public methods _______________________________________________________________//

void  Animal::makesound(void) {

  std::cout << YELLOW << this->_type << "Agrougrou!" << std::endl; 
}
