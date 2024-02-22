#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "define.hpp"

class PresidentPardonForm : public AForm {

public:

  PresidentPardonForm();
  PresidentPardonForm(const PresidentPardonForm & );
  PresidentPardonForm& operator=(const PresidentPardonForm &);
  virtual ~PresidentPardonForm();

  std::string&  getTarget() const;
  virtual void  execute(Bureaucrat const & ) const;

private:
  
  std::string& _target;
};

#endif // !PRESIDENTIALPARDONFORM_HPP
