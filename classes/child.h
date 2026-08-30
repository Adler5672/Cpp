#pragma once

#include "parent.h"
class Child : public Parent {

public:
  Child() = default;
  Child(int member_var) : m_member_var(member_var) {}
  ~Child() = default;

  auto print_var() -> void { std::cout << "Child member variable: " << m_member_var << '\n'; }

  auto show_value() -> void {
    std::cout << "Child member variable: " << m_member_var << '\n';
    std::cout << "Parent member variable: " << Parent::m_member_var << '\n';
  }
private:
  // Reuse the member variable from the parent class
  int m_member_var = 1000;
};
