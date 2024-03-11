#include "define.hpp"

int genRandomInt(int min, int max) {

  static bool first = true;
  if (first) {
    srand(time(NULL));
    first = false;
  }
  return min + rand() % ((max - 1) - min);
}

int main() {
  
  std::vector<int> vec;

  for (int a = 0; a <= 10 ; a++)
    vec.push_back(genRandomInt(1, 15));
  for (size_t i = 0; i < vec.size(); i++)
    std::cout << "[" << vec[i] << "] ";
  std::cout << std::endl;

  easyfind(vec, 10);

  return (0);
}
