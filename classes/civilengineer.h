#ifndef CIVIL_ENGINEER_H
#define CIVIL_ENGINEER_H
#include "engineer.h"
class civilEngineer : public Engineer {
public:
  civilEngineer();
  civilEngineer(std::string_view first_name_param, std::string_view last_name_param,
                const int &age_param, std::string_view secret_param, const uint8_t &sks_param,
                int contract_count,
                std::string_view speciality_param); // NOLINT(bugprone-easily-swappable-parameters)
  ~civilEngineer();
  auto print() const -> void;

  auto build_road() -> void {}

private:
  std::string speciality{"None"};
};

#endif // CIVIL_ENGINEER_H
