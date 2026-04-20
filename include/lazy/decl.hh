/*
 * Copyright (c) 2024 WATANABE Aoi
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef __LAZY__DECL__
#define __LAZY__DECL__

namespace lazy
{
  template <typename T>
  struct base;

  namespace op
  {
    namespace unary
    {
      template <typename XprType>
      struct pp;

      template <typename XprType>
      struct mm;
    } // namespace unary

    namespace binary
    {
      template <typename Lhs, typename Rhs>
      struct sum;

      template <typename Lhs, typename Rhs>
      struct sub;

      template <typename Lhs, typename Rhs>
      struct mul;

      template <typename Lhs, typename Rhs>
      struct div;
    } // namespace binary

  } // namespace op
} // namespace lazy

#endif
