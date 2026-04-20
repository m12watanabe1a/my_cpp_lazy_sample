#include "lazy/lazy.hh"
#include <gtest/gtest.h>

TEST(UnaryOperator, PlusInt) {
  lazy::lazy<int> a(1);
  auto mid = +a;
  lazy::lazy<int> res = mid;
  EXPECT_EQ(res, 1);
}

TEST(UnaryOperator, PlusDouble) {
  lazy::lazy<double> a(1.5);
  auto mid = +a;
  lazy::lazy<double> res = mid;
  EXPECT_EQ(res, 1.5);
}

TEST(UnaryOperator, MinusInt) {
  lazy::lazy<int> a(1);
  auto mid = -a;
  lazy::lazy<int> res = mid;
  EXPECT_EQ(res, -1);
}

TEST(UnaryOperator, MinusDouble) {
  lazy::lazy<double> a(1.5);
  auto mid = -a;
  lazy::lazy<double> res = mid;
  EXPECT_EQ(res, -1.5);
}
