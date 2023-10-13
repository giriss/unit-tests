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
Rectangle rect(4, 5);
Square sq(3);
Square square = sq * 2;
cout << square.length << ":" << square.area() << ":" << square.circumference() << endl;
// Prints 6:36:24

Cuboid cuboid(rect, 6);
Cube cube(3);

// Utilizing the power function
double result = power(2, 3); // result will be 8.0
```
