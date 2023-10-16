#pragma once
#include "2d.h"

struct Cuboid {
  Rectangle base;
  double height;

  Cuboid(Rectangle base, double height);

  double volume() const;
  double surfaceArea() const;
};

struct Cube : Cuboid {
  Cube(double side_length);
};
