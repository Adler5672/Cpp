#include "bird.h"
#include <print>

// NOLINTNEXTLINE(bugprone-easily-swappable-parameters)
Bird::Bird(std::string_view wing_color, std::string_view description)
    : Animal(description), wing_color(wing_color) {}

void Bird::fly() const {
  // Implementaotion for flying
  std::println("Bird is flying with wing color: {} and description: {}",
               wing_color, description);
}

auto Bird::format() const -> std::string {
  return std::format("Bird({}, {})", wing_color, description);
}
