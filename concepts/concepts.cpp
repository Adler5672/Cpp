#include <iostream>

// Syntax 1
/*
template <typename T>
requires std::integral<T>
auto add(T a, T b) -> T {
  return a + b;
}
*/

// Syntax 2
// template <std::integral T> auto add(T a, T b) { return a + b; }

// Syntax 3
// auto add(std::integral auto a, std::integral auto b) { return a + b; }

// Syntax 4
/*
template <typename T>
auto add(T a, T b) -> T
  requires std::integral<T>
{
  return a + b;
}
*/

// Custom concepts
// Syntax 1
template <typename T>
concept MyIntegral = std::is_integral_v<T>;

template <typename T>
  requires MyIntegral<T>
auto add(T a, T b) -> T {
  return a + b;
}

template <typename T>
concept multipliable = requires(T a, T b) {
  a * b; // Just make sure the syntax is valid
};

template <typename T>
  requires multipliable<T>
auto addm(T a, T b) -> T {
  return a * b;
}

template <typename T>
concept incrementable = requires(T a) {
  a += 1;
  ++a;
  a++;
};

template <typename T>
  requires incrementable<T>
auto incr(T a, T b) {
  return a + b;
}

// Requiers close

template<typename T>
concept tinyType = requires (T t) {
  sizeof(T) < 4; // Simple requiriment only check syntax
  requires sizeof(T) <= 5;
};

auto ads(tinyType auto a, tinyType auto b) -> tinyType auto{
  return a+b;
}

// Compound requirement
template<typename T>
concept addable = requires (T a, T b) {
  {a+b} noexcept -> std::convertible_to<int>;
};

auto asd(addable auto a, addable auto b) -> addable auto{
  return a+b;
}

template<typename T>
// requires std::integral<T> || std::floating_point<T> // OR OPERATOR
requires std::integral<T> && tinyType<T>
auto aad(T a, T b) -> T{
  return a+b;
}

auto dda (std::integral auto a, std::integral auto b) -> std::integral auto{
  return a+b;
}

auto main() -> int {
  int d = 10;
  int s = 20;

  auto result_a = add(d, s);
  std::cout << result_a << '\n';
  std::cout << addm(39, 21) << '\n';
  incr(29,10);
  ads(1,1);
  asd(10,   20);
  aad(8,9);
  std::integral auto a = dda(10,8);

  // add("wjwjwk", "dhdjdj"); = error
  // addm("dudu", "wjwjsj"); = error
  return 0;
}