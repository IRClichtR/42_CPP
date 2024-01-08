#ifndef FIXED_HPP
# define FIXED_HPP


# include "define.hpp"

class Fixed {

public :

  Fixed(void);
  Fixed(const Fixed &);
  Fixed &operator=(const Fixed &);
  ~Fixed();

  int   getRawBits(void) const;
  void  setRawBits(int const raw);

private :

  int   _fvalue;
  static const int _bits = 8;
};

#endif // !FIXED_HPP
