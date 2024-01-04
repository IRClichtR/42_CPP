#include "define.hpp"

bool  bsp(Point const a, Point const b, Point const c, Point const point) {

  Fixed denominator((b.getY() - c.getY()) * (point.getX() - c.getX()) + (c.getX() - b.getX()) * (point.getY() - c.getY()));

  Fixed alpha((b.getY() - c.getY()) * (point.getX() - c.getX()) + (c.getX() - b.getX()) * (point.getY() - c.getY()) / denominator);
  Fixed beta((c.getY() - a.getY()) * (point.getX() - c.getX()) + (a.getX() - c.getX()) * (point.getY() - c.getY()) / denominator);
  Fixed gamma(1 - alpha - beta);

  return (alpha >= 0 && beta >= 0 && gamma >= 0);
}

