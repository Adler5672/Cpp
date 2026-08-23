#include "person.h"

Person::~Person() {
  delete p_age;
  p_age = nullptr;
}
[[nodiscard]] auto Person::get_age() const -> int { return (p_age != nullptr) ? *p_age : 0; }

Person::Person(std::string_view first_name_param, std::string_view last_name_param,
               const int &age_param, std::string_view secret_param, const uint8_t &sks_param) {
  first_name = first_name_param;
  last_name = last_name_param;
  p_age = new int;
  *p_age = age_param;
  secret = secret_param;
  sks = sks_param;
}

Person::Person(const Person &source) {
  first_name = source.first_name;
  last_name = source.last_name;
  if (source.p_age != nullptr) {
    p_age = new int;
    *p_age = *(source.p_age);
  } else {
    p_age = nullptr;
  }
  secret = source.secret;
  sks = source.sks;
}

auto operator<<(std::ostream &os, const Person &person) -> std::ostream & {
  os << "First name: " << person.first_name << "\n";
  os << "Last Name: " << person.last_name << '\n';
  os << "Age: " << person.get_age() << '\n';
  os << "Secret " << person.secret << '\n';
  os << "Sks: " << static_cast<int>(person.sks) << '\n';
  return os;
}
