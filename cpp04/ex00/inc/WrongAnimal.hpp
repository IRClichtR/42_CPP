#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include "define.hpp"

class WrongAnimal {

public:

  // Canonical form
  WrongAnimal();
  WrongAnimal(const WrongAnimal &);
  WrongAnimal &operator=(const WrongAnimal &);
  ~WrongAnimal();

  WrongAnimal(const std::string& name);

  void        setType(const std::string& name);
  std::string getType(void) const;
  void        makesound();

protected:
  
  std::string  _type;
};



#endif // !WRONGANIMAL_HPP
