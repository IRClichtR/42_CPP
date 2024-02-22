#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "define.hpp"

class ShrubberyCreationForm : public AForm {

public:

  ShrubberyCreationForm();
  ShrubberyCreationForm(const ShrubberyCreationForm & );
  ShrubberyCreationForm& operator=(const ShrubberyCreationForm &);
  virtual ~ShrubberyCreationForm();

  std::string&  getTarget() const;
  virtual void  execute(Bureaucrat const & ) const;

private:
  
  std::string& _target;
};

#endif // !SHRUBBERYCREATIONFORM_HPP
