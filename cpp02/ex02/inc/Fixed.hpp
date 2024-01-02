#ifndef FIXED_HPP
# define FIXED_HPP

# include "define.hpp"

class Fixed {

public:

  Fixed(void);
  Fixed(const int nb);
  Fixed(const float fl);
  Fixed(const Fixed& src);
  // Fixed& operator=(const Fixed&);
  ~Fixed();

  int                     getRawBits(void) const;
  void                    setRawBits(int const bit);
  float                   toFloat(void) const;
  int                     toInt(void) const;

  static Fixed&           min(Fixed& a, Fixed& b);
  static const Fixed&     min(const Fixed& a, const Fixed& b);
  static Fixed&           max(Fixed& a, Fixed& b);
  static const Fixed&     max(const Fixed& a, const Fixed& b);

  Fixed&                  operator=(const Fixed& other);
  Fixed&                  operator+(const Fixed& other);
  Fixed&                  operator-(const Fixed& other);
  Fixed&                  operator*(const Fixed& other);
  Fixed&                  operator/(const Fixed& other);

  Fixed&                  operator++(void);
  Fixed&                  operator--(void);

  Fixed                   operator++(int);
  Fixed                   operator--(int);

  bool                    operator>(const Fixed& other);
  bool                    operator<(const Fixed& other);
  bool                    operator>=(const Fixed& other);
  bool                    operator<=(const Fixed& other);
  bool                    operator==(const Fixed& other);
  bool                    operator!=(const Fixed& other);

private:

  int                     _value;
  static int const        _bits = 8;
  
};

std::ostream &operator<<(std::ostream&, Fixed const&);

#endif // !FIXED_HPP
