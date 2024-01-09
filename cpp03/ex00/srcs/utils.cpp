#include "define.hpp"

bool  checkArgs(int ac, char **av) {

  if (ac == 1) {

    DEBUG = false;
   std::cout << PURPLE 
      << "Program launch without debug flag rerun with --debug to see all debug messages"
      << RESET << std::endl;
    return (true);
  }
  else if (ac == 2 && (std::string)av[1].compare("--debug") == 0) {

   std::cout << PURPLE 
      << "Program launch with debug flag"
      << RESET << std::endl;
    DEBUG = true;
    return (true);
  }
  else
    return (false);
}

unsigned int  getInArg(std::string action) {

  std::cout << BLUE << "Enter amount of " << action << ": " << RESET;
}
