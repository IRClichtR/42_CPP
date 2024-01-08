#ifndef FIXED_HPP
# define FIXED_HPP


# include "define.hpp"

class Fixed {

public :

  Fixed(void);
  Fixed(const Fixed &);
  Fixed &operator=(const Fixed &);
  ~Fixed();

  // other constructors / 
  Fixed(const int);
  Fixed(const float);

  int   getRawBits(void) const;
  void  setRawBits(int const raw);

  // conversion functions / 
  float toFloat(void) const;
  int   toInt(void) const;

  // friend functions /
  friend std::ostream&  operator<<(std::ostream&, const Fixed&);

private :

  int   _fvalue;
  static const int _bits = 8;
};


#endif // !FIXED_HPP
