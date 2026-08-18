#pragma once
#ifndef CYLINDER_H
#define CYLINDER_H  

class Cylinder {
private:
  double base_radius{};
  double height{};

public:
  Cylinder() = default;
  Cylinder(double base_radius_param, double height_param);
  // Getter methods
  auto get_base_radius() -> double;
  auto get_height() -> double;

  auto set_base_radius(double base_radius_param) -> void;
  auto set_height(double height_param) -> void;

  auto volume() -> double;
};
#endif
