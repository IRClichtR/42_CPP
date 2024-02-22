#include "define.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(std::string& name, unsigned int grade) : _name(name), _grade(grade) {
  
  this->checkGrade();
  std::cout << PURPLE << "Bureaucrat Default Constructor called" << RESET << std::endl; 
}


Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name), _grade(other._grade) {

  this->checkGrade();
  std::cout << PURPLE << "Bureaucrat copy Constructor called" << RESET << std::endl; 
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other) {

  this->checkGrade();
  if (this != &other)
    this->_grade = other.getGrade();

  std::cout << PURPLE << "Bureaucrat Assignment Operator called" << RESET << std::endl; 
  return (*this);
}

Bureaucrat::~Bureaucrat() {std::cout << PURPLE << "Bureaucrat Default Destructor called" << RESET << std::endl;}

const std::string&  Bureaucrat::getName() const {return (this->_name);}

unsigned int Bureaucrat::getGrade() const {return (this->_grade);}

void  Bureaucrat::checkGrade() const {

  if (this->getGrade() > 150)
    throw GradeTooLowException();
  else if (this->getGrade() < 1)
    throw GradeTooHighException();
  return ;
}

void  Bureaucrat::upGrade() {

  this->_grade--;
  this->checkGrade();
  return ;
}

void  Bureaucrat::downGrade() {

  this->_grade++;
  this->checkGrade();
  return ;
}

void  Bureaucrat::signForm(AForm& F) {

  if (F.getGradeToSign() < this->_grade) {
    // std::string error_msg = this->getName() + " couldn’t sign " + F.getName() + " because ";
    throw(GradeTooLowException());
  }
  else {
    F.beSigned(*this);
    std::cout << GREEN << this->getName() << " signed " << F.getName() << RESET << std::endl;
  }
}

  void  Bureaucrat::executeForm(AForm const &form) {

    try {
      form.execute(this);
      std::cout << this->getName() << " executed " << form.getName() << std::endl;
    }
    catch (std::exception &e) {
      std::cerr << RED << this->getName() << " failed to execute " << form.getName() << " because of :" << e.what();
    }
  }

std::ostream& operator<<(std::ostream& os, const Bureaucrat& B) {

  B.checkGrade();
  os << B.getName() << ", bureaucrat grade " << B.getGrade() << std::endl;
  return (os);
}
