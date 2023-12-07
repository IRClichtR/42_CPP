#include "Zombie.hpp"

bool  allDigit(std::string N) {

  for (std::string::iterator it = N.begin(); it != N.end(); it++) {
    if (!isdigit(*it))
      return (false);
  }

  return (true);
}


bool  validNbr(std::string N, unsigned long int *int_N) {

  if (*N.begin() == '-' || N.length() > 10)
    return (false);

  *int_N = std::strtoul(N.c_str(), NULL, 10);

  if (*int_N > 2147483647)
    return (false);

  return (true);
}

std::string defineName(void) {

  std::string input;

  while (1) {

    std::cout << CYAN << "Enter a cute Zombie Horde name: " << RESET;
    std::getline(std::cin,input);

    if (std::cin.eof()) {
      std::cout << RED << "EXIT Ctrl-D" << RESET << std::endl;
      exit(1);
    }

    if (!input.empty())
      break ;
    else {
      std::cout << RED << "They need to have a name!" << RESET << std::endl;
    }

  }

  return (input);
}


unsigned long int defineSize(void) {

  std::string N;
  unsigned long int int_N = 0;

  while (1) {

    std::cout << CYAN << "How many cute Zombies do you want in your Horde? (less than 2^31 - 1, be reasonnable!)" << RESET;
    std::getline(std::cin,N);

    if (std::cin.eof()) {
      std::cout << RED << "EXIT Ctrl-D" << RESET << std::endl;
      exit(1);
    }

    if (!N.empty() && allDigit(N) && validNbr(N, &int_N))
      break ;
    else
      std::cout << RED << "You fool!!!!" << RESET << std::endl;
    }

  return (int_N);

}


int   main(void) {

  std::string input;
  unsigned long int N = 0;

  //Get input from the user
  input = defineName();
  N = defineSize();

  //allocate a tab of N Zombies
  Zombie* Hordounette = zombieHorde((int)N, input);

  //Delete everything allocated with new
  delete [] Hordounette;

  return (0);
}
