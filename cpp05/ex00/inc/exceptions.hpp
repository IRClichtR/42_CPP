#ifndef EXCEPTIONS_HPP
# define EXCEPTIONS_HPP

class tooHighExceptioon {

public:

  virtual const char* what() const throw() {
    return ("Grade too high!");
  }
};

class tooLowExceptioon {

public:

  virtual const char* what() const throw() {
    return ("Grade too low!");
  }
};

#endif // !EXCEPTIONS_HPP
