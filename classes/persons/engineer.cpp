#include "engineer.h"
#include <print>

Engineer::Engineer() = default;

Engineer::Engineer(std::string_view first_name_param, std::string_view last_name_param,
                   const int &age_param, std::string_view secret_param,
                   const uint8_t &sks_param, // NOLINT(bugprone-easily-swappable-parameters)
                   int contract_count)
    : Person(first_name_param, last_name_param, age_param, secret_param, sks_param),
      contract_count(contract_count) {}

Engineer::Engineer(const Engineer &source) = default;

auto Engineer::print() const -> void {
  std::println("Engineer: {} {}, Age: {}, Contract Count: {}", secret, last_name, get_age(),
               contract_count);
}

Engineer::~Engineer() = default;
