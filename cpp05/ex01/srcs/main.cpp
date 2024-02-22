#include "define.hpp"

int main() {

  std::string uselessForm = "useless Form";
  std::string foo = "Average Joe";
  std::string foo2 = "Boss";

  try {
    Form test(uselessForm, 1, 62);
    std::cout << test;

    try {
      Bureaucrat B(foo, 58);
      std::cout << B;

      try {B.signForm(test);}
      catch (std::exception& e) {
        std::cerr << RED << B.getName() + " couldn’t sign " + test.getName() + " because ";
        std::cerr << e.what() << RESET << std::endl;
      }
    }
    catch (std::exception& e) {std::cerr << RED << e.what() << RESET << std::endl;}

    try {
      Bureaucrat C(foo2, 1);
      std::cout << C;

        try {C.signForm(test);}
        catch (std::exception &e) {
          std::cerr << RED << C.getName() + " couldn’t sign " + test.getName() + " because ";
          std::cerr << e.what() << RESET << std::endl;
        }
    }
    catch (std::exception& e) {std::cerr << RED << e.what() << RESET << std::endl;}
  }
  catch (std::exception& e) {std::cerr << RED << e.what() << RESET << std::endl;}

  return (0);
}
