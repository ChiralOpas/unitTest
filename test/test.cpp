#include <gtest/gtest.h>
#include "../src/sum.h"

TEST(app_sum, valid_input_passes) {

	EXPECT_EQ(Sum(2, 4), 6);
}

TEST(app_sum, invalid_input_fails) {

	EXPECT_NE(Sum(2, 4), 8);
}
