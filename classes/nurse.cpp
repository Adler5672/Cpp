#include "nurse.h"

Nurse::Nurse() = default;

auto operator<<(std::ostream& out, const Nurse& operand) -> std::ostream&{
  out << "Nurse [Full name : " << operand.first_name <<
                  ", age : " << operand.get_age() <<
                  ", secret : " << operand.secret <<
                  ", practice certificate id : " << operand.practice_certificate_id << '\n';
  return out;
}

Nurse::~Nurse() = default;