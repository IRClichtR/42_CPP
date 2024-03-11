#include "define.hpp"
#include <iterator>
#include <limits>

Span::Span(unsigned int Nb) : _maxN(Nb) {

  if (_maxN <= 1) 
    throw NotEnoughNbException();

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

Span::~Span() {std::cout << PURPLE << "Span detroyed" << RESET << std::endl;}

void  Span::addNumber(int nb) {

  if (this->_numTab.size() == this->_maxN)
    throw SpanIsFullException();
  else
    this->_numTab.push_back(nb);
} 

unsigned int Span::shortestSpan() {

  if (this->_maxN < 2 || this->_numTab.size() < 2)
    throw NotEnoughNbException();

  unsigned int shorterSpan = std::numeric_limits<int>::max();
  unsigned int diff = 0;
  std::vector<int> sortedTab = this->_numTab;
  std::sort(sortedTab.begin(), sortedTab.end());

  for (size_t i = 1 ; i < sortedTab.size(); i++) {
    diff = sortedTab[i] - sortedTab[i - 1];
    if (diff < shorterSpan)
      shorterSpan = diff;
  } 
  return (shorterSpan);
}

unsigned int Span::longestSpan() {

  if (this->_maxN < 2 || this->_numTab.size() < 2)
    throw NotEnoughNbException();

  unsigned int longerSpan = 0;
  unsigned int diff = 0;
  std::vector<int> sortedTab = this->_numTab;
  std::sort(sortedTab.begin(), sortedTab.end());

  for (size_t i = 1 ; i < sortedTab.size(); i++) {
    diff = sortedTab[i] - sortedTab[i - 1];
    if (diff > longerSpan)
      longerSpan = diff;
  }
  return (longerSpan);
}

void  Span::displaySpan() {

  for (size_t i = 0 ; i < this->_numTab.size(); i++)
    std::cout << "Span [" << i << "] = " << this->_numTab[i] << std::endl;
}
