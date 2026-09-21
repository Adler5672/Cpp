#pragma once
#include <string>
#include "feline.h"

class Dog : public Feline {
public:
  Dog() = default;
  Dog(const Dog &) = delete;
  Dog(Dog &&) = delete;
  auto operator=(const Dog &) -> Dog & = delete;
  auto operator=(Dog &&) -> Dog & = delete;
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
  auto set_name(std::string_view name) -> Dog &;
  auto set_breed(std::string_view breed) -> Dog &;
  auto set_age(int p_age_param) -> Dog &;

  // Getters
  [[nodiscard]] auto get_name() const -> std::string;
  [[nodiscard]] auto get_breed() const -> std::string;
  [[nodiscard]] auto get_age() const -> int;
  ~Dog() override;

  virtual auto bark() const -> void;
  auto breathe() const -> void override;
  auto run() const -> void final;
  [[nodiscard]] auto format() const -> std::string override;

private:
  std::string name;
  std::string breed;
  int *p_age{nullptr};
};
