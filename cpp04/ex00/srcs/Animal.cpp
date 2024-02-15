#include "define.hpp"
#include <string>

//____________________ Coplian form //

Animal::Animal() : type("Simple Animal") {

  std::cout << PURPLE << "Animal default constructor called" << RESET <<std::endl;
}

Animal::Animal(const Animal &other) {

  this->type = other.type;
  std::cout << PURPLE << "Animal copy constructor called" << RESET <<std::endl;
}

Animal& Animal::operator=(const Animal& other) {

  if (&other != this)
    this->type = other.type;

  std::cout << PURPLE << "Animal overload operator called" << RESET <<std::endl;
  return (*this);
}

Animal::~Animal() {

  std::cout << PURPLE << "Animal default destructor called" << RESET <<std::endl;
}


//____________________ Member functions //

void  Animal::makeSound() const {

  std::cout << type << ": Animal Farm is my favorite book" << std::endl;
}

const std::string Animal::getType() const {

  return (this->type);
}

void  Animal::setType(std::string& name) {

  this->type = name;
}
