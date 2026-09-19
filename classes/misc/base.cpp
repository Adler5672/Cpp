#include "base.hpp"
[[nodiscard]] auto Base::add(const double &a, const double &b) const -> double {
  std::println("Base::add({},{})", a, b);
  return a + b;
}
