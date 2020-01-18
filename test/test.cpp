#include "../src/fib.hpp"
#include <gtest/gtest.h>

TEST(FibTest, Five) {
  Fib testFib = Fib();
  ASSERT_EQ(5, testFib.calculate(5));
}

int main(int argc, char ** argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
