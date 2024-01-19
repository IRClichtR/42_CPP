#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "define.hpp"


class Brain {

public:

  Brain();
  Brain(const Brain &);
  ~Brain(); 

  Brain               &operator=(const Brain &);

  const std::string&  getIdea(int i) const;
  void                addIdea(const std::string& idea);
  void                displayAllBrain() const;

private:

  std::string         ideas[100];
};

#endif // !BRAIN_HPP
