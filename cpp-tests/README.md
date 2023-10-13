Main program execution | Unit tests execution
:---------------------:|:-------------------:
![Main program execution](https://raw.githubusercontent.com/giriss/unit-tests/main/cpp-tests/main.png) | ![Unit tests execution](https://raw.githubusercontent.com/giriss/unit-tests/main/cpp-tests/tests.png)

# Geometry Library: Rectangles, Squares, Cuboids, and Cubes

This library provides C++ implementations for geometrical shapes, including rectangles, squares, cuboids, and cubes. It showcases various C++ concepts such as inheritance, operator overloading, and the use of private constructors for controlled object creation.

## Features

1. **Inheritance**: The library showcases inheritance where `Square` is a derived class inheriting from the `Rectangle` base class, and `Cube` inherits from `Cuboid`.
2. **Operator Overloading**: The `Rectangle` and `Square` classes provide overloaded `operator*` methods, allowing instances of these classes to be scaled by a factor.
3. **Private Constructor**: The `Square` class has a private constructor that takes a `Rectangle` object. This design decision prevents the implicit conversion from a `Rectangle` to a `Square` outside of the defined class methods, ensuring geometric consistency. This constructor is internally utilized when a square is multiplied by a factor, ensuring the result remains a square.
4. **Unit Testing with Google Test (gtest)**: The library includes a set of unit tests implemented using Google Test to verify the correctness of the geometry calculations. This ensures that the functionalities of the `Rectangle`, `Square`, `Cuboid` and `Cube` classes operate as expected and allows for future updates or modifications to the codebase without compromising the integrity of the results.
5. **Recursion**: The library employs recursive algorithms, particularly in the utility function `power`, which calculates the power of a number using recursion.

## Classes

### Rectangle

- **Properties**:
  - `length`: Represents the length of the rectangle.
  - `width`: Represents the width of the rectangle.

- **Methods**:
  - `Rectangle(double length, double width)`: Constructor initializing the rectangle.
  - `double area() const`: Returns the area.
  - `double circumference() const`: Returns the circumference (perimeter).
  - `Rectangle operator*(double factor) const`: Scales the rectangle.

### Square

- **Properties**: Inherits properties from `Rectangle`.
- **Methods**:
  - `Square(double side_length)`: Constructor initializing the square.
  - `Square operator*(double factor) const`: Scales the square.

- **Private Constructor**:
  - `Square(Rectangle rect)`: Initializes a square using a rectangle. It's particularly used when a `Square` instance undergoes multiplication.

### Cuboid

- **Properties**:
  - `base`: Represents the rectangular base of the cuboid.
  - `height`: Represents the height.

- **Methods**:
  - `Cuboid(Rectangle base, double height)`: Constructor initializing the cuboid.
  - `double volume() const`: Returns the volume.
  - `double surfaceArea() const`: Returns the total surface area.

### Cube

- **Properties**: Inherits properties from `Cuboid`.
- **Methods**:
  - `Cube(double side_length)`: Constructor initializing the cube.

## Utility Functions

### power
- **Definition**: `double power(double base, int exponent);`
- **Description**: Computes the power of a number using recursion. This function multiplies the base with itself for the number of times specified by the exponent

## Concepts Discussed

- **Inheritance**: Defines derived classes based on existing base classes.
- **Private Constructor**: Controls how objects can be instantiated, ensuring controlled object creation.
- **Operator Overloading**: Natural syntax for operations like scaling.
- **Unit Testing**: A software testing technique where individual units or components of the software are tested in isolation. For this library, Google Test (gtest) has been employed to validate the behaviors and outputs.
- **Recursion**: The method of solving a problem by breaking it down into smaller subproblems of the same type.

## Usage Example

```cpp
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
  std::cout << rect.length << "\t" << rect.width << "\t" << rect.area() << "\t" << rect.circumference() << std::endl;
}

void printCuboid(const Cuboid &cuboid) {
  std::cout << cuboid.base.length << "\t" << cuboid.base.width << "\t" << cuboid.height << "\t" << cuboid.volume() << "\t" << cuboid.surfaceArea() << std::endl;
}

void printPower(double base, double exponent) {
  std::cout << "power(" << base << ", " << exponent << ") = " << power(base, exponent) << std::endl;
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
```
