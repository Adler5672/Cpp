#include "feline.h"
#include <print>
// NOLINTNEXTLINE(bugprone-easily-swappable-parameters)
Feline::Feline(std::string_view fur_style, std::string_view description)
    : Animal(description), fur_style(fur_style) {}
void Feline::run() const {
  std::println("Feline is running with fur style: {} and description: {}", fur_style, description);
}
void Feline::do_something() const {
  std::println("Feline is doing something with fur style: {} and description: {}", fur_style, description);
}
auto Feline::format() const -> std::string {
  return std::format("Feline({}, {})", fur_style, description);
}
