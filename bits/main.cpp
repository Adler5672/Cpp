#include <bitset>
#include <print>

auto main() -> int {
  std::bitset<8> bits1(0b0000'0101);
  bits1.set(3);
  bits1.flip(4);
  bits1.reset(4);

  std::println("bits1: {}", bits1.to_string());
  std::println("Bit 3 is set: {}", bits1.test(3));
  std::println("Bit 4 is set: {}", bits1.test(4));

  [[maybe_unused]] constexpr int isHungry {0};
  [[maybe_unused]] constexpr int isTired {1};
  [[maybe_unused]] constexpr int isBored {2};
  [[maybe_unused]] constexpr int isHappy {3};
  [[maybe_unused]] constexpr int isSad {4};
  [[maybe_unused]] constexpr int isAngry {5};
  [[maybe_unused]] constexpr int isExcited {6};
  [[maybe_unused]] constexpr int isCalm {7};

  std::bitset<8> bits2(0b0000'0101);
  bits2.set(isHungry);
  bits2.flip(isTired);
  bits2.reset(isBored);

  std::println("bits2: {}", bits2.to_string());
  std::println("I am hungry: {}", bits2.test(isHungry));
  std::println("I am tired: {}", bits2.test(isTired));
  std::println("I am bored: {}", bits2.test(isBored));
}
