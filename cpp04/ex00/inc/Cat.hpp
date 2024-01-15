#ifndef CAT_HPP
# define CAT_HPP

# include "define.hpp"

class Cat : virtual public Animal {

public:

  // Canonical form
  Cat();
  Cat(const Cat &) = default;
  Cat &operator=(const Cat &) = default;
  ~Cat();

  Cat(std::string name);

  void  makesound();

};


#endif // !CAT_HPP
