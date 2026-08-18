#ifndef CIVIL_ENGINEER_H
#define CIVIL_ENGINEER_H
#include "engineer.h"
class civilEngineer : public Engineer {
  friend auto operator<<(std::ostream &out, const civilEngineer &operand);

public:
  civilEngineer();
  ~civilEngineer();

  auto build_road() -> void {}

private:
  std::string speciality{"None"};
};

#endif // CIVIL_ENGINEER_H