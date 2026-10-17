#include <vector>
#include <print>

auto main() -> int {
  std::vector<int> numbers = {1, 2, 3, 4, 5};
  std::println("Numbers: {}", numbers);

  std::vector<std::string> fruits = {"Apple", "Banana", "Cherry"};
  std::println("Fruits: {}", fruits);

  //

  return 0;
}