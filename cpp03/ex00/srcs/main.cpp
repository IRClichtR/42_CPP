#include "define.hpp"

bool DEBUG = false;

int main(int ac, char **av) {

  std::string input;

  if (checkArgs(ac, av) == false) {

    displayInstructions();
    return (1);
  }

  ClapTrap  bob("Bob");
  
  while (1) {

    std::cout << BLUE << "enter an action <attack> <heal> <take little damage> <take critical damage>: " << RESET;

    std::getline(std::cin, input);

    if (std::cin.eof())
      break ;

    if (!input.empty()) 
      break ;
    else
      std::cout << RED << "Invalid command! ***the ClapTrap makes an awkward move***" << RESET << std::endl;

  }


  }

  return (0);
}
  //
  // if (ac > 2) {
  //
  //   std::cout << RED << "Invalid number of arguments" << RESET << std::endl;
  //   displayInstructions();
  // }
  // else if (ac == 1) {
  //
  //   displayDebugInstructions(DEBUG);
  //   // std::cout << RED << "for more debugging info rerun with --debug" << RESET << std::endl;
  // }
  // else if (ac == 2) {
  //
  //   DEBUG = true;
  //   displayDebugInstructions(DEBUG);
  //   // std::cout << RED << "-----------------------debug mode activated-----------------------" << RESET << std::endl;
  //   // std::cout << std::endl;
  //   // std::cout << std::endl;
  //   // std::cout << std::endl;
  // }
