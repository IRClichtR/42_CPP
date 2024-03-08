#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include "define.hpp" 

template<typename T>
void  easyfind(T & tab, const int toFind) {
  
  typename T::iterator  it;

  for (it = tab.begin(); it != tab.end() ; it++) {
    if (*it == n) {
      std::cout << GREEN << "First occurence found!" << RESET << std::endl;
      return ;
    }
  }
  std::cout << RED << toFind << " is not in the data structure!" << RESET << std::endl;
}
#endif // !EASYFIND_HPP
