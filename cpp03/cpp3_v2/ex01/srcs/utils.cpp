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

    std::cout << BLUE << "enter an action <attack> <heal> <damage> <guard gate> <exit>: " << RESET;

    std::getline(std::cin, input);

    if (std::cin.eof())
      break ;

    if (!input.empty())
      break ;
    else if (!input.compare("exit"))
      exit(1);
    else
      std::cout << RED << "Invalid command! ***the ClapTrap makes an awkward move***" << RESET << std::endl;

  }

  return (input);
}

unsigned int  getIntArg(std::string action) {

  unsigned int  uintAmount;
  std::string   amount;

  std::cout << BLUE << "Enter amount of " << action << ": " << RESET;
  std::getline(std::cin, amount);

  std::istringstream  iss(amount);
  iss >> uintAmount;
  if (DEBUG) {
    std::cout << RED << "amount entered=" << uintAmount << RESET << std::endl;
  }

  return (uintAmount);
}

std::string getStrArg(std::string action) {

  std::string target;

  std::cout << BLUE << "Enter target of " << action << ": " << RESET;
  std::getline(std::cin, target);
  if (DEBUG) {
    std::cout << RED << "target=" << target << RESET << std::endl;
  }

  return (target);
}
