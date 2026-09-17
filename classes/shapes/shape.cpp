#include "shape.h"
#include <print>
int Shape::count = 0;

Shape::Shape(std::string_view description) : description(description){
  ++count;
}
auto Shape::draw() const -> void { std::println("Drawing {}", description); }
auto Shape::draw(const int &color_depth) const -> void {
  std::println("Drawing {} with color depth {}", description, color_depth);
}
auto Shape::get_count() const -> int { return count; }
Shape::~Shape() { --count; }
