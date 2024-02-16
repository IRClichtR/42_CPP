#include "define.hpp"

Dog::Dog () {

  std::cout << PURPLE << "Dog default constructor called" << RESET <<std::endl;
  this->type = "Dog";
  this->_brain = new Brain;
}

Dog::Dog(const Dog & other) {

  this->type = other.type;
  this->_brain = new Brain;

  for (int i = 0; i < 100; i++) 
    this->_brain[i] = other._brain[i];
  std::cout << PURPLE << "Cat copy constructor called" << RESET <<std::endl;
}

Dog& Dog::operator=(const Dog &other) {

  if (&other != this) {
    this->type = other.type; 
    this->_brain = new Brain;

    for (int i = 0; i < 100; i++) 
      this->_brain[i] = other._brain[i];
  }

  std::cout << PURPLE << "Dog overload operator called" << RESET <<std::endl;
  return (*this);
}

Dog::~Dog() {

  delete this->_brain;
  std::cout << PURPLE << "Dog default destructor called" << RESET <<std::endl;
}


//____________________ Member functions //

void  Dog::makeSound() const {

  std::cout << this->type << ": Dog Power!" << std::endl;
}
