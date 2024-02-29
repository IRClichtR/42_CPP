#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP 

#include "define.hpp"

struct Data {

  std::string name;
  std::string characterGoal;
};

class Serializer {

  public:

    Serializer();
    virtual ~Serializer() = 0;

    static uintptr_t  serialize(Data* ptr);
    static Data*      deserialize(uintptr_t raw);

};

#endif // !SERIALIZER_HPP
