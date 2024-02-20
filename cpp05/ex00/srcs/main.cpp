#include "define.hpp"

int main(void) {

  Bureaucrat B("Philou de la compta", 2);
  std::cout << B;

  try {

    Bureaucrat C("Momo le Deglingo", 165);
    C.GradeTooLowException();
  }
  catch (const tooLowException& e) {
    std::cerr << "Oups:" << e.what() << std::endl;
  }
  return (0);
} 
