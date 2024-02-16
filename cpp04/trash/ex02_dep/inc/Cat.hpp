#ifndef CAT_HPP
# define CAT_HPP

# include "define.hpp"

class Cat : public Animal {

public:

  // Canonical form
  Cat();
  Cat(const Cat &);
  Cat &operator=(const Cat &);
  ~Cat();

  Cat(const std::string& name);

  void  makesound() const;

};


#endif // !CAT_HPP