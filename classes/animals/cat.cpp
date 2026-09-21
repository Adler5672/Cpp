#include "cat.h"
#include <print>

Cat::Cat(std::string_view fur_style, std::string_view description)
    : Feline(fur_style, description) {}

auto Cat::meow() const -> void { std::println("Meow!"); }

auto Cat::breathe() const -> void { std::println("The cat breathes gently."); }

auto Cat::run() const -> void { std::println("The cat runs gracefully."); }

auto Cat::format() const -> std::string {
  return std::format("Cat({}, {}, {})", fur_style, description, m_name);
}
