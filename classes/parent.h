#pragma once

#include <print>

class Parent {
public:
  Parent() = default;
  Parent(int member_var) : m_member_var(member_var) {}
  ~Parent() = default;

  auto print_var() -> void { std::println("Parent member variable: {}", m_member_var); }

protected:
  int m_member_var{100};
};
