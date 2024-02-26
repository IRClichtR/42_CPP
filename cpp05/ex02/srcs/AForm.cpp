#include "define.hpp"

AForm::AForm(std::string name, unsigned int gToSign, unsigned int gToExec) : _name(name), _gToSign(gToSign), _gToExec(gToExec), _signStatus(false) {

  this->checkGrade();
  std::cout << PURPLE << "AForm: Default constructor called" << RESET << std::endl;
}

AForm::AForm(const AForm &other) : _name(other._name), _gToSign(other._gToSign), _gToExec(other._gToExec), _signStatus(false) {

  this->checkGrade();
  std::cout << PURPLE << "AForm: Copy constructor called" << RESET << std::endl;
}

AForm& AForm::operator=(const AForm &other) {
  
  this->checkGrade();
  if (this != &other)
    this->_signStatus = other.getSignStatus();

  std::cout << PURPLE << "AForm: Assignment operator called" << RESET << std::endl;
  return (*this);
}

AForm::~AForm() {std::cout << PURPLE << "AForm: Default destructor called" << RESET << std::endl;}
  

const std::string&  AForm::getName() const {return (this->_name);}
unsigned int        AForm::getGradeToSign() const {return (this->_gToSign);}
unsigned int        AForm::getGradeToExec() const {return (this->_gToExec);}
bool                AForm::getSignStatus() const {return (this->_signStatus);}

void  AForm::checkGrade() const {

  if (this->_gToExec < 1 || this->_gToSign < 1)
    throw GradeTooHighException();
  else if (this->_gToExec > 150 || this->_gToSign > 150)
    throw GradeTooLowException();
}

void  AForm::beSigned(const Bureaucrat&) {

  this->checkGrade();
  this->_signStatus = true;
}

void AForm::execute(Bureaucrat const &) const {return ;}
void AForm::setTarget(std::string const & target) {
  (void) target;
  return ;}

// void                AForm::getTarget(Bureaucrat const &) const {return ;}

std::ostream& operator<<(std::ostream& os, const AForm& F) {

  F.checkGrade();
  std::string signStatus = F.getSignStatus() ? "Signed" : "Not Signed"; 

  os << F.getName() << " | Grade to Sign: " << F.getGradeToSign() << " | Grade to Exec: " << F.getGradeToExec() << " | Status: " << signStatus << std::endl;
  return (os); 
}
