#ifndef FIXED_HPP
# define FIXED_HPP

# include "define.hpp"

class Fixed {

public:

  Fixed(void);
  Fixed(const int nb);
  Fixed(const float fl);
  Fixed(const Fixed& src);
  Fixed& operator=(const Fixed&);
  ~Fixed();

  int               getRawBits(void) const;
  void              setRawBits(int const bit);
  float             toFloat(void) const;
  int               toInt(void) const;

private:

  int               _value;
  static int const  _bits = 8;
  
};

// std::ostream &operator<<(std::ostream &lhs, Fixed const &rhs);
std::ostream &operator<<(std::ostream&, Fixed const&);

#endif // !FIXED_HPP
