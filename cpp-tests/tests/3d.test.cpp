#include <gtest/gtest.h>
#include "../src/3d.h"

TEST(CuboidTest, Volume) {
    Rectangle base(4, 5);
    Cuboid cuboid(base, 6);
    EXPECT_DOUBLE_EQ(cuboid.volume(), 120);
}

TEST(CuboidTest, SurfaceArea) {
    Rectangle base(4, 5);
    Cuboid cuboid(base, 6);
    EXPECT_DOUBLE_EQ(cuboid.surfaceArea(), 148);
}

TEST(CubeTest, Volume) {
    Cube cube(3);
    EXPECT_DOUBLE_EQ(cube.volume(), 27);
}

TEST(CubeTest, SurfaceArea) {
    Cube cube(3);
    EXPECT_DOUBLE_EQ(cube.surfaceArea(), 54);
}
