#ifndef SPAN_HPP
# define SPAN_HPP

class Span {

public:

  Span(unsigned int);
  Span(const Span &);
  Span &operator=(const Span &);
  ~Span();


  void          addNumber();
  unsigned int  shortestSpan();
  unsigned int  longestSpan();
  unsigned int  getSpan();

  class SpanIsFullException : public std::exception {
  public:
  };

  class NotEnoughNbException : public std::exception {

  };

private:

  const unsigned int  _maxN;
  std::vector<int>    _numTab;
  
};

#endif // !SPAN_HPP
