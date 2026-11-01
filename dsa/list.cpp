#include <list>
#include <print>

auto main() -> int {
  std::list<int> numbers = {1, 2, 3, 4, 5};
  std::println("Numbers: {}", numbers);

  std::list<std::string> fruits = {"Apple", "Banana", "Cherry"};
  std::println("Fruits: {}", fruits);

  // Class deduction list
  std::list vec = {10, 20, 30, 40, 50};
  std::println("List: {}", vec);

  // List are not contiguous memory blocks, so we cannot use pointer arithmetic to
  // access elements
  // std::println("First element: {}", *vec.data()); // This will not work

  std::println("Size of numbers list: {}", numbers.size());
  std::println("Size of fruits list: {}", fruits.size());
  std::println("Size of vec list: {}", vec.size());

  // Push and pop elements from the list
  numbers.push_back(6);
  std::println("Numbers after push_back: {}", numbers);
  numbers.pop_back();
  std::println("Numbers after pop_back: {}", numbers);

  // Can't access elements by index, but we can use iterators to access elements
  auto it = numbers.begin();
  std::println("First element: {}", *it);
  ++it;
  std::println("Second element: {}", *it);

  return 0;
}
