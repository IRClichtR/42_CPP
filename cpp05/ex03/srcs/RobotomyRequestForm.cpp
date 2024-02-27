#include "define.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Request Form", 72, 45), _target("default") {
  std::cout << PURPLE << "RobotomyRequestForm: created!" << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) : AForm(other.getName(), other.getGradeToSign(), other.getGradeToExec()), _target(other._target) {
  std::cout << PURPLE << "RobotomyRequestForm: copy created!" << RESET << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {

    if (this != &other)
      this->_target = other.getTarget();
    std::cout << PURPLE << "RobotomyRequestForm: Assignation operator called!" << RESET << std::endl;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {std::cout << PURPLE << "RobotomyRequestForm: Destroyed!" << RESET << std::endl;}

const std::string&  RobotomyRequestForm::getTarget() const {return (this->_target);}
void  RobotomyRequestForm::setTarget(std::string const &target) {this->_target = target;}

void RobotomyRequestForm::execute(Bureaucrat const &executor ) const {

  if (!this->getSignStatus()) {
    throw AForm::NotSignedException();
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

  return (randNb % 2 == 0 ? true : false);
}
