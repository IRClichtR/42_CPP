#include "define.hpp"

Intern::Intern() {std::cout << PURPLE << "Intern default constructor called" << RESET << std::endl;}

Intern::Intern(Intern const &other) {
  (void) other;
  std::cout << PURPLE << "Intern copy constructor called" << RESET << std::endl;
}

Intern& Intern::operator=(Intern const &other) {
  (void) other;
  return (*this);
}

Intern::~Intern() {std::cout << PURPLE << "Intern default destructor called" << RESET << std::endl;}

AForm* Intern::makeForm(std::string &name, std::string& target) {

  const std::string tab[3] = {"RobotomyRequestForm", "ShrubberyCreationForm", "PresidentialPardonForm"};
  int i;

  for (i = 0; i < 4; i++)
    if (tab[i] == name)
      break ;

  AForm * form = NULL;
  switch (i) {

    case 0:
    {
      AForm *form = new RobotomyRequestForm();
      form->setTarget(target);
      std::cout << GREEN << "Intern creates" << form->getName() << RESET << std::endl;
      return (form);
    }
    case 1:
    {
      AForm *form = new ShrubberyCreationForm();
      form->setTarget(target);
      std::cout << GREEN << "Intern creates" << form->getName() << RESET << std::endl;
      return form;
    }
    case 2:
    {
      AForm *form = new PresidentialPardonForm();
      form->setTarget(target);
      std::cout << GREEN << "Intern creates " << form->getName() << RESET << std::endl;
      return form;
    }
    default:
      throw AForm::InvalidFormException();
  }
  return (form);
}
