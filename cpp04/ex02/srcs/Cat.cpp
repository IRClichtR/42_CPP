#include "define.hpp"


// Coplian form _________________________________________________________________//

Cat::Cat(void) {

  if (DEBUG)
    std::cout << RED << "Cat default constructor called" << RESET << std::endl;

  this->setType("Cat");
  this->_brain = new Brain();
}

Cat::Cat(const Cat &other) {

  if (DEBUG)
    std::cout << RED << "Cat copy constructor called" << RESET << std::endl;

  this->_type = other._type;
}

Cat& Cat::operator=(const Cat& other) {

  if (DEBUG)
    std::cout << RED << "Cat overload operator= called" << RESET << std::endl;

  if (this != &other)
    this->_type = other._type;

  return (*this);
}

Cat::~Cat(void) {

  if (DEBUG)
    std::cout << RED << "Cat default destructor called" << RESET << std::endl;

  delete this->_brain;
}

// Initialization constructor____________________________________________________//

Cat::Cat(const std::string& name) {

  if (DEBUG)
    std::cout << RED << "Cat _type initialization constructor called" << RESET << std::endl;

  this->_type = name;
}


// Public methods _______________________________________________________________//

void  Cat::makesound(void) const {

  std::cout << YELLOW << this->getType() << RESET << ": Cease the means of production!" << std::endl; 
}
