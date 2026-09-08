#include "circle.h"
#include <print>

Circle::Circle(const double &radius, std::string_view description) : Oval(radius, radius, description){}
auto Circle::draw() const -> void {
  std::println("Circle drawing {} with radius {}", description, get_x_radius());
}
auto Circle::draw(const int &color_depth) const -> void {
  std::println("Circle drawing {} with radius {} with color depth {}", description, get_x_radius(),
               color_depth);
}
