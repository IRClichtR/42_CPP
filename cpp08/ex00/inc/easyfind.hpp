#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include "define.hpp" 

template<typename T>
void  easyfind(T & tab, const int toFind) {
  
  typename T::iterator  it;
  size_t i = 0;

  for (it = tab.begin(); it != tab.end() ; it++) {
    if (*it == toFind) {
      std::cout << GREEN << "First occurence found at index [" << i << "]" << RESET << std::endl;
      return ;
    }
    i++;
  }
  std::cout << RED << toFind << " is not in the data structure!" << RESET << std::endl;
}
#endif // !EASYFIND_HPP
