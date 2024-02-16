#include "define.hpp"

Dog::Dog () {

  std::cout << PURPLE << "Dog default constructor called" << RESET <<std::endl;
  this->type = "Dog";
  this->_brain = new Brain;
}

Dog::Dog(const Dog & other) {

  this->type = other.type;
  this->_brain = new Brain(*other._brain);

  std::cout << PURPLE << "Dog copy constructor called" << RESET <<std::endl;
}

Dog& Dog::operator=(const Dog &other) {

  if (&other != this) {
    this->type = other.type; 
    this->_brain = new Brain(*other._brain);
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

void  Dog::displayBrain() const {

  this->_brain->displayAllIdeas();
}

void  Dog::newIdea(std::string& idea) {

    this->_brain->addIdea(idea);
  }
