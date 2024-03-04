#include "define.hpp"

template <typename T>
void swap(T *a, T *b) {
  T tmp;

  tmp = *a;
  *a = *b;
  *b = tmp;
}

template <typename T>
T min(T a, T b) {return (a < b ? a : b);}

template <typename T>
T max(T a, T b) {return (a > b ? a : b);}

int main () {

  int a = 42;
  int b = 21;

  float c = 42.42f;
  float d = 21.21f;

  char e = 'a';
  char f = 'z';

  std::cout << PURPLE << "___Swap test___" << RESET << std::endl;

  std::cout << PURPLE << "INT VALUES: " << RESET << std::endl;
  std::cout << "Initial values: " << "a= " << a << " | b= " << b << std::endl;
  swap(&a, &b);
  std::cout << "Values after swap: " << "a= " << a << " | b= " << b << std::endl;
  std::cout << "Minimal value = " << min(a, b) << std::endl;
  std::cout << "Maximal value = " << max(a, b) << std::endl;

  std::cout << PURPLE << "FLOAT VALUES: " << RESET << std::endl;
  std::cout << "Initial values: " << "c= " << c << " | d= " << d << std::endl;
  swap(&c, &d);
  std::cout << "Values after swap: " << "c= " << c << " | d= " << d << std::endl;
  std::cout << "Minimal value = " << min(c, d) << std::endl;
  std::cout << "Maximal value = " << max(c, d) << std::endl;

  std::cout << PURPLE << "CHAR VALUES: " << RESET << std::endl;
  std::cout << "Initial values: " << "e= " << e << " | f= " << f << std::endl;
  swap(&e, &f);
  std::cout << "Values after swap: " << "e= " << e << " | f= " << f << std::endl;
  std::cout << "Minimal value = " << min(e, f) << std::endl;
  std::cout << "Maximal value = " << max(e, f) << std::endl;

  return 0;
}

