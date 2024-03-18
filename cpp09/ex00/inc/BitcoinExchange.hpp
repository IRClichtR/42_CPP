#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP


class BitcoinExchange {

public:

  BitcoinExchange(const char *);
  // BitcoinExchange(const BitcoinExchange &);
  // BitcoinExchange &operator=(const BitcoinExchange &);
  ~BitcoinExchange();

  void  putPricesIntoMap();
  void  processRequest(const char *request);
  void  displayBtcChart();
  void  displayRequest(std::map<std::string, std::string>::iterator it);
  
private:
  
  const char *_filename;
  std::map<std::string, std::string> _btcVal;
};

#endif // !BITCOINEXCHANGE_HPP
