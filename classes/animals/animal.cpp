#include "./animal.h"
#include <print>
Animal::Animal(std::string_view description) : description(description) {}
auto Animal::breathe() const -> void {
  std::println("Animal is breathing called for {}", description);
}
