#include "derived.hpp"
#include <print>
[[nodiscard]] auto Derived::add(const double &a, const double &b) const -> double {
  std::println("Derived::add({},{})", a, b);
  return a + b + 2;
}
