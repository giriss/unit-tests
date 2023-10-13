#pragma once
#include "rectangle.h"

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
