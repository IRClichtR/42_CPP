#ifndef ITER_HPP
# define ITER_HPP

#include "define.hpp"

template<typename T>
void  iter(T *arrAddr, size_t arrLen, void func(T & a));

template<typename T>
void  increase(T & str);

#endif // !ITER_HPP
