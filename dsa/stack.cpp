#include <print>
#include <stack>
#include <vector>

auto main() -> int {
  std::stack<int> numbers;
  numbers.push(1);
  numbers.push(2);
  numbers.push(3);
  std::println("Numbers: {}", numbers);

  std::stack<std::string> fruits;
  fruits.emplace("Apple");
  fruits.emplace("Banana");
  fruits.emplace("Cherry");
  std::println("Fruits: {}", fruits);

  // Stack does not support class deduction
  // std::stack vec = {10, 20, 30, 40, 50};
  // std::println("Stack: {}", vec);

  // Stack are not contiguous memory blocks, so we cannot use pointer arithmetic
  // to But we can do it id the underlying container is a vector, but it's not
  // recommended
  std::stack<int, std::vector<int>> vec;
  vec.push(10);
  vec.push(20);
  vec.push(30);
  std::println("Stack: {}", vec);

  std::println("Size of numbers stack: {}", numbers.size());
  std::println("Size of fruits stack: {}", fruits.size());
  // std::println("Size of vec stack: {}", vec.size());

  // Push and pop elements from the stack
  numbers.push(6);
  std::println("Numbers after push: {}", numbers);
  numbers.pop();
  std::println("Numbers after pop: {}", numbers);
  return 0;
}
