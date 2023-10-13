#include <gtest/gtest.h>
#include "../src/2d.h"

Rectangle rect(4, 5);

TEST(RectangleTest, Area) {
  EXPECT_DOUBLE_EQ(rect.area(), 20);
}

TEST(RectangleTest, Circumference) {
  EXPECT_DOUBLE_EQ(rect.circumference(), 18);
}

TEST(RectangleTest, Multiply) {
  Rectangle newRect = rect * 2;
  EXPECT_DOUBLE_EQ(newRect.length, 8);
  EXPECT_DOUBLE_EQ(newRect.width, 10);
}

Square sq(5);

TEST(SquareTest, Area) {
  EXPECT_DOUBLE_EQ(sq.area(), 25);
}

TEST(SquareTest, Circumference) {
  EXPECT_DOUBLE_EQ(sq.circumference(), 20);
}

TEST(SquareTest, Multiply) {
  Square newSq = sq * 2;
  EXPECT_DOUBLE_EQ(newSq.length, 10);
  EXPECT_DOUBLE_EQ(newSq.width, 10);
}
