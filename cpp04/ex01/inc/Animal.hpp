#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
class Animal {

public:

//____________________ Coplian form //

  Animal();
  Animal(const Animal &);
  Animal &operator=(const Animal &);
  virtual ~Animal();

//____________________ Member functions //

  virtual void              makeSound(void) const;
  virtual const std::string getType() const;
  virtual void              setType(std::string& name);


protected:

  std::string               type;

};

#endif // !ANIMAL_HPP
