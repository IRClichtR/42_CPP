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

  Dog(const std::string& name);

  void  makesound() const;

private:

  Brain *_brain;

};


#endif // !DOG_HPP
