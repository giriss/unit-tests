#include <gtest/gtest.h>
#include "../src/utils.h"

// Test the volume method of the Cuboid class
TEST(UtilsTest, PowerOf) {
    EXPECT_DOUBLE_EQ(power(2, 3), 8);
    EXPECT_DOUBLE_EQ(power(4, 5), 1024);
    EXPECT_DOUBLE_EQ(power(1.5, 4), 5.0625);
}
