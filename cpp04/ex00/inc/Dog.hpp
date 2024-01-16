#ifndef DOG_HPP
# define DOG_HPP

# include "define.hpp"

class Dog : virtual public Animal {

public:

  // Canonical form
  Dog();
  Dog(const Dog &);
  Dog &operator=(const Dog &);
  ~Dog();

  Dog(std::string name);

  void  makesound();

};


#endif // !DOG_HPP
