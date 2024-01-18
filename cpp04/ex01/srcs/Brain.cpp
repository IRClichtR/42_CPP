#include "define.hpp"

Brain::Brain() {

  std::cout << RED << "Brain default constructor called" << RESET << std::endl;
}

Brain::Brain(const Brain &other) {

  *this = other;

  std::cout << RED << "Brain copy constructor called" << RESET << std::endl;
}

Brain::~Brain() {

  std::cout << RED << "Brain default destructor called" << RESET << std::endl;

  } 

Brain& Brain::operator=(const Brain &other) {

   if (this != &other) {

     for (int i = 0; i < 100; i++)
       this->ideas[i] = other.ideas[i];
   }

   std::cout << RED << "Brain Copy Assignment operator called" << RESET << std::endl;

   return (*this);
  }
