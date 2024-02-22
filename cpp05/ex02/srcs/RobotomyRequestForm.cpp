#include "define.hpp"
#include <random> 

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Request Form", 72, 45) {std::cout << PURPLE << "RobotomyRequestForm: created!" << RESET << std::endl;}

RobotomyRequestForm(const RobotomyRequestForm &other) AForm(other._name, other._gToSign, other._gToExec) {
    this->_target = other.getTarget();
    std::cout << PURPLE << "RobotomyRequestForm: copy created!" << RESET << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {

    if (this != &other)
      this->_target = other.getTarget();
    std::cout << PURPLE << "RobotomyRequestForm: Assignation operator called!" << RESET << std::endl;
    return (*this);
}

virtual RobotomyRequestForm::~RobotomyRequestForm() {std::cout << PURPLE << "RobotomyRequestForm: Destroyed!" << RESET << std::endl;}

std::string&  RobotomyRequestForm::getTarget() const {return (this->_target);}

virtual void RobotomyRequestForm::execute(Bureaucrat const &executor ) const {

  if (!this->getSignStatus()) {
    throw AForm::NotSigned();
    return ;
  }

  if (executor.getGrade() <= this->getGradeToExec()) {
    if (headOrTail())
      std::cout << GREEN << this->getTarget() << " has been robotomized" << RESET << std::endl;
    else 
      std::cout << RED << "Robotomy failed on " << this->getTarget() << RESET << std::endl;
  }
  else 
    throw GradeTooLowException();
}

bool headOrTail() {

  std::srand(std::time(0));
  int randNb = std::rand();

  return (randNb % 2 = 0 ? true : false);
}
