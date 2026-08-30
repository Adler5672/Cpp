#pragma once
#include "shape.h"

class Oval : public Shape {
public:
  Oval() = default;
  Oval(const double &x_radius, const double &y_radius, std::string_view description);
  ~Oval() override = default;

  auto draw() const -> void override {
    std::cout << "Oval drawing " << description << " with x radius " << x_radius
              << "  with y radius" << y_radius << '\n';
  }

protected:
  [[nodiscard]] auto get_x_radius() const -> double { return x_radius; }
  [[nodiscard]] auto get_y_radius() const -> double { return y_radius; }

private:
  double x_radius{0.0};
  double y_radius{0.0};
};
