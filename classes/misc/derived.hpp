#pragma once
#include "base.hpp"

class Derived : public Base {
public:
  Derived() = default;
  Derived(const Derived &) = default;
  Derived(Derived &&) = delete;
  auto operator=(const Derived &) -> Derived & = default;
  auto operator=(Derived &&) -> Derived & = delete;
  ~Derived() override = default;

  [[nodiscard]] auto add(const double &a = 10.0, const double &b = 10.0) const
      -> double override;
};
