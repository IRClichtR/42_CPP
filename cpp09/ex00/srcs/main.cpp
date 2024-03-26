#include "define.hpp"

int main(int ac, char **av) {

  if (ac != 2) {
    std::cout << RED << av[0] << ": error: invalid argument" << RESET << std::endl;
    return (1);
  }

  try  {BitcoinExchange FTX(av[1]);}
  catch (CorruptedData & e){std::cerr << RED << "error: data.csv: " << e.what() << RESET << std::endl;}
  catch (InvalidFD & e){std::cerr << RED << "error: data.csv: " << e.what() << RESET << std::endl;}
  
  return 0;
}
