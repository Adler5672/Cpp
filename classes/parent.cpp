#include "parent.h"
#include <print>
Parent::Parent(int member_var) : m_member_var(member_var) {}
auto Parent::print_var() -> void { std::println("Parent member variable: {}", m_member_var); }
