#include "define.hpp"

Bureaucrat::Bureaucrat(std::string name, unsigned int level) : _name(name), _level(level) {

  std::cout << PURPLE << "Bureaucrat Default constructor called" << RESET << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) {

  this->_level = other._level;
  this->_name = other._name;
  std::cout << PURPLE << "Bureaucrat copy constructor called" << RESET << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {

  if (&other != this) {
    this->_level = other._level;
    this->_name = other._name;
  }
  return (*this);
  std::cout << PURPLE << "Bureaucrat overload = operator called" << RESET << std::endl;
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

void  Bureaucrat::GradeTooHighException() const {

  if (this->_level < 1)
    throw tooHighException();
} 

void  Bureaucrat::GradeTooLowException() const {

  if (this->_level > 150)
    throw tooLowException();
}

void  Bureaucrat::incGrade() {

  if (this->_level - 1 == 0)
    throw tooHighException();
  else 
    this->_level -= 1;
}

void  Bureaucrat::decGrade() {

  if (this->_level + 1 == 0)
    throw tooLowException();
  else 
    this->_level += 1;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {

  os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
  return (os);
}
