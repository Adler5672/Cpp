#pragma once
#include <ostream>
#include <string>
#ifndef PERSON_H
#define PERSON_H

class Person {
  friend auto operator<<(std::ostream &os, const Person &person) -> std::ostream &;

public:
  Person() = default;
  Person(std::string_view first_name_param, std::string_view last_name_param, const int &age_param, std::string_view secret_param, const uint8_t &sks_param);
  Person(const Person &source); // Copy constructor are not inherited, so we need to define it explicitly
  ~Person();

  // Getters
  [[nodiscard]] auto get_first_name() const -> std::string { return first_name; }
  [[nodiscard]] auto get_last_name() const -> std::string { return last_name; }
  [[nodiscard]] auto get_age() const -> int;

  auto set_first_name(std::string_view first_name) -> void { this->first_name = first_name; }

  auto set_last_name(std::string_view last_name) -> void { this->last_name = last_name; }

  auto set_age(int p_age) -> Person * {
    if (this->p_age == nullptr) {
      this->p_age = new int;
    }
    *(this->p_age) = p_age;
    return this;
  }

  std::string secret;

protected:
  std::string first_name;
  std::string last_name;
  int *p_age{nullptr};


private:
  uint8_t sks;

};
#endif // PERSON_H
