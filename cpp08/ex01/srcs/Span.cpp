#include "define.hpp"
#include <iterator>
#include <limits>

Span::Span(unsigned int Nb) : _maxN(Nb) {

  if (_maxN <= 1) 
    throw NotEnoughNbException();
  else if (_maxN > 4294967295)
    throw OverFlowException();

  this->_numTab.resize(_maxN);
  std::cout << PURPLE << "Span created" << RESET << std::endl;
}

Span::Span(const Span &other) : _maxN(other._maxN) {

  this->_numTab.resize(other._maxN);
  this->_numTab = other._numTab;
  std::cout << PURPLE << "Copy Span created" << RESET << std::endl;
}

Span &  Span::operator=(const Span &other) {

  if (this != &other) {
    this->_maxN = other._maxN;
    this->_numTab.resize(other._maxN);
    this->_numTab = other._numTab;
  }
  std::cout << PURPLE << "Assignmant oeprator Span used" << RESET << std::endl;
  return (*this);
}

void  Span::addNumber(int nb) {

  try {
    this->_numTab.push_back(nb);
    std::sort(this->_numTab.begin(), this->_numTab.end());
  }
  catch (SpanIsFullException & e) {
    std::cout << RED << nb << "Could not add number to Span: " << e.what() << RESET << std::endl;
  }

}

unsigned int shortestSpan() {

  if (this->_maxN < 2 || this->_numTab.size() < 2)
    throw NotEnoughNbException();

  unsigned int shorterSpan = std::numeric_limits<int>::max();
  int diff = 0;

  for (size_t i = 1 ; i < this->_numTab.size(); i++) {
    diff = this->_numTab[i] - this->_numTab[i - 1];
    if (diff < shorterSpan)
      shorterSpan = diff;
  } 
  return (shorterSpan);
}

unsigned int longestSpan() {

  if (this->_maxN < 2 || this->_numTab.size() < 2)
    throw NotEnoughNbException();

  unsigned int longerSpan = std::numeric_limits<int>::min();
  int diff = 0;

  for (size_t i = 1 ; i < this->_numTab.size(); i++) {
    diff = this->_numTab[i] - this->_numTab[i - 1];
    if (diff > longerSpan)
      longerSpan = diff;
  } 
  return (longerSpan);
}
