#pragma once
#include "oval.h"

class Circle : public Oval {
public:
  Circle() = default;
  Circle(const double &radius, std::string_view description);
  ~Circle() = default;

  auto draw() -> const void {
    std::cout << "Circle drawing " << description << " with radius " << get_x_radius() << '\n';
  }
};
