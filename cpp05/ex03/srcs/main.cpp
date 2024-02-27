#include "define.hpp"

int main() {

  std::string name1 = "Jacky";
  std::string name2 = "Ghislaine";
  std::string formTab[4] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm", "InvalidForm"};
  std::string foofoo = "foofooTarget";
  Bureaucrat B(name1, 5);
  Bureaucrat C(name2, 4);
  
  Intern intern;

  // Create invalid form

  try {
    AForm *shrubber = intern.makeForm(formTab[3], foofoo);
    B.signForm(*shrubber);
    C.executeForm(*shrubber);
    delete (shrubber);
  }
  catch (AForm::InvalidFormException &e) {
    std::cout << RED << "Intern could not create form because " << e.what() << RESET << std::endl;
  }




  return (0);
}
