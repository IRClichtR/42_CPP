#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "define.hpp"

class ShrubberyCreationForm : public AForm {

public:

  ShrubberyCreationForm();
  ShrubberyCreationForm(ShrubberyCreationForm const & );
  ShrubberyCreationForm& operator=(ShrubberyCreationForm const &);
  virtual ~ShrubberyCreationForm();

  const std::string&  getTarget() const;
  virtual void        setTarget(std::string const & target);
  virtual void        execute(Bureaucrat const & ) const;

private:
  
  std::string _target;
};

#endif // !SHRUBBERYCREATIONFORM_HPP
