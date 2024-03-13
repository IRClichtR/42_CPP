#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP


class BitcoinExchange {

public:

  BitcoinExchange(std::string);
  BitcoinExchange(const BitcoinExchange &);
  BitcoinExchange &operator=(const BitcoinExchange &);
  ~BitcoinExchange();

  bool  checkFile() const;
  bool  checkFormat() const;
  bool  checkValues() const;
  void  getFileIntoMap() const;
  

private:
  
  const std::string _filename;
  std::map<std::string, float> _input;
  std::map<std::string, float> _btcVal;
};

#endif // !BITCOINEXCHANGE_HPP
