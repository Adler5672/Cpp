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
