#include "define.hpp"

int main() {

  // std::string name2 = "Jean";
  // std::string name1 = "Jacky";
  // std::string name3 = "Ghislaine";
  // std::string name4 = "Mireille";
  std::string name4 = "Murielle";
  // std::string name6 = "Paul";

  // sign everything
  // Bureaucrat B(name1, 5);

  // can execute shrubbery
  
  // Bureaucrat C(name2, 145);
  // Bureaucrat D(name3, 13);
  // 
  // can execute robotomy
  
  // Bureaucrat E(name5, 100);
  
  // can give presidential pardon

  Bureaucrat G(name4, 2);
  std::cout << G <<std::endl;

  // _____ shrubbery test ______ /
  
  // AForm *shrubber = new ShrubberyCreationForm();
  // std::cout << "TEST: try to execute without signing" << std::endl;
  // try {C.executeForm(*shrubber);}
  // catch (AForm::NotSignedException const &f) 
  // {
  //   std::cerr << RED << C.getName() << " failed to execute " << shrubber->getName() << " because " << f.what() << RESET << std::endl;
  // }
  // catch (std::exception &e) 
  // {
  //   std::cerr << RED << e.what() << RESET << std::endl;
  // }
  // B.signForm(*shrubber);
  // C.executeForm(*shrubber);
  // D.executeForm(*shrubber);
  // delete shrubber;
  //
  // // _____ shrubbery test ______ /
  // 
  // AForm *robot = new RobotomyRequestForm();
  // std::cout << "TEST: try to execute without signing" << std::endl;
  // try {E.executeForm(*robot);}
  // catch (AForm::NotSignedException const &f) 
  // {
  //   std::cerr << RED << E.getName() << " failed to execute " << robot->getName() << " because " << f.what() << RESET << std::endl;
  // }
  // catch (std::exception &e) 
  // {
  //   std::cerr << RED << e.what() << RESET << std::endl;
  // }
  // B.signForm(*robot);
  // E.executeForm(*robot);
  // D.executeForm(*robot);
  // delete robot;
  //
  //   // _____ shrubbery test ______ /
  // 
  // AForm *pardon = new PresidentialPardonForm();
  // std::cout << "TEST: try to execute without signing" << std::endl;
  // try {E.executeForm(*pardon);}
  // catch (AForm::NotSignedException const &f) 
  // {
  //   std::cerr << RED << E.getName() << " failed to execute " << pardon->getName() << " because " << f.what() << RESET << std::endl;
  // }
  // catch (std::exception &e) 
  // {
  //   std::cerr << RED << e.what() << RESET << std::endl;
  // }
  // B.signForm(*pardon);
  // E.executeForm(*pardon);
  // B.executeForm(*pardon);
  // delete pardon;
  //
  return (0);
}
