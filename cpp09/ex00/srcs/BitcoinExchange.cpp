#include "define.hpp"

BitcoinExchange::BitcoinExchange(const char *filename) : _filename(filename) {
  try {this->putPricesIntoMap();}
  catch (InvalidFD & e) {std::cerr << RED << "error: data.csv" << e.what() << RESET << std::endl;}
}

BitcoinExchange::~BitcoinExchange() {}


void BitcoinExchange::putPricesIntoMap() {
  
  std::string data = "data.csv";
  std::string sep = ",";
  const char *str = data.c_str();
  

  try {this->_btcVal = putDataIntoMap(str, sep);}
  catch (InvalidFD & e) {std::cerr << RED << "error: " << this->_filename << ": " << e.what() << RESET << std::endl;}

  try {this->checkDataMap()}
  catch (InvalidDate & e) {std::cerr << RED << e.what() << RESET << std::endl;} 
  catch (InvalidNumber & e) {std::cerr << RED << e.what() << RESET << std::endl;}
  catch NegativeValue() {std::cerr << RED << e.what() << RESET << std::endl;}

}

void  BitcoinExchange::displayBtcChart() {

  std::map<std::string, std::string>::iterator it;
  for (it = this->_btcVal.begin() ; it != this->_btcVal.end() ; it++)
    std::cout << "date: " << it->first << " | value: " << it->second << std::endl;
}

void  BitcoinExchange::processRequest(const char *request) {
  
  try {
    std::map<std::string, std::string> requestMap = putDataIntoMap(request, " | ");

    std::map<std::string, std::string>::iterator it;
    for (it = requestMap.begin() ; it != requestMap.end() ; ++it) {
      try {
        checkDate(it->first);
        checkVal(it->second, 0 , 1000);
        displayRequest(it);
      }
      catch (InvalidDate & e) {std::cerr << RED << e.what() << RESET << std::endl;} 
      catch (InvalidNumber & e) {std::cerr << RED << e.what() << RESET << std::endl;} 
      catch (NegativeValue & e) {std::cerr << RED << e.what() << RESET << std::endl;}
      catch (TooHighValue & e) {std::cerr << RED << e.what() << RESET << std::endl;}
    }
  }
  catch (InvalidFD & e) {std::cerr << RED << e.what() << RESET << std::endl;}
  catch (CorruptedData & e) {std::cerr << RED << e.what() << RESET << std::endl;}
}

void  BitcoinExchange::displayClosestVal(std::map<std::string, std::string>::iterator it) {

  std::map<std::string, std::string>::iterator closestEntry = this->findClosestEntry(it);

  std::string dateSearched = it->first;
  std::string valSearched = it->second;
  double res;

  res = std::atof(closestEntry->second) * std::atof(valSearched);
  std::cout << dateSearched << " => " < valSearched << " = " << res << std::endl;
}

std::map<std::string, std::string>::iterator> BitcoinExchange::findClosestEntry(std::map<std::string, std::string>::iterator it) {

  std::map<std::string, std::string>::iterator closestEntry = this->_btcVal.begin();
  int minDiff = std::numeric_limits<int>::max;

  for (std::map<std::string, std::string>::iterator iter = this->_btcVal.begin() ; iter != this->_btcVal.end() ; it++) {
    int diff = dateDiff(it->first, iter->first);
    if (diff < mindiff) {
      minDiff = diff;
      closestEntry = iter;
    }
  }

  return (closestEntry);
}

void  BitcoinExchange::displayRequest(std::map<std::string, std::string>::iterator it) {

  std::string dateSearched = it->first;
  std::string valSearched = it->second;
  double res;

  std::map<std::string, std::string>::iterator btcIt = this->_btcVal.find(dateSearched);
  if (btcIt != this->_btcVal.end()) {
    res = std::atof(this->_btcIt->second) * std::atof(valSearched);
    std::cout << dateSearched << " => " < valSearched << " = " << res << std::endl;
  }
  else
    this->displayClosestVal(it);

}
