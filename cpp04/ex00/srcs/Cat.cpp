#include "define.hpp"

Cat::Cat () {

  this->type = "Cat";
  std::cout << PURPLE << "Cat default constructor called" << RESET <<std::endl;
}

Cat::Cat(const Cat & other) {

  this->type = other.type; 
  std::cout << PURPLE << "Cat copy constructor called" << RESET <<std::endl;
}

Cat& Cat::operator=(const Cat &other) {

  if (&other != this)
    this->type = other.type; 

  std::cout << PURPLE << "Cat overload operator called" << RESET <<std::endl;
  return (*this);
}

Cat::~Cat() {

  std::cout << PURPLE << "Cat default destructor called" << RESET <<std::endl;
}


//____________________ Member functions //

void  Cat::makeSound() const {

  std::cout << this->type << ": Cat Power!" << std::endl;
}
