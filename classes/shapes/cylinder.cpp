#include "cylinder.h"
#include "constants.h"

// Suppress clang-tidy/clang static analyzer warning about easily-swappable
// adjacent double parameters: the order here is intentional.
Cylinder::Cylinder(double base_radius_param, double height_param)  // NOLINT(bugprone-easily-swappable-parameters)
  : base_radius(base_radius_param), height(height_param) {}

auto Cylinder::volume() -> double { return PI * base_radius * base_radius * height; }

auto Cylinder::get_base_radius() -> double { return base_radius; }
auto Cylinder::get_height() -> double { return height; }

auto Cylinder::set_base_radius(double base_radius_param) -> void {
  base_radius = base_radius_param;
}
auto Cylinder::set_height(double height_param) -> void { height = height_param; }
