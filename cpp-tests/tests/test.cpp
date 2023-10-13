#include <gtest/gtest.h>
#include "utils.test.cpp"
#include "3d.test.cpp"
#include "2d.test.cpp"

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
