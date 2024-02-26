#include <>
#include <string>


int main() {

  int a = 42;

  double b = a;

  //if you try to displyay the raw bits of an in and of a float that have the same representation it would not be the same
  // b is an implicit CONVERSION from int to double 
 
  double c = (double) a;
  // c is an explicit conversion from int to double
  //
  //
  // TYOPE HIERARCHY
  // int is a less precise type. It is ok convert it to a more precise type
  // if the type into which yu convert is less precise, you have the risk to loose precision

  return 0;


}

// gcc -Wno-conversion
