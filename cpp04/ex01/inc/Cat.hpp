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

  void                makesound() const;
  void                displayBrain() const;
  const std::string&  getAnIdea(int index) const;
  void                setAnIdea(const std::string& idea);

private:

  Brain               *_brain;

};


#endif // !CAT_HPP
