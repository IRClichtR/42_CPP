#include "define.hpp"

RobotomyRequestForm::RobotomyRequestForm() AForm("Robotomy Request Form", 72, 45) {std::cout << PURPLE << "RobotomyRequestForm: created!" << RESET << std::endl;}
  RobotomyRequestForm(const RobotomyRequestForm & );
  RobotomyRequestForm& operator=(const RobotomyRequestForm &);
  virtual ~RobotomyRequestForm();

  std::string&  getTarget() const;
  virtual void  execute(Bureaucrat const & ) const;
