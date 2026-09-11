#include "crow.h"
#include <print>

// NOLINTNEXTLINE(bugprone-easily-swappable-parameters)
Crow::Crow(std::string_view wing_color, std::string_view description)
    : Bird(wing_color, description) {}

void Crow::caw() const { std::println("Crow is cawing! for {}", description); }

void Crow::breathe() const { std::println("Crow is breathing! for {}", description); }
auto Crow::fly() const -> void { std::println("Crow is flying.. {}", description); }
