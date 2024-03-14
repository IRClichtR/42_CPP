#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP


class BitcoinExchange {

public:

  BitcoinExchange(const char *);
  // BitcoinExchange(const BitcoinExchange &);
  // BitcoinExchange &operator=(const BitcoinExchange &);
  ~BitcoinExchange();

  // bool  checkFile() const;
  // bool  checkFormat() const;
  // bool  checkValues() const;
  void  putPricesIntoMap();

  void  displayBtcChart();
  
  class InvalidFD : public std::exception {
    public:
    virtual const char * what() const throw() {
      return ("Invalid File");
    }
  };

private:
  
  const char *_filename;
  // std::map<std::string, std::string> _input;
  std::map<std::string, std::string> _btcVal;
};

#endif // !BITCOINEXCHANGE_HPP
