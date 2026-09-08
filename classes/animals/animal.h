#pragma once
#include <string>

class Animal {
public:
  Animal() = default;
  Animal(const Animal &) = default;
  Animal(Animal &&) = delete;
  auto operator=(const Animal &) -> Animal & = default;
  auto operator=(Animal &&) -> Animal & = delete;
  Animal(std::string_view description);
  virtual ~Animal() = default;

  virtual auto breathe() const -> void;

protected:
  std::string description;
};
