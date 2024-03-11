#include "define.hpp"

// int main() {
//   std::cout << GREEN << "OK" << RESET << std::endl;
//   return (0);
// }

int main()
{
  Span sp = Span(6);
  // sp.displaySpan();
  try {
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(-11);
    sp.addNumber(11);
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
