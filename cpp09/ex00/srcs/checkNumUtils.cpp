#include "define.hpp"

void  checkVal(const std::string value, int low, int high) {

  // bool flag   false;
  int   pointCount = 0;

  for (size_t i = 0 ; i != value.length() ; i++) {
    if (value[i] == '.')
      pointCount += 1;
    if ((!isdigit(value[i]) && value[i] != '.') || pointCount > 1)
      throw InvalidNumber();
  }

  float fValue = std::atof(value.c_str());
  std::cout << fValue;
  if (fValue < low)
    throw NegativeValue();
  else if (fValue > high)
    throw TooHighValue();
}
