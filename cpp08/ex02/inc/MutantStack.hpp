#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include "define.hpp"

template<typename T>
class MutantStack : public std::stack<T> {

public:

  typedef typename std::stack<T>::container_type::iterator  iterator;
  MutantStack() {;}
  MutantStack(const MutantStack &other) : std::stack<T>(other) {;}
  MutantStack &operator=(const MutantStack &other) {std::stack<T>::operator=(other);}
  ~MutantStack() {;}

  iterator begin() {return (std::stack<T>::c.begin());}
  iterator end() {return (std::stack<T>::c.end());}

  
};

#endif // !MUTANTSTACK_HPP
