#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include "define.hpp"

class BitcoinExchange {

public:

  BitcoinExchange(const char *filename);
  // BitcoinEchange(const BitcoinExchange &);
  // BitcoinEchange &operator=(const BitcoinExchange &);
  ~BitcoinExchange();

  void                                displayBtcChart();
  void                                initExchange();
  std::map<std::string, std::string>  putDataIntoMap(const char *filename, std::string sep);
  void                                checkMap(std::map<std::string, std::string>, int min, int max);

private:

  const char                          *_filename;
  std::map<std::string, std::string>  _data;
  
};

#endif // !BITCOINEXCHANGE_HPP
