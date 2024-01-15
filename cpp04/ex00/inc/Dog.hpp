#ifndef DOG_HPP
# define DOG_HPP

# include "define.hpp"

class Dog : virtual public Animal {

public:

  // Canonical form
  Dog();
  Dog(const Dog &) = default;
  Dog &operator=(const Dog &) = default;
  ~Dog();

  Dog(std::string name);

  void  makesound();

};


#endif // !DOG_HPP
