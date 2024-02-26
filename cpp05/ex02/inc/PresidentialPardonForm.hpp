#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "define.hpp"

class PresidentialPardonForm : public AForm {

public:

  PresidentialPardonForm();
  PresidentialPardonForm(PresidentialPardonForm const &);
  PresidentialPardonForm& operator=(PresidentialPardonForm const &);
  virtual ~PresidentialPardonForm();

  const std::string&  getTarget() const;
  virtual void        setTarget(std::string const & target);
  virtual void        execute(Bureaucrat const & ) const;

private:
  
  std::string         _target;
};

#endif // !PRESIDENTIALPARDONFORM_HPP
