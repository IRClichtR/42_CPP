#ifndef DOG_HPP
# define DOG_HPP

#include "define.hpp"

class Dog : public Animal {

public:

//____________________ Coplian form //

  Dog();
  Dog(const Dog &);
  Dog &operator=(const Dog &);
  ~Dog();

  void  makeSound() const;

private:
  
  Brain* _brain;

};


#endif // !DOG_HPP
