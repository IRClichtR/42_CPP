#ifndef EXCEPTIONS_HPP
# define EXCEPTIONS_HPP

# include "define.hpp"

class InvalidDate : public std::exception {
    public:
    virtual const char * what() const throw() {
      return ("Invalid Date");
    }
  };

class InvalidNumber : public std::exception {
    public:
    virtual const char * what() const throw() {
      return ("Invalid Number");
    }
  };

class NegativeValue : public std::exception {
    public:
    virtual const char * what() const throw() {
      return ("Negative Value");
    }
  };

class TooHighValue : public std::exception {
    public:
    virtual const char * what() const throw() {
      return ("Value too High");
    }
  };

class InvalidFD : public std::exception {
    public:
    virtual const char * what() const throw() {
      return ("Invalid File");
    }
  };

class CorruptedData : public std::exception {
    public:
    virtual const char * what() const throw() {
      return ("Corrupted Data");
    }
  };

#endif // !EXCEPTIONS_HPP
