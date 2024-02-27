#include "define.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery Creation Form", 145, 137), _target("default") {std::cout << PURPLE << "ShrubberyCreationForm created!" << RESET << std::endl;}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) : AForm(other.getName(), other.getGradeToSign(), other.getGradeToExec()), _target(other._target) {
    std::cout << PURPLE << "ShrubberyCreationForm: copy created!" << RESET << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other) {

    if (this != &other)
      this->_target = other.getTarget();
    std::cout << PURPLE << "ShrubberyCreationForm: Assignation operator called!" << RESET << std::endl;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {std::cout << PURPLE << "ShrubberyCreationForm: Destroyed!" << RESET << std::endl;}

const std::string&  ShrubberyCreationForm::getTarget() const {return (this->_target);}
void  ShrubberyCreationForm::setTarget(std::string const &target) {this->_target = target;}

void ShrubberyCreationForm::execute(Bureaucrat const &executor ) const {

  if (!this->getSignStatus()) {
    throw AForm::NotSignedException();
    return ;
  }

  if (executor.getGrade() <= this->getGradeToExec()) {

    std::string fileName = executor.getName() + "_shrubbery";
    std::ofstream ofs(fileName.c_str());
    ofs << "       *()-_=+[{]            " << std::endl; 
    ofs << "    %^&*()-_=+[{]};:',       " << std::endl; 
    ofs << "  #$%^&*()-_=+[{]};:',<.>    " << std::endl; 
    ofs << "  #$%^&*()-_=+[{]};:',<.>/?  " << std::endl; 
    ofs << " @#$%^&*()-_=+[{]};:',<.>/?`~" << std::endl; 
    ofs << "!@#$%^&*()-_=+[{]};:',<.>/?`~" << std::endl; 
    ofs << "!@#$%^&*()-_=+[{]};:',<.>/?`~" << std::endl; 
    ofs << "!@#$%^&*()-_=+[{]};:',<.>/?`~" << std::endl; 
    ofs << "!@#$%^&*()-_=+[{]};:',<.>/?`~" << std::endl; 
    ofs << " @#$%^&*()-_=+[{]};:',<.>/?  " << std::endl; 
    ofs << "  #$%^&*()-_=+[{]};:',<.>/?  " << std::endl; 
    ofs << "  #$%^&*()-_=+[{]};:',<.>    " << std::endl; 
    ofs << "     ^&*()-_=+[{]};:',       " << std::endl; 
    ofs << "        ()-_=+               " << std::endl; 
    ofs << "        ()-_=+               " << std::endl; 
    ofs << "        ()-_=+               " << std::endl; 
    ofs << "!@#$%^&*()-_=+[{]};:',<.>/?`~" << std::endl; 
    ofs << "!@#$%^&*()-_=+[{]};:',<.>/?`~" << std::endl; 
    ofs << "!@#$%^&*()-_=+[{]};:',<.>/?`~" << std::endl; 
    ofs << "!@#$%^&*()-_=+[{]};:',<.>/?`~" << std::endl; 

  }
  else {
    throw GradeTooLowException();
  }
}
