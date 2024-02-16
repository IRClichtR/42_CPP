#include "define.hpp"

Cat::Cat () {

  std::cout << PURPLE << "Cat default constructor called" << RESET <<std::endl;
  this->type = "Cat";
  this->_brain = new Brain;
}

Cat::Cat(const Cat & other) {

  this->type = other.type;
  this->_brain = new Brain(*other._brain);

  std::cout << PURPLE << "Cat copy constructor called" << RESET <<std::endl;
}

Cat& Cat::operator=(const Cat &other) {

  if (&other != this) {
    this->type = other.type; 
    this->_brain = new Brain(*other._brain);
  }

  std::cout << PURPLE << "Cat overload operator called" << RESET <<std::endl;
  return (*this);
}

Cat::~Cat() {

  delete this->_brain;
  std::cout << PURPLE << "Cat default destructor called" << RESET <<std::endl;
}

//____________________ Member functions //

void  Cat::makeSound() const {

  std::cout << this->type << ": Cat Power!" << std::endl;
}

void  Cat::displayBrain() const {

  this->_brain->displayAllIdeas();
}

void  Cat::newIdea(std::string& idea) {

    this->_brain->addIdea(idea);
  }
