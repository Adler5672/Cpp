#pragma once

#include <iostream>

class Parent {
public:
  Parent() = default;
  Parent(int member_var) : m_member_var(member_var) {}
  ~Parent() = default;

  auto print_var() -> void { std::cout << "Parent member variable: " << m_member_var << '\n'; }

protected:
  int m_member_var{100};
};
