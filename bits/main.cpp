#include <bitset>
#include <print>

auto main() -> int {
  std::bitset<8> bits1(0b0000'0101);
  bits1.set(3);
  bits1.flip(4);
  bits1.reset(4);

  std::println("bits1: {}", bits1.to_string());
}
