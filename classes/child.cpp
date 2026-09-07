#include "child.h"
#include <print>
Child::Child(int member_var) : m_member_var(member_var) {}
auto Child::print_var() -> void { std::println("Child member variable: {}", m_member_var); }
auto Child::show_value() -> void {
  std::println("Child member variable: {}", m_member_var);
  std::println("Parent member variable: {}", Parent::m_member_var);
}
