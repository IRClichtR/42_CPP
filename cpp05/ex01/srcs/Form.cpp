#include "define.hpp"

Form::Form(std::string name, unsigned int signGrade, unsigned int execGrade, bool signStatus) : _name(name), _gradeToSign(signGrade), _gradeToExec(execGrade), _isSigned(signStatus) {

  try {
    if (this->_gradeToSign < 1 || this->_gradeToExec < 1)
      throw Form::GradeTooHighException();
    if (this->_gradeToSign > 150 || this->_gradeToExec > 150)
      throw Form::GradeTooLowException();
  }
  catch (Form::GradeTooLowException& e) {
    std::cout << this << RED << e.what() << RESET << std::endl;
  }
  catch (Form::GradeTooHighException& e) {
    std::cout << this << RED << e.what() << RESET << std::endl;
  }

  std::cout << PURPLE << "Form default Constructor called" << RESET << std::endl;
  std::cout << GREEN << this << " created " << RESET << std::endl;
}

Form::Form(const Form& other): _name(other._name), _gradeToSign(other._gradeToSign), _gradeToExec(other._gradeToExec), _isSigned(other._isSigned) {

  std::cout << PURPLE << "Form copy Constructor called" << RESET << std::endl;
  std::cout << this << " created " << std::endl;
}

Form& Form::operator=(const Form &other) {

  std::cout << PURPLE << "Form assignment copy Constructor called" << RESET << std::endl;

  if (this != &other)
    this->_isSigned = other.getIsSigned();
  return (*this);
}

Form::~Form() {

  std::cout << PURPLE << "Form Destructor called" << RESET << std::endl;
}

void  Form::beSigned(bool value, const Bureaucrat& signing) {

  try {
    if (signing.getGrade() < this->getGradeToSign())
      throw (Form::GradeTooHighException());
    else if (signing.getGrade() > this->getGradeToSign())
      throw (Form::GradeTooLowException());
  }
  catch (Form::GradeTooLowException& e) {
    std::cout << this << RED << e.what() << RESET << std::endl;
  }
  catch (Form::GradeTooHighException& e) {
    std::cout << this << RED << e.what() << RESET << std::endl;
  }

  this->_isSigned = value;
}

bool  Form::getIsSigned() const {

  return (this->_isSigned);
}

const std::string& Form::getName() const {

  return (this->_name);
}

unsigned int Form::getGradeToSign() const {

  return (this->_gradeToSign);
}

unsigned int Form::getGradeToExec() const {

  return (this->_gradeToExec);
}

std::ostream& operator<<(std::ostream& os, const Form& form) {

  os << form.getName() << "_sign " << form.getGradeToSign() << " _exec " << form.getGradeToExec() << std::endl;
  return (os);
}
