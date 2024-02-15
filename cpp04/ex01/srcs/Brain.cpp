#include "define.hpp"

//____________________ Coplian form //

Brain::Brain() {

  std::cout << PURPLE << "Brain default constructor called" << RESET <<std::endl;
  this->initBrain();
}

Brain::Brain(const Brain &other) {

  this->initBrain();
  for (int i = 0 ; i < 100 ; i++) {
    this->_ideas[i] = other._ideas[i];
  }
  std::cout << PURPLE << "Brain copy constructor called" << RESET <<std::endl;
}

Brain&  Brain::operator=(const Brain &other) {

  int i = 0;

  this->initBrain();
  while (&other != this && i < 100) {
      this->_ideas[i] = other._ideas[i];
      i++;
  }
  return (*this);
}

void  Brain::initBrain() {

  this->_ideas = new std::string[100];
  this->_ideas[0] = "Default idea comming from an empty brain";
  std::cout << this->_ideas[0] << std::endl;
}

Brain::~Brain() {

  delete [] this->_ideas;
  std::cout << PURPLE << "Brain default destructor called" << RESET <<std::endl;
}
