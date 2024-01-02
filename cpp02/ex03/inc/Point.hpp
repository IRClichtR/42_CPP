#ifndef POINT_HPP
# define POINT_HPP

# include "define.hpp"

class Point {

public:

  Point(void);
  ~Point(void);

  Point(const Point& src);
  Point &operator=(const Point&);

  Point(const float a, const float b);

private:
  
  const Fixed _x;
  const Fixed _y;
};

#endif // !POINT_HPP
