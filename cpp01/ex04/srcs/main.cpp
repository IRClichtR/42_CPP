#include "define.hpp"


int main(int ac, char **av) {

  if (ac != 4) {

    std::cerr << RED << "Invalid number of arguments" << RESET << std::endl;
    atexit(displayInstructions);
  }

  std::string fdPath(av[1]);
  std::string toSub(av[2]);
  std::string subStr(av[3]);
 
  subInFile sub = subInFile(fdPath, toSub, subStr);



  return (0);
}
