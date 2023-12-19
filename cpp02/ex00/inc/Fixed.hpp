#ifndef FIXED_HPP
# define FIXED_HPP

# include "define.hpp"

class fixedNbr {

public:

  fixedNbr();
  ~fixedNbr();

private:

  int               _intVal;
  static const int  _bits = 8;

};

#endif // !FIXED_HPP
