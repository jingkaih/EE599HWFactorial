#include "src/lib/solution.h"
#include "gtest/gtest.h"

TEST(FactorialShould, Work) {
  Solution solution;
  int a = 0, b = 10;

  unsigned long long int actual_0 = solution.Factorial_Re(a);
  int expected_0 = 1;
  unsigned long long int actual_1 = solution.Factorial_NonRe(b);
  int expected_1 = 3628800;
  EXPECT_EQ(expected_0, actual_0);
  EXPECT_EQ(expected_1, actual_1);
}