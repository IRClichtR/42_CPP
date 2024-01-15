#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include "define.hpp"

class WrongAnimal {
public:

  // Canonical form
  WrongAnimal();
  WrongAnimal(const WrongAnimal &) = default;
  WrongAnimal &operator=(const WrongAnimal &) = default;
  ~WrongAnimal();

  void  makesound();

protected:
  
  std::string  type;
};



#endif // !WRONGANIMAL_HPP
