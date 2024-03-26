#include "define.hpp"

BitcoinExchange::BitcoinExchange(const char *filename) : _filename(filename) {
  
  if (this->_filename == NULL)
    throw InvalidFD();
  try {this->initExchange();}
  catch (CorruptedData & e){std::cerr << RED << "error: data.csv: " << e.what() << RESET << std::endl;}
  catch (InvalidFD & e){std::cerr << RED << "error: data.csv: " << e.what() << RESET << std::endl;}

  std::cout << "Exchange opened" << RESET << std::endl;
}

void BitcoinExchange::initExchange() {
  
  std::string data = "data.csv";
  std::string sep = ",";
  const char *str = data.c_str();

  try {this->_data = putDataIntoMap(str, sep);}
  catch (InvalidFD & e) {std::cerr << RED << "error: " << data << ": "<< e.what() << RESET << std::endl;}
  catch (CorruptedData & e) {std::cerr << RED << "error: " << data << ": "<< e.what() << RESET << std::endl;}

  // try {this->checkDataMap()}
  // catch (InvalidDate & e) {std::cerr << RED << e.what() << RESET << std::endl;} 
  // catch (InvalidNumber & e) {std::cerr << RED << e.what() << RESET << std::endl;}
  // catch NegativeValue() {std::cerr << RED << e.what() << RESET << std::endl;}
}

// void BitcoinExchange::checkDataMap()
//

void  BitcoinExchange::displayBtcChart() {

  std::map<std::string, std::string>::iterator it;
  for (it = this->_data.begin() ; it != this->_data.end() ; it++)
    std::cout << "date: " << it->first << " | value: " << it->second << std::endl;
}

std::map<std::string, std::string> BitcoinExchange::putDataIntoMap(const char *filename, std::string sep) {

  std::ifstream inputFile(filename);
  if (!inputFile.is_open())
    throw InvalidFD();

  std::map<std::string, std::string>  map;
  std::string line;

  bool firstLine = true;
  while (std::getline(inputFile, line)) {
    if (firstLine) {
      firstLine = false;
      continue ;
    }
    std::istringstream lineStream(line);
    if (line.substr(10, 10 + sep.length() - 1) != sep)
      throw CorruptedData();

    std::string keyStr, valStr;
    keyStr = line.substr(0, 9);
    valStr = line.substr(9 + sep.length());
  }
  return (map);
}

BitcoinExchange::~BitcoinExchange() {std::cout << "Exchange closed" << RESET << std::endl;}
