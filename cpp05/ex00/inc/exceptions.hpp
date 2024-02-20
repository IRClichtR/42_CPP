#ifndef EXCEPTIONS_HPP
# define EXCEPTIONS_HPP

class tooHighException {

public:

  virtual const char* what() const throw() {
    return ("Grade too high!");
  }
};

class tooLowException {

public:

  virtual const char* what() const throw() {
    return ("Grade too low!");
  }
};

#endif // !EXCEPTIONS_HPP
