#ifndef DIRECTION_H
#define DIRECTION_H
#include "direction.h"
#endif

#ifndef POINT_H
#define POINT_H
#include "point.h"
#endif

class Bullet {
  public:
    point_t _location;
    Direction _direction;
  
    Bullet(point_t t, Direction d) {
      _location = t;
      _direction = d;
    };
};