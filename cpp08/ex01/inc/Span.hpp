#ifndef SPAN_HPP
# define SPAN_HPP

class Span {

public:

  Span(unsigned int);
  Span(const Span &);
  Span &operator=(const Span &);
  ~Span();


  void          addNumber(int nb);
  unsigned int  shortestSpan();
  unsigned int  longestSpan();
  void          displaySpan();


  class SpanIsFullException : public std::exception {
  public:
    virtual const char * what() const throw() {
      return ("Span is full!");
    }

  };

  class NotEnoughNbException : public std::exception {
    public:
    virtual const char * what() const throw() {
      return ("1 or less numbers in Span, operation requires at least 2!");
    }
  };


private:

  unsigned int        _maxN;
  std::vector<int>    _numTab;
  
};

#endif // !SPAN_HPP
