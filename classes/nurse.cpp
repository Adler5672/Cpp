#include "nurse.h"
#include <print>

Nurse::Nurse() = default;

auto Nurse::print() const -> void {
  std::println("Nurse [Full name : {}, age : {}, secret : {}, practice certificate id : {}]",
               first_name, get_age(), secret, practice_certificate_id);
}

Nurse::~Nurse() = default;
