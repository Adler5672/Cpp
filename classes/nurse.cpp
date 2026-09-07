#include "nurse.h"
#include <print>

Nurse::Nurse() = default;

auto Nurse::print() const -> void {
  std::println("Nurse [Full name : {}, age : {}, secret : {}, practice certificate id : {}]",
               first_name, get_age(), secret, practice_certificate_id);
}

Nurse::~Nurse() = default;
auto Nurse::treat_unwell_person() -> void {
  first_name = "Mud"; // Ok
  *p_age = 23;
  // sks = 7; // error
}
