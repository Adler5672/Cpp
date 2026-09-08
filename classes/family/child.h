#pragma once

#include "parent.h"
class Child : public Parent {

public:
  Child() = default;
  Child(int member_var);
  ~Child() = default;

  auto print_var() -> void;

  auto show_value() -> void;

private:
  // Reuse the member variable from the parent class
  int m_member_var = 1000;
};
