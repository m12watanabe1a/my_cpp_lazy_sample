/*
 * Copyright (c) 2024 WATANABE Aoi
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef __LAZY__LAZY__
#define __LAZY__LAZY__

#include <ostream>
#include <vector>
#include "decl.hh"
#include "base.hh"
#include "operator.hh"

namespace lazy
{
  template <typename T>
  struct lazy : public base<lazy<T>>
  {
  private:
    T storage;

  public:
    lazy() {};
    lazy(T &v) : storage(v) {};
    lazy(T &&v) : storage(v) {};
    template <typename OT>
    lazy(OT &o) : storage(static_cast<T>(o))
    {
    }

    operator T() const
    {
      return this->storage;
    }

    friend std::ostream &operator<<(std::ostream &os, const lazy &s)
    {
      os << s.storage;
      return os;
    }
  };
} // namespace lazy

#endif
