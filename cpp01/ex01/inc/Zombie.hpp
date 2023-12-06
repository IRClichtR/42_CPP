#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include "define.hpp"


class Zombie {

public:
  
//Constructors Destructors_____________________________________________________/

  Zombie(std::string input_name);
  ~Zombie(void);

  void  announce (void);

private:
  
  std::string _name;

};

//Non Member Functions_________________________________________________________/

Zombie* zombieHorde(int N, sstd::string name);

#endif // !ZOMBIE_HPP
