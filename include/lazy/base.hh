/*
 * Copyright (c) 2024 WATANABE Aoi
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef __LAZY__BASE__
#define __LAZY__BASE__

#include "decl.hh"
#include <ostream>

namespace lazy
{
  template <typename T>
  struct base
  {
  public:
    T &derived()
    {
      return *static_cast<T *>(this);
    }
    const T &derived() const
    {
      return *static_cast<const T *>(this);
    }

  public:
    base() = default;
    /* Unary Operator */
    auto operator+() const
    {
      return op::unary::pp(this->derived());
    }

    auto operator-() const
    {
      return op::unary::mm(this->derived());
    }

    /* Binary Operator */
    template <typename Rhs>
    auto operator+(const Rhs &r)
    {
      return op::binary::sum(this->derived(), r.derived());
    }

    template <typename Rhs>
    auto operator-(const Rhs &r)
    {
      return op::binary::sub(this->derived(), r.derived());
    }

    template <typename Rhs>
    auto operator*(const Rhs &r)
    {
      return op::binary::mul(this->derived(), r.derived());
    }

    template <typename Rhs>
    auto operator/(const Rhs &r)
    {
      return op::binary::div(this->derived(), r.derived());
    }
  };
} // namespace lazy

#endif
