#ifndef BRAIN_HPP
# define BRAIN_HPP

class Brain {

public:

//____________________ Coplian form //

  Brain();
  Brain(const Brain &);
  Brain &operator=(const Brain &);
  ~Brain();

//____________________ Accessors // 

  // const std::string&  getIdea() const;
  // const std::string&  getAllIdeas() const;
  // const void  addIdea() const;
  // const void  delIdea() const;
  void  initBrain();

private:

  std::string* _ideas;

}; 
#endif // !BRAIN_HPP
