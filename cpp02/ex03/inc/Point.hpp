#ifndef POINT_HPP
# define POINT_HPP

# include "define.hpp"

class Point {

public:

  Point(void);
  Point(const float x, const float y);
  ~Point(void);

  Point(const Point& src);
  Point &operator=(const Point&);

  Fixed&  getPoint(void) const;
  void    setPoint(const float x, const float y);

private:
  
  const Fixed _x;
  const Fixed _y;
};

#endif // !POINT_HPP
