#ifndef FIXED_HPP
# define FIXED_HPP

# include "define.hpp"

class Fixed {

public:

  Fixed();
  Fixed(const Fixed&);
  Fixed& operator=(const Fixed&);
  ~Fixed();

  int getRawBits(void) const;
  void  setRawBits(int const raw);

private:
  
};

#endif // !FIXED_HPP
