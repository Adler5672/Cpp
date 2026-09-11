#include "dog.h"
#include <print>

Dog::Dog(std::string_view name_param, std::string_view breed_param, int p_age_param) {
  name = name_param;
  breed = breed_param;
  p_age = new int;
  *p_age = p_age_param;
  std::println("Dog constructor called for {} at address {}", name,
               static_cast<const void *>(this));
}

Dog::~Dog() {
  delete p_age;
  p_age = nullptr;
  std::println("Dog destructor called for {} at address {}", name, static_cast<const void *>(this));
}
[[nodiscard]] auto Dog::get_age() const -> int { return (p_age != nullptr) ? *p_age : 0; }
auto Dog::set_name(std::string_view name) -> Dog & {
  this->name = name;
  return *this;
}
auto Dog::set_breed(std::string_view breed) -> Dog & {
  this->breed = breed;
  return *this;
}
auto Dog::set_age(int p_age_param) -> Dog & {
  p_age = (p_age == nullptr) ? new int : p_age;
  *(this->p_age) = p_age_param;
  return *this;
}
[[nodiscard]] auto Dog::get_name() const -> std::string { return name; }
[[nodiscard]] auto Dog::get_breed() const -> std::string { return breed; }
auto Dog::bark() const -> void { std::println("Woof! My name is {}", name); }
auto Dog::breathe() const -> void { std::println("Dog is breathing {}", description); }
auto Dog::run() const -> void {
  std::println("Dog is running");
}
