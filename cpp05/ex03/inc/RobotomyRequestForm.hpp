#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "define.hpp"

class RobotomyRequestForm : public AForm {

public:

  RobotomyRequestForm();
  RobotomyRequestForm(const RobotomyRequestForm & );
  RobotomyRequestForm& operator=(const RobotomyRequestForm &);
  virtual ~RobotomyRequestForm();

  const std::string&  getTarget() const;
  virtual void        setTarget(std::string const & target);
  virtual void        execute(Bureaucrat const & ) const;

private:
  
  std::string         _target;
};

bool                  headOrTail();

#endif // !ROBOTOMYREQUESTFORM_HPP
