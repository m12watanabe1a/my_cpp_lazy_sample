/*
 * Copyright (c) 2024 WATANABE Aoi
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "operator.hh"
#include <ostream>

namespace lazy
{
  template <typename T>
  struct lazy
  {
  private:
    const T val;

  public:
    lazy() {};
    lazy(const T &v) : val(v) {};
    lazy(const T &&v) : val(v) {};
    template <typename OT>
    lazy(OT &o) : val(static_cast<T>(o))
    {
    }

    /* Unary Operator */
    template <typename Xpr>
    friend auto operator+(const Xpr &x)
    {
      return op::unary::pp(x);
    }

    template <typename Xpr>
    friend auto operator-(const Xpr &x)
    {
      return op::unary::mm(x);
    }

    /* Binary Operator */
    template <typename Lhs, typename Rhs>
    friend auto operator+(const Lhs &l, const Rhs &r)
    {
      return op::binary::sum(l, r);
    }

    template <typename Lhs, typename Rhs>
    friend auto operator-(const Lhs &l, const Rhs &r)
    {
      return op::binary::sub(l, r);
    }

    template <typename Lhs, typename Rhs>
    friend auto operator*(const Lhs &l, const Rhs &r)
    {
      return op::binary::mul(l, r);
    }

    template <typename Lhs, typename Rhs>
    friend auto operator/(const Lhs &l, const Rhs &r)
    {
      return op::binary::div(l, r);
    }

    operator T() const
    {
      return this->val;
    }

    friend std::ostream &operator<<(std::ostream &os, const lazy &l)
    {
      os << l.val;
      return os;
    }
  };
} // namespace lazy
