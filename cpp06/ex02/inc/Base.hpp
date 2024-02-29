#ifndef BASE_HPP
# define BASE_HPP

class Base {
  
public:

  Base() throw();
  virtual ~Base() throw();
    
  // class castFailException : public std::exception {
  // public:
  //   virtual const char * what() const throw() {
  //     return ("Not a valid cast!");
  //   }
  // };
  static Base * generate(void);
  static void  identify(Base *);
  static void  identify(Base &);
};

#endif // !BASE_HPP
