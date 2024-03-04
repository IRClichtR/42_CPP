#include "define.hpp"

void iter(T *arrAddr, size_t arrLen, void func(T & a)) {

  for (int i = 0 ; i < arrLen, i++) {
    arrAddr[i] = func(a);
  }
}

void increase(T const & elt) {return elt + 1;}
