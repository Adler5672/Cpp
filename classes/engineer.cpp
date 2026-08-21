#include "engineer.h"

Engineer::Engineer() = default;

Engineer::Engineer(std::string_view first_name_param, std::string_view last_name_param, const int &age_param,
                   std::string_view secret_param, const uint8_t &sks_param, int contract_count) // NOLINT(bugprone-easily-swappable-parameters)
    : Person(first_name_param, last_name_param, age_param, secret_param, sks_param),
      contract_count(contract_count) {}

auto operator<<(std::ostream &out, const Engineer &operand) -> std::ostream & {
  out << "Engineer: " << operand.secret << " " << operand.last_name
      << ", Age: " << operand.get_age() << ", Contract Count: " << operand.contract_count;
  return out;
}

Engineer::~Engineer() = default;
