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
  std::println("All bits are true: {}", bits2.all());
  std::println("Any bits are true: {}", bits2.any());
  std::println("All bits are false: {}", bits2.none());

  std::bitset<4> bits3(0b1100);
  std::println("bits3: {}", bits3.to_string());
  std::println("Shifting bits3 left by 1: {}", (bits3 << 1).to_string());
  std::println("Shifting bits3 right by 1: {}", (bits3 >> 1).to_string());

  // Bitwise NOT
  std::bitset<4> bits4(0b1010);
  std::println("bits4: {}", bits4.to_string());
  std::bitset<4> bits4_not = ~bits4;
  std::println("Bitwise NOT of bits4: {}", bits4_not.to_string());

  // Bitwise AND
  std::bitset<4> bits5(0b1100);
  std::bitset<4> bits6(0b1010);
  std::bitset<4> bits_and = bits5 & bits6;
  std::println("bits5: {}", bits5.to_string());
  std::println("bits6: {}", bits6.to_string());
  std::println("Bitwise AND of bits5 and bits6: {}", bits_and.to_string());

  // Bitwise OR
  std::bitset<4> bits_or = bits5 | bits6;
  std::println("Bitwise OR of bits5 and bits6: {}", bits_or.to_string());

  // Bitwise XOR
  std::bitset<4> bits_xor = bits5 ^ bits6;
  std::println("Bitwise XOR of bits5 and bits6: {}", bits_xor.to_string());

  // Bit rotation
  std::bitset<4> bits7(0b1101);
  std::println("bits7: {}", bits7.to_string());
  std::bitset<4> bits7_rotated_left = (bits7 << 1) | (bits7 >> (4 - 1));
  std::println("Rotating bits7 left by 1: {}", bits7_rotated_left.to_string());
  std::println("Rotating bits7 right by 1: {}", ((bits7 >> 1) | (bits7 << (4 - 1))).to_string());

  // Using std::rotl
  std::uint8_t bits8(0b1101);
  std::println("bits8: {}", std::bitset<4>(bits8).to_string());
  std::uint8_t bits8_rotated_left = std::rotl(bits8, 1);
  std::println("Rotating bits8 left by 1 using std::rotl: {}", std::bitset<4>(bits8_rotated_left).to_string());
  std::uint8_t bits8_rotated_right = std::rotr(bits8, 1);
  std::println("Rotating bits8 right by 1 using std::rotr: {}", std::bitset<4>(bits8_rotated_right).to_string());
}
