#pragma once

#include <string>
class Shape {
public:
  Shape() = default;
  Shape(const Shape &) = default;
  Shape(Shape &&) = delete;
  auto operator=(const Shape &) -> Shape & = default;
  auto operator=(Shape &&) -> Shape & = delete;
  Shape(std::string_view description);
  virtual ~Shape() = default;

  virtual auto draw() const -> void;
  virtual auto draw(const int &color_depth) const -> void;

protected:
  std::string description;
};
