#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "define.hpp"

class WrongCat : public WrongAnimal {

public:

  // Canonical form
  WrongCat();
  WrongCat(const WrongCat &);
  WrongCat &operator=(const WrongCat &);
  ~WrongCat();

  WrongCat(const std::string &name);

  void  makesound() const;

};


#endif // !WRONGCAT_HPP
