#pragma once
#include "feline.h"
#include <string>

class Cat final : public Feline {
public:
  Cat() = default;
  Cat(const Cat &) = default;
  Cat(Cat &&) = delete;
  auto operator=(const Cat &) -> Cat & = default;
  auto operator=(Cat &&) -> Cat & = delete;
  Cat(std::string_view fur_style, std::string_view description);
  ~Cat() override = default;

  auto meow() const -> void;
  auto breathe() const -> void override;
  auto run() const -> void final;

  std::string m_name;
};
