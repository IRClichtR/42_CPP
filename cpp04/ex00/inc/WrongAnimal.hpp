#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <string>
class WrongAnimal {

public:

//____________________ Coplian form //

  WrongAnimal();
  WrongAnimal(const WrongAnimal &);
  WrongAnimal &operator=(const WrongAnimal &);
  virtual ~WrongAnimal();

//____________________ Member functions //

  void                      makeSound(void) const;
  virtual const std::string getType() const;
  virtual void              setType(std::string& name);


protected:

  std::string               type;

};

#endif // !WRONG_ANIMAL_HPP
