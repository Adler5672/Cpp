#include "shape.h"
#include <print>

Shape::Shape(std::string_view description) : description(description){}
auto Shape::draw() const -> void { std::println("Drawing {}", description); }
auto Shape::draw(const int &color_depth) const -> void {
  std::println("Drawing {} with color depth {}", description, color_depth);
}
