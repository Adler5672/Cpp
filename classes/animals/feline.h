#pragma once
#include "animal.h"

class Feline : public Animal {
public:
  Feline() = default;
  Feline(const Feline &) = default;
  Feline(Feline &&) = delete;
  auto operator=(const Feline &) -> Feline & = default;
  auto operator=(Feline &&) -> Feline & = delete;
  Feline(std::string_view fur_style, std::string_view description);
  ~Feline() override = default;
  std::string fur_style;
  virtual void run() const;
};
