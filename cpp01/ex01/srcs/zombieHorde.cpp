#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {

  Zombie* Hordounette = new Zombie[N];
  
  for (int i = 0; i < N; i++)
    Hordounette[i] = Zombie(name);
  return (Hordounette);

}
