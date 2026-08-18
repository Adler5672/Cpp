#pragma once
#include <string>
class Dog {
public:
  Dog() = default;
  Dog(std::string_view name_param, std::string_view breed_param, int p_age_param);

  // Setters
  // Using Pointers
  /*
  auto set_name(std::string_view name) -> Dog * {
    this->name = name;
    return this;
  }
  auto set_breed(std::string_view breed) -> Dog * {
    this->breed = breed;
    return this;
  }
  auto set_age(int p_age_param) -> Dog * {
    if (p_age == nullptr) {
      p_age = new int;
    }
    *(this->p_age) = p_age_param;
    return this;
  }
  */

  // Teferences
  auto set_name(std::string_view name) -> Dog & {
    this->name = name;
    return *this;
  }
  auto set_breed(std::string_view breed) -> Dog & {
    this->breed = breed;
    return *this;
  }
  auto set_age(int p_age_param) -> Dog & {
    if (p_age == nullptr) {
      p_age = new int;
    }
    *(this->p_age) = p_age_param;
    return *this;
  }

  // Getters
  [[nodiscard]] auto get_name() const -> std::string { return name; }
  [[nodiscard]] auto get_breed() const -> std::string { return breed; }
  [[nodiscard]] auto get_age() const -> int;
  ~Dog();

private:
  std::string name;
  std::string breed;
  int *p_age{nullptr};
};