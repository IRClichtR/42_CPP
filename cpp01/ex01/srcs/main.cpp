#include "Zombie.hpp"

int   main(void) {

  std::string input;

//Create Stack Zombie__________________________________________________________/
  while (1) {

    std::cout << CYAN << "Enter a cut Zombie name: " << RESET;
    std::getline(std::cin,input);

    if (std::cin.eof()) {
      std::cout << RED << "EXIT Ctrl-D" << RESET << std::endl;
      exit(1);
    }

    if (!input.empty()) {
      std::cout << CYAN << "*** Create Stack Zombie ***" << RESET << std::endl;
      randomChump(input);
      break ;
    }
    else {
      std::cout << RED << "*** Empty Name! ***" << RESET << std::endl;
    }
  }

  while (1) {

    std::cout << CYAN << "Enter a cut Zombie name: " << RESET;
    std::getline(std::cin,input);

    if (std::cin.eof()) {
      std::cout << RED << "EXIT Ctrl-D" << RESET << std::endl;
      exit(1);
    }

    if (!input.empty()) {
      std::cout << CYAN << "*** Create Heap Zombie ***" << RESET << std::endl;
      Zombie  *Heap = newZombie(input);
      delete Heap;
      break ;
    }
  }

  return (0);

}
