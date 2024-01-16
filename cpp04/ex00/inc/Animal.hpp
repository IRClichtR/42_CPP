#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "define.hpp"

class Animal {
public:

  // Canonical form
  Animal();
  Animal(const Animal &);
  Animal &operator=(const Animal &);
  ~Animal();

  Animal(const std::string& name);
  // public methods
  void  makesound();

protected:
  
  std::string  _type;
};


#endif // !ANIMAL_HPP
