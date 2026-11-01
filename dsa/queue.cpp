#include <print>
#include <queue>

auto main() -> int {
  std::queue<int> numbers;
  numbers.push(1);
  numbers.push(2);
  numbers.push(3);
  std::println("Numbers: {}", numbers);

  std::queue<std::string> fruits;
  fruits.emplace("Apple");
  fruits.emplace("Banana");
  fruits.emplace("Cherry");
  std::println("Fruits: {}", fruits);

  // Queue does not support class deduction
  // std::queue vec = {10, 20, 30, 40, 50};
  // std::println("Queue: {}", vec);

  // Queue are not contiguous memory blocks, so we cannot use pointer arithmetic
  // to But we can do it id the underlying container is a vector, but it's not
  // recommended
  std::queue<int, std::vector<int>> vec;
  vec.push(10);
  vec.push(20);
  vec.push(30);
  std::println("Queue: {}", vec);

  std::println("Size of numbers queue: {}", numbers.size());
  std::println("Size of fruits queue: {}", fruits.size());
  // std::println("Size of vec queue: {}", vec.size());

  // Push and pop elements from the queue
  numbers.push(6);
  std::println("Numbers after push: {}", numbers);
  numbers.pop();
  std::println("Numbers after pop: {}", numbers);

  // Front and back elements of the queue
  std::println("Front element of numbers queue: {}", numbers.front());
  std::println("Back element of numbers queue: {}", numbers.back());
  return 0;
}
