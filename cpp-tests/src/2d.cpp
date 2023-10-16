#include "2d.h"

// Rectangle
Rectangle::Rectangle(double length, double width)
    : length(length), width(width) {}

double Rectangle::area() const { return length * width; }

double Rectangle::circumference() const { return 2 * (length + width); }

Rectangle Rectangle::operator*(double factor) const {
  return Rectangle(length * factor, width * factor);
}

// Square
Square::Square(double side_length) : Rectangle(side_length, side_length) {}

Square::Square(Rectangle rect) : Rectangle(rect) {}

Square Square::operator*(double factor) const {
  return Rectangle::operator*(factor);
}
