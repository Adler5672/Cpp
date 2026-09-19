#pragma once

class Base {
public:
  Base() = default;
  Base(const Base &) = default;
  Base(Base &&) = delete;
  auto operator=(const Base &) -> Base & = default;
  auto operator=(Base &&) -> Base & = delete;
  virtual ~Base() = default;

  [[nodiscard]] virtual auto add(const double &a = 5.0,
                                 const double &b = 5.0) const -> double;
};
