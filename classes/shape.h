#pragma once
#include <iostream>

class Shape {
public:
  Shape() = default;
  Shape(std::string_view description);
  virtual ~Shape() = default;

  virtual auto draw() const -> void { std::cout << "Drawing " << description << '\n'; }

protected:
  std::string description;
};
