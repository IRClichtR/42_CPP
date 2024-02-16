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

Brain::~Brain() {

  delete [] this->_ideas;
  std::cout << PURPLE << "Brain default destructor called" << RESET <<std::endl;
}

//____________________ Accessors // 

  const std::string&  Brain::getIdea(int index) const {

    return (this->_ideas[index]);
  }

  void  Brain::displayAllIdeas() const {

    for (int i = 0; !this->_ideas[i].empty(); i++)
      std::cout << "[" << i << "] " << this->_ideas[i] << std::endl;

  }

//____________________ Add Del Create Brain // 

  void  Brain::addIdea(const std::string& idea) {

    int i = 0;
    while (!this->_ideas[i].empty() && i < 100)
      i++;
    if (i < 100)
      this->_ideas[i] = idea;
    else {
      std::cout << RED << "Brain is full!" << RESET << std::endl;
    }
  }

  void  Brain::delIdea(int index) {

    if (index < 100 && !this->_ideas[index].empty())
      this->_ideas[index].clear();
  }

void  Brain::initBrain() {

  this->_ideas = new std::string[100];
  this->_ideas[0] = "Default idea comming from an empty brain";
  std::cout << this->_ideas[0] << std::endl;
}

