/*
 * Copyright (c) 2024 WATANABE Aoi
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "lazy.hh"
#include <iostream>

int main()
{
  lazy::lazy<double> l1 = 1.0;
  lazy::lazy<double> l2 = 2.0;
  lazy::lazy<double> l3 = 3.0;
  lazy::lazy<double> l4 = 4.0;

  // Create a lazy expression for the computation
  // The computation here is not evaluated immediately;
  // Instead, it is stored as a delayed operation.
  auto mid = l1 + l2 * -l3 / l4;

  // The following line would print the type information of 'mid'
  // to show that it is a lazy expression.
  std::cout << "Type of lazy expression: " << typeid(mid).name() << std::endl;

  // Evaluate the lazy expression and print the result
  lazy::lazy<double> result = mid;
  std::cout << "Result: " << result << std::endl;
  return EXIT_SUCCESS;
}
