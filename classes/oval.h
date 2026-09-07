#pragma once
#include "shape.h"
#include <string_view>

class Oval : public Shape {
public:
  Oval() = default;
  Oval(const Oval &) = default;
  Oval(Oval &&) = delete;
  auto operator=(const Oval &) -> Oval & = default;
  auto operator=(Oval &&) -> Oval & = delete;
  Oval(const double &x_radius, const double &y_radius, std::string_view description);
  ~Oval() override = default;

  auto draw() const -> void override;

  auto draw(const int &color_depth) const -> void override;

protected:
  [[nodiscard]] auto get_x_radius() const -> double;
  [[nodiscard]] auto get_y_radius() const -> double;

private:
  double x_radius{0.0};
  double y_radius{0.0};
};
