#include "define.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential Pardon Form", 25, 5), _target("default") {std::cout << PURPLE << "PresidentialPardonForm: created!" << RESET << std::endl;}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other) : AForm(other.getName(), other.getGradeToSign(), other.getGradeToExec()), _target(other._target) {
    std::cout << PURPLE << "PresidentialPardonForm: copy created!" << RESET << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {

    if (this != &other)
      this->_target = other.getTarget();
    std::cout << PURPLE << "PresidentialPardonForm: Assignation operator called!" << RESET << std::endl;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {std::cout << PURPLE << "PresidentialPardonForm: Destroyed!" << RESET << std::endl;}

const std::string&  PresidentialPardonForm::getTarget() const {return (this->_target);}
void  PresidentialPardonForm::setTarget(std::string const &target) {this->_target = target;}

void PresidentialPardonForm::execute(Bureaucrat const &executor ) const {

  if (!this->getSignStatus()) {
    throw AForm::NotSignedException();
    return ;
  }
  
  if (executor.getGrade() <= this->getGradeToExec())
    std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
  else 
    throw GradeTooLowException();
}

