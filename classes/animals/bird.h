#pragma once
#include "animal.h"
class Bird : public Animal {
public:
  Bird() = default;
  Bird(const Bird &) = delete;
  Bird(Bird &&) = delete;
  auto operator=(const Bird &) -> Bird & = delete;
  auto operator=(Bird &&) -> Bird & = delete;
  Bird(std::string_view wing_color, std::string_view description);
  ~Bird() override = default;

  virtual auto fly() const -> void;
  [[nodiscard]] auto format() const -> std::string override;

protected:
  std::string wing_color;
};
