#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "define.hpp"

class Animal {
public:

  // Canonical form
  Animal();
  Animal(const Animal &) = default;
  Animal &operator=(const Animal &) = default;
  ~Animal();

  void  makesound();

protected:
  
  std::string  type;
};


#endif // !ANIMAL_HPP
