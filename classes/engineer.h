#pragma once
#ifndef ENGINEER_H
#define ENGINEER_H
#include "person.h"

class Engineer : private Person {
  friend auto operator<<(std::ostream &out, const Engineer &operand) -> std::ostream &;
  using Person::Person; // Inherit constructor from Person class

public:
  Engineer();
  Engineer(std::string_view first_name_param, std::string_view last_name_param,
           const int &age_param, std::string_view secret_param, const uint8_t &sks_param,
           int contract_count);
  Engineer(const Engineer &source);
  ~Engineer();
  using Person::secret;

  auto build() -> void;

protected:
  // Resurected members from Person class
  using Person::get_age;
  using Person::get_first_name;
  using Person::get_last_name;

private:
  int contract_count{0};
};

#endif // ENGINEER_H
