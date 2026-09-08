#include "oval.h"
#include <print>


Oval::Oval(const double &x_radius, const double &y_radius, std::string_view description) : Shape(description), x_radius(x_radius), y_radius(y_radius){}
auto Oval::draw() const -> void {
  std::println("Oval drawing {} with x radius {} with y radius {}", description, x_radius,
               y_radius);
}
auto Oval::draw(const int &color_depth) const -> void {
  std::println("Oval drawing {} with x radius {} with y radius {} with color depth {}", description,
               x_radius, y_radius, color_depth);
}
[[nodiscard]] auto Oval::get_x_radius() const -> double { return x_radius; }
[[nodiscard]] auto Oval::get_y_radius() const -> double { return y_radius; }
