#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "define.hpp"

class Brain {

public:

//____________________ Coplian form //

  Brain();
  Brain(const Brain &);
  Brain &operator=(const Brain &);
  ~Brain();

//____________________ Accessors // 

  const std::string&  getIdea(int index) const;
  void                displayAllIdeas() const;

//____________________ Add Del Create Brain // 

  void                addIdea(const std::string& idea);
  void                delIdea(int index);
  void                initBrain();

private:

  std::string* _ideas;

}; 
#endif // !BRAIN_HPP
