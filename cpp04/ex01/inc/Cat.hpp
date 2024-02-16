#ifndef CAT_HPP
# define CAT_HPP

#include "define.hpp"

class Cat : public Animal {

public:

//____________________ Coplian form //

  Cat();
  Cat(const Cat &);
  Cat &operator=(const Cat &);
  ~Cat();

//____________________ Sound Maker //

  void  makeSound() const;

private:

  Brain*  _brain;
  
};


#endif // !CAT_HPP
