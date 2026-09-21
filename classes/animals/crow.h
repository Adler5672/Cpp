#pragma once
#include "bird.h"

class Crow : public Bird {
public:
  Crow() = default;
  Crow(const Crow &) = delete;
  Crow(Crow &&) = delete;
  auto operator=(const Crow &) -> Crow & = delete;
  auto operator=(Crow &&) -> Crow & = delete;
  Crow(std::string_view wing_color, std::string_view description);
  ~Crow() override = default;

  virtual auto caw() const -> void;
  auto breathe() const -> void override;
  auto fly() const -> void override;
  [[nodiscard]] auto format() const -> std::string override;
};
