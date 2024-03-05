#include "define.hpp"

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
  std::string arr2[] = {"la", "mer", "vaste", "mer", "console", "nos", "labeurs"};
  bool arr3[] = {3 > 2, 34 == 2};
  iter(arr, 8, print<int>);
  iter(arr2, 7, print<std::string>);
  iter(arr3, 2, print<bool>);

  return 0;
}

