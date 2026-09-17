#include "ellipse.h"
#include <print>

int Ellipse::count{0};

Ellipse::Ellipse(double x_radius, double y_radius, std::string_view description)
    : Shape(description), x_radius(x_radius), y_radius(y_radius) {
  ++count;
}

auto Ellipse::draw() const -> void { std::println("Drawing ellipse: {}", description); }

auto Ellipse::draw(const int &color_depth) const -> void {
  std::println("Drawing ellipse: {} with color depth {}", description, color_depth);
}

auto Ellipse::get_count() const -> int { return count; }

Ellipse::~Ellipse() { --count; }
