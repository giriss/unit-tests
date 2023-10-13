#include "cuboid.h"

Cuboid::Cuboid(Rectangle base, double height) : base(base), height(height) {}

double Cuboid::volume() const {
    return base.area() * height;
}

double Cuboid::surfaceArea() const {
    double lw = base.area();
    double lh = base.length * height;
    double wh = base.width * height;
    return 2 * (lw + lh + wh);
}

Cube::Cube(double side_length) : Cuboid(Rectangle(side_length, side_length), side_length) {}
