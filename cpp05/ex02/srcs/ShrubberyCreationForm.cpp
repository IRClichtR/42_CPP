#include "define.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery Creation Form", 145, 137) {std::cout << PURPLE << "ShrubberyCreationForm: created!" << RESET << std::endl;}

ShrubberyCreationForm(const ShrubberyCreationForm &other) AForm(other._name, other._gToSign, other._gToExec) {
    this->_target = other.getTarget();
    std::cout << PURPLE << "ShrubberyCreationForm: copy created!" << RESET << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {

    if (this != &other)
      this->_target = other.getTarget();
    std::cout << PURPLE << "ShrubberyCreationForm: Assignation operator called!" << RESET << std::endl;
    return (*this);
}

virtual ShrubberyCreationForm::~ShrubberyCreationForm() {std::cout << PURPLE << "ShrubberyCreationForm: Destroyed!" << RESET << std::endl;}

std::string&  ShrubberyCreationForm::getTarget() const {return (this->_target);}

virtual void ShrubberyCreationForm::execute(Bureaucrat const &executor ) const {

  if (!this->getSignStatus()) {
    throw AForm::NotSigned();
    return ;
  }
  if (executor.getGrade() <= this->getGradeToExec()) {

    std::string fileName = executor.getName() +"_shrubbery";
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
  else
    throw GradeTooLowException();
}
