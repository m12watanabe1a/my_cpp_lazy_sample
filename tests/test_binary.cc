#include "lazy/lazy.hh"
#include <gtest/gtest.h>

TEST(BinaryOperator, Add) {
  lazy::lazy<int> a(1);
  lazy::lazy<int> b(2);
  auto mid = a + b;
  lazy::lazy<int> res = mid;
  EXPECT_EQ(res, 3);
}

TEST(BinaryOperator, Subtract) {
  lazy::lazy<int> a(1);
  lazy::lazy<int> b(2);
  auto mid = a - b;
  lazy::lazy<int> res = mid;
  EXPECT_EQ(res, -1);
}

TEST(BinaryOperator, Multiply) {
  lazy::lazy<int> a(2);
  lazy::lazy<int> b(3);
  auto mid = a * b;
  lazy::lazy<int> res = mid;
  EXPECT_EQ(res, 6);
}

TEST(BinaryOperator, Divide) {
  lazy::lazy<int> a(6);
  lazy::lazy<int> b(3);
  auto mid = a / b;
  lazy::lazy<int> res = mid;
  EXPECT_EQ(res, 2);
}