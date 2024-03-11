#include "define.hpp"

int genRandomInt(int min, int max) {

  static bool first = true;
  if (first) {
    srand(time(NULL));
    first = false;
  }
  return min + rand() % ((max - 1) - min);
}

int main()
{
  Span sp = Span(10);
  std::vector<int> randomTab;
  for (int i = 0 ; i < 1000 ; i++)
    randomTab.push_back(genRandomInt(-1000, 1000));

  try {
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(-11);
    sp.addRangeNumber(randomTab.begin(), randomTab.end());
  }
  catch (Span::SpanIsFullException & e) {
    std::cerr << RED << e.what() << RESET << std::endl;
  }   
  sp.displaySpan();
  try {
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
  }
  catch (Span::NotEnoughNbException & e) {
    std::cerr << RED << e.what() << RESET << std::endl;
  }
return 0;
}
