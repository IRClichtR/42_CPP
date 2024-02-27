#include "define.hpp"

Form* Intern::makeForm(std::string &name, std::string& target) {

  const std::string tab[3] {"RobotomyRequestForm", "ShrubberyCreationForm", "PresidentialPardonForm"};

  for (int i = 0; i < 3; i++)
    if (tab[i] == name)
      break ;

  switch (i) {

    case 0:
      Form *form = new RobotomyRequestForm();
      form.setTarget(target);
      break ;

    case 1:
      Form *form = new ShrubberyCreationForm();
      form.setTarget(target);
      break ;

    case 2:
      Form *form = new PresidentialPardonForm();
      form.setTarget(target);
      break ;

    defaut:
      throw ();
      return (nullptr);
  }
  
  return form;
}
