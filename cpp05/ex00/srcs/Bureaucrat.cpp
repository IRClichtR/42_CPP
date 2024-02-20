#include "define.hpp"

Bureaucrat::Bureaucrat(std::string name, unsigned int level) : _name(name), _level(level) {}

Bureaucrat::Bureaucrat(const Bureaucrat &other) {

  this->_level = other._level;
  this->_name = other._name;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other) {

  if (&other != this) {
    this->_level = other._level;
    this->_name = other._name;
  }
  return (*this);
}

Bureaucrat::~Bureaucrat() {}

std::string&  Bureaucrat::getName() const {
  return (this->_name);
}

unsigned int Bureaucrat::getGrade() const {

  return (this->_level);
}

const void  Bureaucrat::GradeTooHighException() const {

  if (this->_level < 1)
    throw tooHighException();
} 

const void  Bureaucrat::GradeTooLowException() const {

  if (this->_level > 150)
    throw tooLowException();
}

void  incGrade() {

  if (this->_level - 1 == 0)
    throw tooHighException();
  else 
    this->_level -= 1;
}

void  decGrade() {

  if (this->_level + 1 == 0)
    throw tooLowException();
  else 
    this->_level += 1;
}

ostream& operator<<(ostream& os, const Bureaucrat& bureaucrat) {

  os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat._grade << bureaucrat.getGrade();
  return (os);
}
