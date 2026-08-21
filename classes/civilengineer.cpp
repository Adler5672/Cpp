#include "civilengineer.h"

civilEngineer::civilEngineer() = default;

civilEngineer::civilEngineer(std::string_view first_name_param, std::string_view last_name_param,
                             const int &age_param, std::string_view secret_param, const uint8_t &sks_param,
                             int contract_count, std::string_view speciality_param) // NOLINT(bugprone-easily-swappable-parameters)
    : Engineer(first_name_param, last_name_param, age_param, secret_param, sks_param, contract_count),
      speciality(speciality_param) {}

civilEngineer::~civilEngineer() = default;

auto operator<<(std::ostream &out, const civilEngineer &operand) -> std::ostream & {
  out << "civilEngineer: " << operand.speciality << " " << operand.get_last_name()
      << ", Age: " << operand.get_age() << ", Contract Count: ";  // operand.contract_count;
  return out;
}
