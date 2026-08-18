#pragma once
#ifndef ENGINEER_H
#define ENGINEER_H
#include "person.h"

class Engineer : private Person {
  friend auto operator<<(std::ostream &out, const Engineer &operand);

public:
  Engineer();
  ~Engineer();

  auto build() -> void;

private:
  int contract_count{0};
};

#endif // ENGINEER_H