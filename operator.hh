/*
 * Copyright (c) 2024 WATANABE Aoi
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <iostream>

namespace op
{
  namespace unary
  {
    template <typename XprType>
    struct pp
    {
    private:
      const XprType &xpr;

    public:
      explicit pp(const XprType &x) : xpr(x) {}

      template <typename T>
      operator T() const
      {
        return +static_cast<T>(xpr);
      }
    };

    template <typename XprType>
    struct mm
    {
    private:
      const XprType &xpr;

    public:
      explicit mm(const XprType &x) : xpr(x) {}

      template <typename T>
      operator T() const
      {
        return -static_cast<T>(xpr);
      }
    };
  }

  namespace binary
  {
    template <typename Lhs, typename Rhs>
    struct sum
    {
    private:
      const Lhs &lhs;
      const Rhs &rhs;

    public:
      explicit sum(const Lhs &l, const Rhs &r) : lhs(l), rhs(r) {}

      template <typename T>
      operator T() const
      {
        return static_cast<T>(lhs) + static_cast<T>(rhs);
      }
    };

    template <typename Lhs, typename Rhs>
    struct sub
    {
    private:
      const Lhs &lhs;
      const Rhs &rhs;

    public:
      explicit sub(const Lhs &l, const Rhs &r) : lhs(l), rhs(r) {}

      template <typename T>
      operator T() const
      {
        return static_cast<T>(lhs) - static_cast<T>(rhs);
      }
    };

    template <typename Lhs, typename Rhs>
    struct mul
    {
    private:
      const Lhs &lhs;
      const Rhs &rhs;

    public:
      explicit mul(const Lhs &l, const Rhs &r) : lhs(l), rhs(r) {}

      template <typename T>
      operator T() const
      {
        return static_cast<T>(lhs) * static_cast<T>(rhs);
      }
    };

    template <typename Lhs, typename Rhs>
    struct div
    {
    private:
      const Lhs &lhs;
      const Rhs &rhs;

    public:
      explicit div(const Lhs &l, const Rhs &r) : lhs(l), rhs(r) {}

      template <typename T>
      operator T() const
      {
        return static_cast<T>(lhs) / static_cast<T>(rhs);
      }
    };
  } // namespace binary
} // namespace op
