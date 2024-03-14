#include "define.hpp"

BitcoinExchange::BitcoinExchange(const char *filename) : _filename(filename) {
  try {this->putPricesIntoMap();}
  catch (InvalidFD & e) {std::cerr << RED << "error: data.csv" << e.what() << RESET << std::endl;}
}

BitcoinExchange::~BitcoinExchange() {}


void BitcoinExchange::putPricesIntoMap() {
  
  std::string data = "data.csv";
  const char *str = data.c_str();

  try {this->_btcVal = putDataIntoMap(str, ',');}
  catch (InvalidFD & e) {std::cerr << RED << "error: " << this->_filename << ": " << e.what() << RESET << std::endl;}

  try {this->checkDataMap()}
  catch (InvalidDate & e) {} 
  catch (InvalidNumber & e) {}
  catch NegativeValue() {}

}

void  BitcoinExchange::displayBtcChart() {

  std::map<std::string, std::string>::iterator it;
  for (it = this->_btcVal.begin() ; it != this->_btcVal.end() ; it++)
    std::cout << "date: " << it->first << " | value: " << it->second << std::endl;
}

void  processRequest() {

  std::ifstream requestFile(this->_filename);
  if(!requestFile.is_open())
    throw InvalidFD();
  if (!this->checkRequestFile())
    throw InvalidRequestFormat();
 
  std::map<std::string, std::string> requestMap = putDataIntoMap(this->_filename, '|');

  std::map<std::string, std::string>::iterator it;
  for (it = requestMap.begin() ; it != requestMap.end() ; ++it) {
    try {
      checkDate(it->first);
      checkVal(it->second, 0 , 1000);
      this->displayRequest(*it);
    }
    catch (InvalidDate & e) {} 
    catch (InvalidNumber & e) {} 
    catch (NegativeValue & e) {}
    catch (TooHighValue & e) {}
  }
}

void  displayRequest()
