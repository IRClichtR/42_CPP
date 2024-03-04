#ifndef BASE_HPP
# define BASE_HPP

class Base {
  
public:

  Base();
  virtual ~Base();
    
  static Base * generate(void);
  static void  identify(Base *);
  static void  identify(Base &);
};

#endif // !BASE_HPP
