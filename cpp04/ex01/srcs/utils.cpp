#include "define.hpp"

bool DEBUG = false;

bool  checkArgs(int ac, char **av) {

  std::string arg;

  if (ac > 1)
    arg = av[1];

  if (ac == 1) {

    DEBUG = false;
    std::cout << PURPLE 
      << "Program launch without debug flag rerun with --debug to see all debug messages"
      << RESET << std::endl;
    return (true);
  }
  else if (ac == 2 && arg.compare("--debug") == 0) {

   std::cout << PURPLE 
      << "Program launch with debug flag"
      << RESET << std::endl;
    DEBUG = true;
    return (true);
  }

  return (false);
}

std::string getUsrInput(void) {

  std::string input;

  while (1) {

    std::cout << BLUE << "enter an animal name <Animal> <WrongAnimal> <Dog> <Cat> <WrongCat> <exit>: " << RESET;

    std::getline(std::cin, input);

    if (std::cin.eof())
      break ;

    if (!input.compare("Dog") 
        || !input.compare("Cat") 
        || !input.compare("Animal") 
        || !input.compare("WrongAnimal") 
        || !input.compare("WrongCat") 
        || !input.compare("exit"))
      break ;
    else
      std::cout << RED << "Invalid command! *** a strange thing tries to raise from the ground but disappear instantly ***" << RESET << std::endl;

  }

  return (input);
}
