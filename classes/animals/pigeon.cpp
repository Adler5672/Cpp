#include "pigeon.h"
#include <print>

// NOLINTNEXTLINE(bugprone-easily-swappable-parameters)
Pigeon::Pigeon(std::string_view wing_color, std::string_view description)
    : Bird(wing_color, description) {}

void Pigeon::coo() const {
  std::println("Pigeon is cooing! for {}", description);
}

void Pigeon::breathe() const {
  std::println("Pigeon is breathing! for {}", description);
}
auto Pigeon::fly() const -> void {
  std::println("Pigeon is flyinggg {}", description);
}

auto Pigeon::format() const -> std::string {
  return std::format("Pigeon({}, {})", wing_color, description);
}
