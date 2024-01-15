#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "define.hpp"

class WrongCat : virtual public Animal {

public:

  // Canonical form
  WrongCat();
  WrongCat(const WrongCat &) = default;
  WrongCat &operator=(const WrongCat &) = default;
  ~WrongCat();

  WrongCat(std::string name);

  void  makesound();

};


#endif // !WRONGCAT_HPP
