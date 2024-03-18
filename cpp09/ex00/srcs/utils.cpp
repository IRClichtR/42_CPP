#include "define.hpp"

std::map<std::string, std::string> putDataIntoMap(const char *filename, std::string sep) {

  std::ifstream inputFile(filename);
  if (!inputFile.is_open())
    throw InvalidFD();

  std::map<std::string, std::string>  map;
  std::string line;

  while (std::getline(inputFile, line)) {
    std::istringstream lineStream(line);
    if (line.substr(10, 10 + sep.length() - 1) != sep)
      throw CorruptedData();

    std::string keyStr, valStr;
    keyStr = line.substr(0, 9);
    valStr = line.substr(9 + sep.length());
  }
  return (map);
}

void  checkVal(const std::string value, int low, int high) {

  bool flag = false;
  int   pointCount = 0;
  for (size_t i = 0 ; i != value.length() ; i++) {
    if (value[i] == '.')
      pointCount += 1;
    if ((!isdigit(value[i]) && value[i] != '.') || pointCount > 1)
      throw InvalidNumber();
  }

  float fValue = std::stof(value);
  if (fValue < low)
    throw NegativeValue();
  else if (fValue > high)
    throw TooHighValue();
}

void  checkDataMap(std::map<std::string, std::string> map, int low, int high) {

  std::map<std::string, std::string>::iterator it;

  for (it = this->_btcVal.begin() ; it != this->_btcVal.end() ; it++) {
    try {
      checkDate(it->first);
      checkVal(it->second, low, high);
    }
    catch (InvalidNumber & e) {std::cerr << RED << e.what() << RESET << std::endl;}
    catch (NegativeValue & e) {std::cerr << RED << e.what() << RESET << std::endl;}
    catch (TooHighValue & e) {std::cerr << RED << e.what() << RESET << std::endl;}
  }
}
