#pragma once
#ifndef NURSE_H
#define NURSE_H
#include "person.h"

class Nurse : protected Person {
  friend auto operator<<(std::ostream &, const Nurse &operand) -> std::ostream &;

public:
  Nurse();
  ~Nurse();

  auto treat_unwell_person() -> void {
    first_name = "Mud"; // Ok
    *p_age = 23;
    // sks = 7; // error
  }

private:
  int practice_certificate_id{0};
};
#endif // NURSE_H