#pragma once
#include <print>

class Shape {
public:
  Shape() = default;
  Shape(std::string_view description);
  virtual ~Shape() = default;

  virtual auto draw() const -> void { std::println("Drawing {}", description); }

protected:
  std::string description;
};
