#include "define.hpp"

int main(int ac, char **av) {

  if (ac != 2) {
    std::cout << RED << av[0] << ": error: invalid argument" << RESET << std::endl;
    return (1);
  }

  try {
    BitcoinExchange btc(av[1]);
    btc.displayValues()
  }
  catch (BitcoinExchange::InvalidFD & e) {
    std::cout << RED << av[0] << ": error: " << e.what() << RESET << std::endl;
  }
  catch (BitcoinExchange::InvalidFormat & e) {
    std::cout << RED << av[0] << ": error: " << e.what() << RESET << std::endl;
  }

  return (0);
}
