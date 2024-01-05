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

  int                     getRawBits(void) const;
  void                    setRawBits(int const raw);

  // conversion functions / 
  float                   toFloat(void) const;
  int                     toInt(void) const;

  // min and max functions / 

  static Fixed&           min(Fixed& a, Fixed& b);
  static const Fixed&     min(const Fixed& a, const Fixed& b);
  static Fixed&           max(Fixed& a, Fixed& b);
  static const Fixed&     max(const Fixed& a, const Fixed& b);

  // Operator overload (exect = witch is in the canonical form)

  Fixed                   operator+(const Fixed& other);
  Fixed                   operator-(const Fixed& other);
  Fixed                   operator*(const Fixed& other);
  Fixed                   operator/(const Fixed& other);

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


  // friend functions /
  friend std::ostream&    operator<<(std::ostream&, const Fixed&);

private :

  int                     _fvalue;
  static const int        _bits = 8;
};


#endif // !FIXED_HPP
