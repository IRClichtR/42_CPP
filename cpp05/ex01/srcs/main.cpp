#include "define.hpp"

int main() {

  std::string uselessForm = "useless Form";
  std::string foo = "Average Joe";

  try {
    Form test(uselessForm, 1, 62);
    std::cout << test;
    try {
      Bureaucrat B(foo, 58);
      std::cout << B;
      B.signForm(test);
    }
    catch(std::exception& e) {
      std::err << RED << B.getName() << " couldn’t sign " << test.getName() << " because " << e.what() << RESET << std::endl;
  }

  }
  catch(std::exception& e) {
    std::cerr << RED << e.what() << RESET << std::endl;
  }

  return (0);
}
