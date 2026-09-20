#include "ellipse.h"
#include <print>


Ellipse::Ellipse(double x_radius, double y_radius, std::string_view description)
    : Shape(description), x_radius(x_radius), y_radius(y_radius) {
  ++count;
}

auto Ellipse::draw() const -> void { std::println("Drawing ellipse: {}", description); }

auto Ellipse::draw(const int &color_depth) const -> void {
  std::println("Drawing ellipse: {} with color depth {}", description, color_depth);
}

auto Ellipse::get_count() const -> int { return count; }

auto Ellipse::perimeter() const -> double {
  // Approximation of the perimeter of an ellipse using Ramanujan's formula
  double h = (x_radius - y_radius) * (x_radius - y_radius) / ((x_radius + y_radius) * (x_radius + y_radius));
  return M_PI * (x_radius + y_radius) * (1 + (3 * h) / (10 + std::sqrt(4 - 3 * h)));
}

auto Ellipse::surface_area() const -> double {
  return M_PI * x_radius * y_radius;
}

Ellipse::~Ellipse() { --count; }
