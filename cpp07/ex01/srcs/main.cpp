#include "define.hpp"

int main() {
  int arr[5] = {1, 2, 3, 4, 5, 6, 7, 8};
  iter(arr, 8, increase(2));
  // std::cout << "OK" << std::endl;
  return 0;
}

