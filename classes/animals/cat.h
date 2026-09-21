#pragma once
#include "feline.h"
#include <string>

class Cat final : public Feline {
public:
  Cat() = default;
  Cat(const Cat &) = delete;
  Cat(Cat &&) = delete;
  auto operator=(const Cat &) -> Cat & = delete;
  auto operator=(Cat &&) -> Cat & = delete;
  Cat(std::string_view fur_style, std::string_view description);
  ~Cat() override = default;

  auto meow() const -> void;
  auto breathe() const -> void override;
  auto run() const -> void final;

  [[nodiscard]] auto format() const -> std::string override;

  std::string m_name;
};
