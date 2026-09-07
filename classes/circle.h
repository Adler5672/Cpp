#pragma once
#include "oval.h"
#include <string_view>

class Circle : public Oval {
public:
  Circle() = default;
  Circle(const double &radius, std::string_view description);
  ~Circle() override = default;

  auto draw() const -> void override;
  auto draw(const int &color_depth) const -> void override;
};
