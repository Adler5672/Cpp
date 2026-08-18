#include "engineer.h"

Engineer::Engineer() = default;

auto operator<<(std::ostream &out, const Engineer &operand) -> std::ostream & {
  out << "Engineer: " << operand.secret << " " << operand.last_name
      << ", Age: " << *operand.get_age() << ", Contract Count: " << operand.contract_count;
  return out;
}
 // error

Engineer::~Engineer() = default;