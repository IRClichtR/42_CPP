#include "define.hpp"

BitcoinExchange::BitcoinExchange(const char *filename) {
  
  try {this->initExchange(filename);}
  catch (CorruptedData & e){std::cerr << RED << "error: data.csv" << e.what() << RESET << std::endl;}
  catch (InvalidFD & e){std::cerr << RED << "error: data.csv" << e.what() << RESET << std::endl;}

  std::cout << "Exchange opened" << RESET << std::endl;
}

void BitcoinExchange::initExchange(filename) {
  
}
BitcoinExchange::~BitcoinExchange() {std::cout << "Exchange closed" << RESET << std::endl;}
