#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include "define.hpp"

template<typename T>
class MutantStack : public std::stack<T> {
public:
  MutantStack : public std::stack<T>();
  MutantStack : public std::stack<T>(const MutantStack : public std::stack<T> &);
  MutantStack : public std::stack<T> &operator=(const MutantStack : public std::stack<T> &);
  ~MutantStack : public std::stack<T>();

private:
  
};

#endif // !MUTANTSTACK_HPP
