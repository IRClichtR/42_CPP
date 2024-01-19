#include "define.hpp"


// Coplian form _________________________________________________________________//

Dog::Dog(void) : Animal("Cat") {

  if (DEBUG)
    std::cout << RED << "Dog default constructor called" << RESET << std::endl;

  this->setType("Dog");
  this->_brain = new Brain();
}

Dog::Dog(const Dog &other) {

  if (DEBUG)
    std::cout << RED << "Dog copy constructor called" << RESET << std::endl;

  this->_type = other._type;
  this->_brain = new Brain();
  for (int i = 0 ; i < 100 ; i++)
    this->_brain[i] = other._brain[i];

}

Dog& Dog::operator=(const Dog& other) {

  if (DEBUG)
    std::cout << RED << "Dog overload operator= called" << RESET << std::endl;

  if (this != &other) {
    this->_type = other._type;
    this->_brain = new Brain();
    for (int i = 0 ; i < 100 ; i++)
      this->_brain[i] = other._brain[i];
  }

  return (*this);
}

Dog::~Dog(void) {

  if (DEBUG)
    std::cout << RED << "Dog default destructor called" << RESET << std::endl;

  if ((this->_brain))
    delete this->_brain;
}

// Initialization constructor____________________________________________________//

Dog::Dog(const std::string& name) {

  if (DEBUG)
    std::cout << RED << "Dog _type initialization constructor called" << RESET << std::endl;

  this->_type = name;
  this->_brain = new Brain();

}


// Public methods _______________________________________________________________//

void  Dog::makesound(void) const {

  std::cout << YELLOW << this->getType() << RESET << ": Patriarchy must end now!" << std::endl; 
}

// Getters and Setters __________________________________________________________//

const std::string&  Dog::getAnIdea(int index) const {

  return (this->_brain->getIdea(index));
}

void Dog::setAnIdea(const std::string& idea) {

  this->_brain->addIdea(idea);
}

void  Dog::displayBrain() const {

  this->_brain->displayAllBrain();
}
