#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "define.hpp"


class Brain {

public:

  Brain();
  Brain(const Brain &);
  ~Brain(); 

  Brain &operator=(const Brain &);

  // void        addIdea(const std::string& idea);

private:

  std::string ideas[100];
};

#endif // !BRAIN_HPP
