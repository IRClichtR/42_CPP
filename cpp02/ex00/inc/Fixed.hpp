#ifndef FIXED_HPP
# define FIXED_HPP

# include "define.hpp"

class Fixed {

public:

  Fixed(void);
  Fixed(const Fixed& src);
  Fixed& operator=(const Fixed&);
  ~Fixed();

  int               getRawBits(void) const;
  void              setRawBits(int const bit);

private:

  int               _value;
  static int const  _bits;
  
};

#endif // !FIXED_HPP
