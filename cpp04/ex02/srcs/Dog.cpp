#include "define.hpp"

Dog::Dog () {

  this->type = "Dog";
  std::cout << PURPLE << "Dog default constructor called" << RESET <<std::endl;
}

Dog::Dog(const Dog & other) {

  this->type = other.type; 
  std::cout << PURPLE << "Dog copy constructor called" << RESET <<std::endl;
}

Dog& Dog::operator=(const Dog &other) {

  if (&other != this)
    this->type = other.type; 

  std::cout << PURPLE << "Dog overload operator called" << RESET <<std::endl;
  return (*this);
}

Dog::~Dog() {

  std::cout << PURPLE << "Dog default destructor called" << RESET <<std::endl;
}


//____________________ Member functions //

void  Dog::makeSound() const {

  std::cout << this->type << ": Dog Power!" << std::endl;
}
