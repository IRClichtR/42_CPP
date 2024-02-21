#include "define.hpp"

Form::Form(std::string name, unsigned int signGrade, unsigned int execGrade, bool signStatus) : _name(name), _gradeToSign(signGrade), _gradeToExec(execGrade), _isSigned(signStatus) {


  std::cout << PURPLE << "Form default Constructor called" << RESET << std::endl;
  std::cout << this << " created " << std::endl;
}

Form::Form(const Form& other) {

  *this = other;
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

void  Form::beSigned(bool value) {

  this->_isSigned = value;
}

bool  Form::getIsSigned() const {

  return (this->_isSigned);
}

const std::string& Form::getName() const {

  return (this->_name);
}

const unsigned int getGradeToSign() const {

  return (this->_gradeToSign);
}

const unsigned int getGradeToExec() const {

  return (this->_gradeToExec);
}
