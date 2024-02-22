#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "define.hpp"

class RobotomyRequestForm : public AForm {

public:

  RobotomyRequestForm();
  RobotomyRequestForm(const RobotomyRequestForm & );
  RobotomyRequestForm& operator=(const RobotomyRequestForm &);
  virtual ~RobotomyRequestForm();

  std::string&  getTarget() const;
  virtual void  execute(Bureaucrat const & ) const;

private:
  
  std::string& _target;
};

#endif // !ROBOTOMYREQUESTFORM_HPP
