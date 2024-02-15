#ifndef DOG_HPP
# define DOG_HPP

# include "define.hpp"

class Dog : public Animal {

public:

  // Canonical form
  Dog();
  Dog(const Dog &);
  Dog &operator=(const Dog &);
  ~Dog();

  Dog(const std::string& name);

  void                makesound() const;
  void                displayBrain() const;
  const std::string&  getAnIdea(int index) const;
  void                setAnIdea(const std::string& idea);

private:

  Brain *_brain;

};


#endif // !DOG_HPP
