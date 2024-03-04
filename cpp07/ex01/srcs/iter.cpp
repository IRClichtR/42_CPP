#include "define.hpp"

void iter(T *arrAddr, size_t arrLen, void func(T & a)) {

  for (int i = 0 ; i < arrLen, i++) {
    arrAddr[i] = func(arrAddr[i]);
  }
}

void increase(T & elt) {elt += 1;}
