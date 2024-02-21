#include "define.hpp"

Bureaucrat::Bureaucrat(std::string name, unsigned int level) : _name(name), _level(level) {

  try {

    if (this->_level < 1)
      throw Bureaucrat::GradeTooHighException();
    else if (this->_level > 150)
      throw Bureaucrat::GradeTooLowException();
  }
  catch (const Bureaucrat::GradeTooHighException& e) {

    std::cout << this->getName() << ": " << RED << e.what() << RESET << std::endl;
  }
  catch (const Bureaucrat::GradeTooLowException& e) {

    std::cout << this->getName() << ": " << RED << e.what() << RESET << std::endl;
  }
  
  std::cout << PURPLE << "Bureaucrat Default Constructor called" << RESET << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) {

  std::cout << PURPLE << "Bureaucrat copy Constructor called" << RESET << std::endl;
  *this = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other) {

  std::cout << PURPLE << "Bureaucrat overload operator = called" << RESET << std::endl;
  if (this != &other)
    this->_level = other.getGrade();
  return (*this);
}

Bureaucrat::~Bureaucrat() {

  std::cout << PURPLE << "Bureaucrat Default destructor called" << RESET << std::endl;
}

const std::string&  Bureaucrat::getName() const {
  return (this->_name);
}

unsigned int Bureaucrat::getGrade() const {

  return (this->_level);
}

void  Bureaucrat::setGrade(unsigned int newLevel) {

  this->_level = newLevel;
}

void  Bureaucrat::incGrade(unsigned int amount) {

  std::cout << "amount= "<< amount << " | present level= " << this->getGrade() << std::endl;
  try {

    if (this->getGrade() <= amount)
      throw Bureaucrat::GradeTooHighException();
  }
  catch (Bureaucrat::GradeTooHighException& e) {

    std::cout << this->getName() << ": " << RED << e.what() << RESET << std::endl;
    return ;
  }

  this->setGrade(this->_level - amount);
}

void  Bureaucrat::decGrade(unsigned int amount) {

  try {

    if (this->getGrade() + amount > 150)
      throw Bureaucrat::GradeTooLowException();
  }
  catch (Bureaucrat::GradeTooLowException& e) {
  
    std::cout << this->getName() << ": " << RED << e.what() << RESET << std::endl;
    return ;
  }
  this->setGrade(this->_level + amount);
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {

  os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
  return (os);
}
