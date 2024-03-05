#ifndef ITER_HPP
# define ITER_HPP

#include "define.hpp"

template<typename T>
void  iter(T *arrAddr, size_t arrLen, void func(T &)) {
 for (size_t i = 0 ; i < arrLen ; i++) {
    func(arrAddr[i]);
 } 
}

template<typename T>
void  print(T & elt) {
  std::cout << elt << std::endl;
}

#endif // !ITER_HPP
