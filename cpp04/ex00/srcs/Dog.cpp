#include "define.hpp"


// Coplian form _________________________________________________________________//

Dog::Dog(void) {

  if (DEBUG)
    std::cout << RED << "Dog default constructor called" << RESET << std::endl;
}

Dog::Dog(const Dog &other) {

  if (DEBUG)
    std::cout << RED << "Dog copy constructor called" << RESET << std::endl;

  this->type = other.type;
}

Dog& Dog::operator=(const Dog& other) {

  if (DEBUG)
    std::cout << RED << "Dog overload operator= called" << RESET << std::endl;

  if (this != other)
    this->_type = other._type;

  return (*this);
}

Dog::~Dog(void) {

  if (DEBUG)
    std::cout << RED << "Dog default destructor called" << RESET << std::endl;
}

// Initialization constructor____________________________________________________//

Dog::Dog(const std::string& name) _type(name) {

  if (DEBUG)
    std::cout << RED << "Dog _type initialization constructor called" << RESET << std::endl;
}


// Public methods _______________________________________________________________//

void  Dog::makesound(void) {

  std::cout << YELLOW << this->_type << RESET << "Patriarchy must end now!" << std::endl; 
}
