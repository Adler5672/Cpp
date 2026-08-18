#pragma once
#ifndef ENGINEER_H
#define ENGINEER_H
#include "person.h"

class Engineer : private Person {
  friend auto operator<<(std::ostream &out, const Engineer &operand);

public:
  Engineer();
  ~Engineer();
  using Person::secret;

  auto build() -> void;

protected:
  using Person::get_first_name;
  using Person::get_last_name;
  using Person::get_age;

private:
  int contract_count{0};
};

#endif // ENGINEER_H