#include "define.hpp"


// Coplian form _________________________________________________________________//

WrongCat::WrongCat(void) {

  if (DEBUG)
    std::cout << RED << "WrongCat default constructor called" << RESET << std::endl;

  this->setType("WrongCat");
}

WrongCat::WrongCat(const WrongCat &other) {

  if (DEBUG)
    std::cout << RED << "WrongCat copy constructor called" << RESET << std::endl;

  this->_type = other._type;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {

  if (DEBUG)
    std::cout << RED << "WrongCat overload operator= called" << RESET << std::endl;

  if (this != &other)
    this->_type = other._type;

  return (*this);
}

WrongCat::~WrongCat(void) {

  if (DEBUG)
    std::cout << RED << "WrongCat default destructor called" << RESET << std::endl;
}

// Initialization constructor____________________________________________________//

WrongCat::WrongCat(const std::string& name) {

  if (DEBUG)
    std::cout << RED << "WrongCat _type initialization constructor called" << RESET << std::endl;

  this->_type = name;
}


// Public methods _______________________________________________________________//

void  WrongCat::makesound(void) const {

  std::cout << YELLOW << this->_type << RESET << ": There is No Alternative! You peasants must work to buy my food!" << std::endl; 
}
