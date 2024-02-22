#include "define.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential Pardon Form", 25, 5) {std::cout << PURPLE << "PresidentialPardonForm: created!" << RESET << std::endl;}

PresidentialPardonForm(const PresidentialPardonForm &other) AForm(other._name, other._gToSign, other._gToExec) {
    this->_target = other.getTarget();
    std::cout << PURPLE << "PresidentialPardonForm: copy created!" << RESET << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {

    if (this != &other)
      this->_target = other.getTarget();
    std::cout << PURPLE << "PresidentialPardonForm: Assignation operator called!" << RESET << std::endl;
    return (*this);
}

virtual PresidentialPardonForm::~PresidentialPardonForm() {std::cout << PURPLE << "PresidentialPardonForm: Destroyed!" << RESET << std::endl;}

std::string&  PresidentialPardonForm::getTarget() const {return (this->_target);}

virtual void PresidentialPardonForm::execute(Bureaucrat const &executor ) const {

  if (!this->getSignStatus()) {
    throw AForm::NotSigned();
    return ;
  }
  
  if (executor.getGrade() <= this->getGradeToExec())
    std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
  else 
    throw GradeToLowException();
}

