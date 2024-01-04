#ifndef POINT_HPP
# define POINT_HPP

# include "define.hpp"

class Point {

public:

  Point(void);
  Point(const float x, const float y);
  Point(const Fixed x, const Fixed y);
  ~Point(void);

  Point(const Point& src);
  Point &operator=(const Point&);

  const Fixed&  getX(void) const;
  const Fixed&  getY(void) const;

private:
  
  const Fixed _x;
  const Fixed _y;
};

#endif // !POINT_HPP
