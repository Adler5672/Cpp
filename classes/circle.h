#pragma once
#include "oval.h"
#include <print>

class Circle : public Oval {
public:
  Circle() = default;
  Circle(const double &radius, std::string_view description);
  ~Circle() override = default;

  auto draw() const -> void override {
    std::println("Circle drawing {} with radius {}", description, get_x_radius());
  }
};
