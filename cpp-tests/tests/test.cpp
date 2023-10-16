#include <gtest/gtest.h>

#include "2d.test.cpp"
#include "3d.test.cpp"
#include "utils.test.cpp"

int main(int argc, char** argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
