#include "oval.h"
#include <print>


Oval::Oval(const double &x_radius, const double &y_radius, std::string_view description) : Shape(description), x_radius(x_radius), y_radius(y_radius){}
auto Oval::draw() const -> void {
  std::println("Oval drawing {} with x radius {} with y radius {}", description, x_radius,
               y_radius);
}
auto Oval::perimeter() const -> double {
  // Approximation of the perimeter of an oval using Ramanujan's formula
  double h = (x_radius - y_radius) * (x_radius - y_radius) / ((x_radius + y_radius) * (x_radius + y_radius));
  return M_PI * (x_radius + y_radius) * (1 + (3 * h) / (10 + std::sqrt(4 - 3 * h)));
}
auto Oval::surface_area() const -> double {
  return M_PI * x_radius * y_radius;
}

[[nodiscard]] auto Oval::get_x_radius() const -> double { return x_radius; }
[[nodiscard]] auto Oval::get_y_radius() const -> double { return y_radius; }
