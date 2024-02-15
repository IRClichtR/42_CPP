#include "define.hpp"

//____________________ Coplian form //

WrongAnimal::WrongAnimal() : type("Simple WrongAnimal") {

  std::cout << PURPLE << "WrongAnimal default constructor called" << RESET <<std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {

  this->type = other.type;
  std::cout << PURPLE << "WrongAnimal copy constructor called" << RESET <<std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {

  if (&other != this)
    this->type = other.type;

  std::cout << PURPLE << "WrongAnimal overload operator called" << RESET <<std::endl;
  return (*this);
}

WrongAnimal::~WrongAnimal() {

  std::cout << PURPLE << "WrongAnimal default destructor called" << RESET <<std::endl;
}


//____________________ Member functions //

void  WrongAnimal::makeSound() const {

  std::cout << type << ": Hey I'm Human don't kill me for food!" << std::endl;
}

const std::string WrongAnimal::getType() const {

  return (this->type);
}

void  WrongAnimal::setType(std::string& name) {

  this->type = name;
}
