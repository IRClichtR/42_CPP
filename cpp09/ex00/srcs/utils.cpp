#include "define.hpp"

std::map<std::string, std::string> putDataIntoMap(const char *filename, char sep) {

  std::ifstream inputFile(filename);
  if (!inputFile.is_open())
    throw BitcoinExchange::InvalidFD();

  std::map<std::string, std::string>  map;
  std::string line;

  while (std::getline(inputFile, line)) {
    std::istringstream lineStream(line);
    std::string keyStr, valStr;

    if (std::getline(lineStream, keyStr, sep) && std::getline(lineStream, valStr)) {
      map[keyStr] = valStr;
    }
  }
  return (map);
}

void  checkDate(const std::string date) {

  if (date.length() != 10 || date[4] != '-' || date[7] != '-')
    throw InvalidDate();
  
  bool flag = false;
  for (size_t i = 0 ; i != date.length() ; i++) {

    if (flag)
      throw InvalidDate();
    if (i == 4 || i == 7)
      i += 1;
    if (!isdigit(date[i]))
      flag = true;
  }
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

