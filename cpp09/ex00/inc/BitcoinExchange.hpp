#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP


class BitcoinExchange {

public:

  BitcoinExchange(std::string);
  BitcoinExchange(const BitcoinExchange &);
  BitcoinExchange &operator=(const BitcoinExchange &);
  ~BitcoinExchange();

  

private:
  
  const std::string _filename;
  std::map<std::string, float> _input;
  std::map<std::string, float> _btcVal;
};

#endif // !BITCOINEXCHANGE_HPP
