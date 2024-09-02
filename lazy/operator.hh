/*
 * Copyright (c) 2024 WATANABE Aoi
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef __LAZY__OPERATOR__
#define __LAZY__OPERATOR__

#include "decl.hh"
#include <iostream>

namespace lazy::op
{
  namespace unary
  {
    template <typename XprType>
    struct pp : public base<pp<XprType>>
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
    struct mm : public base<mm<XprType>>
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
    struct sum : public base<sum<Lhs, Rhs>>
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
    struct sub : public base<sub<Lhs, Rhs>>
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
    struct mul : public base<mul<Lhs, Rhs>>
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
    struct div : public base<div<Lhs, Rhs>>
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
} // namespace lazy::op

#endif
