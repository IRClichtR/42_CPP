#include "define.hpp"

uintptr_t Serializer::serialize(Data *ptr) {

  if (ptr == NULL)
    return (0);
  uintptr_t res = reinterpret_cast<uintptr_t>(ptr);
  return res;
}

Data* Serializer::deserialize(uintptr_t raw) {

  if (!raw)
    return (NULL);
  Data* ptr = reinterpret_cast<Data *>(raw);
  return (ptr);
}
