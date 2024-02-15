#include "define.hpp"

WrongCat::WrongCat () {

  this->type = "WrongCat";
  std::cout << PURPLE << "WrongCat default constructor called" << RESET <<std::endl;
}

WrongCat::WrongCat(const WrongCat & other) {

  this->type = other.type; 
  std::cout << PURPLE << "WrongCat copy constructor called" << RESET <<std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &other) {

  if (&other != this)
    this->type = other.type; 

  std::cout << PURPLE << "WrongCat overload operator called" << RESET <<std::endl;
  return (*this);
}

WrongCat::~WrongCat() {

  std::cout << PURPLE << "WrongCat default destructor called" << RESET <<std::endl;
}


//____________________ Member functions //

// void  WrongCat::makeSound() {
//
//   std::cout << this->type << ": I can't catch any mouse. Oh what a sad little WrongCat I am!" << std::endl;
// }
