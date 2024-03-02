#include <gtest/gtest.h>

#include "utils.h"

TEST(AddFunction, ReturnsSumOfTwoPositiveNumbers) {
  EXPECT_EQ(add(1, 2), 3);
}

TEST(AddFunction, ReturnsSumOfTwoNegativeNumbers) {
  EXPECT_EQ(add(-1, -2), -3);
}

TEST(AddFunction, ReturnsZeroWhenAddingPositiveAndNegativeOfSameValue) {
  EXPECT_EQ(add(5, -5), 0);
}

TEST(AddFunction, ReturnsSumOfZeroAndNumber) {
  EXPECT_EQ(add(0, 5), 5);
}

TEST(AddFunction, ReturnsSumOfNumberAndZero) {
  EXPECT_EQ(add(5, 0), 5);
}

TEST(AddFunction, ReturnsSumOfTwoLargeNumbers) {
  EXPECT_EQ(add(1000000, 2000000), 3000000);
}

TEST(AddFunction, ReturnsSumOfTwoNegativeLargeNumbers) {
  EXPECT_EQ(add(-1000000, -2000000), -3000000);
}

TEST(AddFunction, ReturnsSumOfLargeNumberAndZero) {
  EXPECT_EQ(add(5000000, 0), 5000000);
}

TEST(AddFunction, ReturnsSumOfZeroAndLargeNumber) {
  EXPECT_EQ(add(0, 5000000), 5000000);
}
