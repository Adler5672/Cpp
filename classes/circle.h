#pragma once
#include "oval.h"

class Circle : public Oval {
public:
  Circle() = default;
  Circle(const double &radius, std::string_view description);
  ~Circle() override = default;

  auto draw() const -> void override {
    std::cout << "Circle drawing " << description << " with radius " << get_x_radius() << '\n';
  }
};
