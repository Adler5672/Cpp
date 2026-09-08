#pragma once
#include "feline.h"
#include <string>

class Cat : public Feline {
public:
  Cat() = default;
  Cat(const Cat &) = default;
  Cat(Cat &&) = delete;
  auto operator=(const Cat &) -> Cat & = default;
  auto operator=(Cat &&) -> Cat & = delete;
  Cat(std::string_view fur_style, std::string_view description);
  ~Cat() override = default;

  virtual auto meow() const -> void;
  auto breathe() const -> void override;

  std::string m_name;
};
