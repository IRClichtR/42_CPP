#include "define.hpp"

Form::Form(std::string& name, unsigned int gToSign, unsigned int gToExec) : _name(name), _gToSign(gToSign), _gToExec(gToExec), _signStatus(false) {

  this->checkGrade();
  std::cout << PURPLE << "Default constructor called" << RESET << std::endl;
}

Form::Form(const Form &other) : _name(other._name), _gToSign(other._gToSign), _gToExec(other._gToExec), _signStatus(false) {

  this->checkGrade();
  std::cout << PURPLE << "Copy constructor called" << RESET << std::endl;
}

Form& Form::operator=(const Form &other) {
  
  this->checkGrade();
  if (this != &other)
    this->_signStatus = other.getSignStatus();

  std::cout << PURPLE << "Assignment operator called" << RESET << std::endl;
  return (*this);
}

Form::~Form() {std::cout << PURPLE << "Default destructor called" << RESET << std::endl;}
  

const std::string&  Form::getName() const {return (this->_name);}
unsigned int        Form::getGradeToSign() const {return (this->_gToSign);}
unsigned int        Form::getGradeToExec() const {return (this->_gToExec);}
bool                Form::getSignStatus() const {return (this->_signStatus);}

void  Form::checkGrade() const {

  if (this->_gToExec < 1 || this->_gToSign < 1)
    throw GradeTooHighException();
  else if (this->_gToExec > 150 || this->_gToSign > 150)
    throw GradeTooLowException();
}

void  Form::beSigned(const Bureaucrat&) {

  this->checkGrade();
  this->_signStatus = true;
}

std::ostream& operator<<(std::ostream& os, const Form& F) {

  F.checkGrade();
  std::string signStatus = F.getSignStatus() ? "Signed" : "Not Signed"; 

  os << F.getName() << " | Grade to Sign: " << F.getGradeToSign() << " | Grade to Exec: " << F.getGradeToExec() << " | Status: " << signStatus << std::endl;
  return (os); 
}
