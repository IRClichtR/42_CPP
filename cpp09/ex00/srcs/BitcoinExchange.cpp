#include "define.hpp"

BitcoinExchange::BitcoinExchange(const char *filename) : _filename(filename) {
  
  if (this->_filename == NULL)
    throw InvalidFD();
  try {this->initExchange();}
  catch (CorruptedData & e){std::cerr << RED << "error: data.csv: " << e.what() << RESET << std::endl;}
  catch (InvalidFD & e){std::cerr << RED << "error: data.csv: " << e.what() << RESET << std::endl;}
  // this->displayBtcChart();

  std::cout << "Exchange opened" << RESET << std::endl;
}

void BitcoinExchange::initExchange() {
  
  std::string data = "data.csv";
  std::string sep = ",";
  const char *str = data.c_str();

  try {this->_data = putDataIntoMap(str, sep);}
  catch (InvalidFD & e) {std::cerr << RED << "error: " << data << ": "<< e.what() << RESET << std::endl;}
  catch (CorruptedData & e) {std::cerr << RED << "error: " << data << ": "<< e.what() << RESET << std::endl;}

  try {this->checkMap(this->_data, 0, std::numeric_limits<int>::max());}
  catch (InvalidDate & e) {std::cerr << RED << e.what() << RESET << std::endl;} 
  catch (InvalidNumber & e) {std::cerr << RED << e.what() << RESET << std::endl;}
  catch (NegativeValue & e) {std::cerr << RED << e.what() << RESET << std::endl;}
}


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
    std::size_t sepPos = line.find(sep);
    if (firstLine) {
      firstLine = false;
      continue ;
    }
    std::istringstream lineStream(line);
    if (!firstLine && (sepPos != 10 || sepPos + sep.length() > line.length() || (!isdigit(line[sepPos + sep.length()]) && line[sepPos + sep.length()] != '+' && line[sepPos + sep.length()] != '-'))) {
      // std::cout << line << std::endl;
      // std::cout << "sepPos= " << sepPos << std::endl;
      // size_t a = sepPos + sep.length();
      // bool b = sepPos + sep.length() > line.length();
      // std::cout << "addition sepPos + sep.length()= " << a << std::endl;
      // if (b == true)
      //   std::cout << "addition is greater than line length()" << std::endl;
      // else 
      //   std::cout << "addition is NOT greater than line length()" << std::endl;
      // bool c = !isdigit(line[sepPos + sep.length() - 1]);
      // if (c == true)
      //   std::cout << "the char is not a digit: " << line[sepPos + sep.length()] << std::endl;
      throw CorruptedData();
    }
    std::string keyStr, valStr;
    keyStr = line.substr(0, 10);
    valStr = line.substr(10 + sep.length());
    map[keyStr] = valStr;
  }
  return (map);
}

void  BitcoinExchange::checkMap(std::map<std::string, std::string> map, int low, int high) {

  std::map<std::string, std::string>::iterator it;

  for (it = map.begin() ; it != map.end() ; it++) {
    try {
      checkDate(it->first);
      checkVal(it->second, low, high);
    }
    catch (InvalidNumber & e) {std::cerr << RED << e.what() << RESET << std::endl;}
    catch (NegativeValue & e) {std::cerr << RED << e.what() << RESET << std::endl;}
    catch (TooHighValue & e) {std::cerr << RED << e.what() << RESET << std::endl;}
  }
}

BitcoinExchange::~BitcoinExchange() {std::cout << "Exchange closed" << RESET << std::endl;}
