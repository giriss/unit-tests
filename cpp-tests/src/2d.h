#pragma once

struct Rectangle {
  double length;
  double width;

  Rectangle(double length, double width);

  double area() const;
  double circumference() const;
  Rectangle operator*(double factor) const;
};

struct Square : Rectangle {
  Square(double side_length);

  Square operator*(double factor) const;

 private:
  Square(Rectangle rect);
};
