#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include "define.hpp"

class WrongAnimal {

public:

  // Canonical form
  WrongAnimal();
  WrongAnimal(const WrongAnimal &);
  WrongAnimal &operator=(const WrongAnimal &);
  virtual ~WrongAnimal() = 0;

  WrongAnimal(const std::string& name);

  void          setType(const std::string& name);
  std::string   getType(void) const;
  virtual void  makesound() const = 0;

protected:
  
  std::string  _type;
};



#endif // !WRONGANIMAL_HPP
