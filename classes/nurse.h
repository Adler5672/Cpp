#pragma once
#ifndef NURSE_H
#define NURSE_H
#include "person.h"

class Nurse : protected Person {
public:
  Nurse();
  ~Nurse();
  auto print() const -> void;

  auto treat_unwell_person() -> void;

private:
  int practice_certificate_id{0};
};
#endif // NURSE_H
