#pragma once


class Parent {
public:
  Parent() = default;
  Parent(int member_var);
  ~Parent() = default;

  auto print_var() -> void;

protected:
  int m_member_var{100};
};
