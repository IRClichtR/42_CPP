#include "define.hpp"


// Coplian form _________________________________________________________________//

Cat::Cat(void) {

  if (DEBUG)
    std::cout << RED << "Cat default constructor called" << RESET << std::endl;
}

Cat::Cat(const Cat &other) {

  if (DEBUG)
    std::cout << RED << "Cat copy constructor called" << RESET << std::endl;

  this->type = other.type;
}

Cat& Cat::operator=(const Cat& other) {

  if (DEBUG)
    std::cout << RED << "Cat overload operator= called" << RESET << std::endl;

  if (this != other)
    this->_type = other._type;

  return (*this);
}

Cat::~Cat(void) {

  if (DEBUG)
    std::cout << RED << "Cat default destructor called" << RESET << std::endl;
}

// Initialization constructor____________________________________________________//

Cat::Cat(const std::string& name) _type(name) {

  if (DEBUG)
    std::cout << RED << "Cat _type initialization constructor called" << RESET << std::endl;
}


// Public methods _______________________________________________________________//

void  Cat::makesound(void) {

  std::cout << YELLOW << this->_type << RESET << ": Cease the means of production!" << std::endl; 
}
