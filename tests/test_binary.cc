#include "lazy/lazy.hh"
#include <gtest/gtest.h>

TEST(BinaryOperator, AddInt) {
  lazy::lazy<int> a(1);
  lazy::lazy<int> b(2);
  auto mid = a + b;
  lazy::lazy<int> res = mid;
  EXPECT_EQ(res, 3);
}

TEST(BinaryOperator, AddDouble) {
  lazy::lazy<double> a(1.5);
  lazy::lazy<double> b(2.5);
  auto mid = a + b;
  lazy::lazy<double> res = mid;
  EXPECT_EQ(res, 4.0);
}

TEST(BinaryOperator, SubtractInt) {
  lazy::lazy<int> a(1);
  lazy::lazy<int> b(2);
  auto mid = a - b;
  lazy::lazy<int> res = mid;
  EXPECT_EQ(res, -1);
}

TEST(BinaryOperator, SubtractDouble) {
  lazy::lazy<double> a(1.5);
  lazy::lazy<double> b(2.5);
  auto mid = a - b;
  lazy::lazy<double> res = mid;
  EXPECT_EQ(res, -1.0);
}

TEST(BinaryOperator, MultiplyInt) {
  lazy::lazy<int> a(2);
  lazy::lazy<int> b(3);
  auto mid = a * b;
  lazy::lazy<int> res = mid;
  EXPECT_EQ(res, 6);
}

TEST(BinaryOperator, MultiplyDouble) {
  lazy::lazy<double> a(1.5);
  lazy::lazy<double> b(2.5);
  auto mid = a * b;
  lazy::lazy<double> res = mid;
  EXPECT_EQ(res, 3.75);
}

TEST(BinaryOperator, DivideInt) {
  lazy::lazy<int> a(6);
  lazy::lazy<int> b(3);
  auto mid = a / b;
  lazy::lazy<int> res = mid;
  EXPECT_EQ(res, 2);
}

TEST(BinaryOperator, DivideDouble) {
  lazy::lazy<double> a(6.0);
  lazy::lazy<double> b(3.0);
  auto mid = a / b;
  lazy::lazy<double> res = mid;
  EXPECT_EQ(res, 2.0);
}
