#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

class BitcoinExchange {

public:

  BitcoinExchange(const char *);
  // BitcoinEchange(const BitcoinExchange &);
  // BitcoinEchange &operator=(const BitcoinExchange &);
  ~BitcoinExchange();

  void                                initExchange(const char *filename);
  std::map<std::string, std::string>  putDataIntoMap(const char *filename, std::string sep)

private:

  std::map<std::string, std::string>  _data;
  
};

#endif // !BITCOINEXCHANGE_HPP
