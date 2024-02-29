#include "define.hpp"

int main() {

  Data *ptr = new Data;
  if (!ptr)
    return (1);
  ptr->name = "Jean-Val-Jean";
  ptr->characterGoal = "Sauver Causette";

  uintptr_t uint_raw = Serializer::serialize(ptr);
  std::cout << "uintptr_t representation of ptr: " << uint_raw << std::endl;
  Data* ptr2 = Serializer::deserialize(uint_raw);
  std::string res = ptr2 != ptr ? "Pointers differ!" : "Pointers are identical";
  std::cout << "Is initial ptr adress different from initial data adress? ---> " << res << std::endl;

  std::cout << "ADDITIONAL PROOF -- Display the content stored in the deserialized pointer: " << std::endl;
  std::cout << "Name: " << ptr2->name << " | Character Goal: " << ptr2->characterGoal << std::endl; 

  delete ptr;

  return (0);
}
