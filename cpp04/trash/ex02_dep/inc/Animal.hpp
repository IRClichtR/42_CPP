#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "define.hpp"

class Animal {

public:

  // Canonical form
  Animal();
  Animal(const Animal &);
  Animal &operator=(const Animal &);
  virtual ~Animal() = 0;

  Animal(const std::string& name);
  // Getter & Setters
  void        setType(const std::string& name);
  std::string getType(void) const;
  // public methods
  virtual void  makesound() const = 0;

protected:
  
  std::string  _type;
};


#endif // !ANIMAL_HPP
