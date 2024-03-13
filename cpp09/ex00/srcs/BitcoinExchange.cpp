#include "define.hpp"

// void BitcoinExchange::checkFile() {
//
//   std::ifstream ifs(this->_filename);
//
//   if (!ifs.good())
//     throw InvalidFD();
// }

void BitcoinExchange::getFileIntoMap() {
  
  std::ifstream inputFile(this->_filesname);
  if (!inputFile.is_open())
    throw InvalidFD();

  std::string line;
  while (std::getline(inputFile, line)) {
    std::istringstream lineStream(line);
    std::string keyStr, valStr;

    if (std::getline(lineStream, keyStr, ',' && std::getline(lineStream, valStr) {
      this->_btcVal[keyStr] = valStr;
    }

}
