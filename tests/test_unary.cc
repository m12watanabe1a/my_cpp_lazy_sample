#include "lazy/lazy.hh"
#include <gtest/gtest.h>

TEST(UnaryOperator, Plus) {
  lazy::lazy<int> a(1);
  auto mid = +a;
  lazy::lazy<int> res = mid;
  EXPECT_EQ(res, 1);
}

TEST(UnaryOperator, Minus) {
  lazy::lazy<int> a(1);
  auto mid = -a;
  lazy::lazy<int> res = mid;
  EXPECT_EQ(res, -1);
}
