#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include "define.hpp"


class Zombie {

public:
  
//Constructors Destructors_____________________________________________________/

  Zombie(void);
  ~Zombie(void);

  void  announce (void);

private:
  
  std::string _name;

};

#endif // !ZOMBIE_HPP
