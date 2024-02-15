#include "define.hpp"


// Coplian form _________________________________________________________________//

Cat::Cat(void) : Animal("Cat") {

  if (DEBUG)
    std::cout << RED << "Cat default constructor called" << RESET << std::endl;

  this->setType("Cat");
  this->_brain = new Brain();
}

Cat::Cat(const Cat &other) {

  if (DEBUG)
    std::cout << RED << "Cat copy constructor called" << RESET << std::endl;

  this->_type = other._type;
  this->_brain = new Brain();
  for (int i = 0 ; i < 100 ; i++)
    this->_brain[i] = other._brain[i];
}

Cat& Cat::operator=(const Cat& other) {

  if (DEBUG)
    std::cout << RED << "Cat overload operator= called" << RESET << std::endl;

  if (this != &other) {
    this->_type = other._type;
    this->_brain = new Brain();
    for (int i = 0 ; i < 100 ; i++)
      this->_brain[i] = other._brain[i];
  }

  return (*this);
}

Cat::~Cat(void) {

  if (DEBUG)
    std::cout << RED << "Cat default destructor called" << RESET << std::endl;

  if (this->_brain)
    delete this->_brain;
}

// Initialization constructor____________________________________________________//

Cat::Cat(const std::string& name) {

  if (DEBUG)
    std::cout << RED << "Cat _type initialization constructor called" << RESET << std::endl;


  this->_brain = new Brain();
  this->_type = name;
}


// Public methods _______________________________________________________________//

void  Cat::makesound(void) const {

  std::cout << YELLOW << this->getType() << RESET << ": Cease the means of production!" << std::endl; 
}

// Getters and Setters __________________________________________________________//

const std::string&  Cat::getAnIdea(int index) const {

  return (this->_brain->getIdea(index));
}

void Cat::setAnIdea(const std::string& idea) {

  this->_brain->addIdea(idea);
}

void  Cat::displayBrain() const {

  this->_brain->displayAllBrain();
}
