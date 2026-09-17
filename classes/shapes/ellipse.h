#pragma once

#include "shape.h"

class Ellipse : public Shape {
public:
  Ellipse(const Ellipse &) = default;
  Ellipse(Ellipse &&) = delete;
  auto operator=(const Ellipse &) -> Ellipse & = default;
  auto operator=(Ellipse &&) -> Ellipse & = delete;
  Ellipse(double x_radius, double y_radius, std::string_view description);
  virtual ~Ellipse();
  auto draw() const -> void override;
  auto draw(const int &color_depth) const -> void override;
  [[nodiscard]] auto get_count() const -> int override;
  static int count;

private:
  double x_radius{0.0};
  double y_radius{0.0};
};
