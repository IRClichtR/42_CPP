#include "define.hpp"

bool  bsp(Point const a, Point const b, Point const c, Point const point) {

  Fixed w1 = ((a._x * (c._y - a._y)) + ((point._y - a._y) * (c._x - a._x)) - (point._x * (c._y - a._y)))
              / ((b._y - a._y) * (c._x - a._x)) - ((b._x - a._x) * (c._y - a._y));

  Fixed w2 = point._y - a._y - (w1 * (b._y - a._y))
              / (c._y - a._y);

  return (w1 >= 0 && w2 >= 0);
}
