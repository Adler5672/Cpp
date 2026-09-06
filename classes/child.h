#pragma once

#include "parent.h"
#include <print>
class Child : public Parent {

public:
  Child() = default;
  Child(int member_var) : m_member_var(member_var) {}
  ~Child() = default;

  auto print_var() -> void { std::println("Child member variable: {}", m_member_var); }

  auto show_value() -> void {
    std::println("Child member variable: {}", m_member_var);
    std::println("Parent member variable: {}", Parent::m_member_var);
  }

private:
  // Reuse the member variable from the parent class
  int m_member_var = 1000;
};
