#include "define.hpp"


int main(int ac, char **av) {

  std::string toSed;
  std::string repStr;

  if (ac != 4) {

    std::cerr << RED << "Invalid number of arguments" << RESET << std::endl;
    atexit(displayInstructions);
    return (0);
  }

  if (!streamEditor::checkFileName(av[1])) {
     atexit(errOpen);
     return (0);
  }

  streamEditor::getIfs(av[1], &toSed);
  repStr = streamEditor::sedMaker(&toSed, av[2], av[3]);
  streamEditor::saveInFile(av[1], repStr);

  return (0);
}
