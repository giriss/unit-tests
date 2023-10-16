#include <iostream>

#include "src/2d.h"
#include "src/3d.h"
#include "src/utils.h"

void printRectangleHeaders() {
  std::cout << "length\twidth\tarea\tcircumference\n";
}

void printCuboidHeaders() {
  std::cout << "length\twidth\theight\tvolume\tsurfaceArea\n";
}

void printRectangle(const Rectangle &rect) {
  std::cout << rect.length << "\t" << rect.width << "\t" << rect.area() << "\t"
            << rect.circumference() << std::endl;
}

void printCuboid(const Cuboid &cuboid) {
  std::cout << cuboid.base.length << "\t" << cuboid.base.width << "\t"
            << cuboid.height << "\t" << cuboid.volume() << "\t"
            << cuboid.surfaceArea() << std::endl;
}

void printPower(double base, double exponent) {
  std::cout << "power(" << base << ", " << exponent
            << ") = " << power(base, exponent) << std::endl;
}

int main() {
  Rectangle rect1(1.5, 2.5);
  Rectangle rect2 = rect1 * 2;
  Square square1(2);
  Square square2 = square1 * 3;

  std::cout << "= = = Rectangle = = =\n";
  printRectangleHeaders();
  printRectangle(rect1);
  printRectangle(rect2);
  printRectangle(square1);
  printRectangle(square2);

  Cuboid cuboid(rect2, 4);
  Cube cube(3);

  std::cout << "\n= = = Cuboid = = =\n";
  printCuboidHeaders();
  printCuboid(cuboid);
  printCuboid(cube);

  std::cout << "\n= = = Power = = =\n";
  printPower(1.5, 3);
  printPower(2, 5);

  return 0;
}
