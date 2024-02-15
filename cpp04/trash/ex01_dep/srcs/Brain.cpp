#include "define.hpp"

Brain::Brain() {

  if (DEBUG)
    std::cout << RED << "Brain default constructor called" << RESET << std::endl;
  this->ideas[0] = "Maman ?";
  this->ideas[1] = "Gender should be abolished. I'd rather call you Parent";
  this->ideas[2] = "What do we want? Croquettes! When do we want it? NOW!";
}

Brain::Brain(const Brain &other) {

  if (DEBUG)
    std::cout << RED << "Brain copy constructor called" << RESET << std::endl;

  *this = other;
}

Brain::~Brain() {
 
  if (DEBUG)
    std::cout << RED << "Brain default destructor called" << RESET << std::endl;

} 

Brain& Brain::operator=(const Brain &other) {

   if (this != &other) {

     for (int i = 0; i < 100; i++)
       this->ideas[i] = other.ideas[i];
   }

   if (DEBUG)
     std::cout << RED << "Brain Copy Assignment operator called" << RESET << std::endl;

   return (*this);
  }

const std::string&  Brain::getIdea(int i) const {

  if (i < 0 || i > 99)
    std::cout << RED << "Invalid index" << RESET << std::endl;
  else if (this->ideas[i].empty())
    std::cout << RED << "No idea here" << RESET << std::endl;

  return (ideas[i]);
}

void  Brain::addIdea(const std::string& idea) {

  int i = 0;

  while (!this->ideas[i].empty() && i < 100)
    i++;

  if (i < 100)
    this->ideas[i] = idea;
  else 
    std::cout << RED << "Brain if full" << RESET << std::endl;

}

void  Brain::displayAllBrain() const{

  for (int i = 0 ; !this->ideas[i].empty() ; i++)
    std::cout << PURPLE << "[" << i << "]" << " [" << ideas[i] << "] " << RESET << std::endl;
}
