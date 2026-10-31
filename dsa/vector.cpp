#include <vector>
#include <print>

// Passing vector
/*auto print_vector(const std::vector<int>& vec) {
  std::println("Vector: {}", vec);
}*/

// Using template to print vector of any type
template <typename T>
auto print_vector(const std::vector<T>& vec) {
  std::println("Vector: {}", vec);
}

// Also can use generic object template function
template<typename T>
auto print_vector(const T& arr){
  std::println("Vector: {}", arr);
}
auto main() -> int {
  std::vector<int> numbers = {1, 2, 3, 4, 5};
  std::println("Numbers: {}", numbers);

  std::vector<std::string> fruits = {"Apple", "Banana", "Cherry"};
  std::println("Fruits: {}", fruits);

  // Class deduction vector
  std::vector vec = {10, 20, 30, 40, 50};
  std::println("Vector: {}", vec);

  // Vector are contiguous memory blocks, so we can use pointer arithmetic to access elements
  std::println("First element: {}", *vec.data());
  std::println("Second element: {}", *(vec.data() + 1));
  std::println("Third element: {}", *(vec.data() + 2));
  std::println("Fourth element: {}", *(vec.data() + 3));
  std::println("Fifth element: {}", *(vec.data() + 4));

  std::println("Size of numbers vector: {}", numbers.size());
  std::println("Size of fruits vector: {}", fruits.size());
  std::println("Size of vec vector: {}", vec.size());
  std::println("Sizeof vec vector: {}", sizeof(vec[0]) * vec.size());

  // Allocate vector for 100 elements
  std::vector<int> large_vector(100);
  std::println("Size of large_vector: {}", large_vector.size());

  // Constant vector
  const std::vector<int> const_vector = {1, 2, 3, 4, 5};
  std::println("Constant vector: {}", const_vector);

  // Getting a size of a vector to signed integer
  auto size = static_cast<std::ptrdiff_t>(numbers.size());
  std::println("Size of numbers vector as signed integer: {}", size);

  // Getting a length of a vector with std::ssize
  auto length = std::ssize(numbers);
  std::println("Length of numbers vector: {}", length);

  // NOTE: Accesing vector with operator[] does not check for out of bounds, so it is unsafe. Use at() instead.
  // std::println("Accessing out of bounds element: {}", numbers[10]); // This will cause undefined behavior

  // Using at() also will cause runtime error if the index is out of bounds, but it will throw an exception instead of causing undefined behavior.
  try {
    std::println("Accessing out of bounds element with at(): {}", numbers.at(10));
  } catch (const std::out_of_range& e) {
    std::println("Caught exception: {}", e.what());
  }

  // Indexing vector with constexpr
  constexpr int index = 2;
  std::println("Accessing element at constexpr index {}: {}", index, numbers[index]); // Implicitly converts to std::size_t

  // However we want to avoid unsigned integer overflow
  // So the best way is to use std::size_t for indexing vectors, as it is guaranteed to be able to represent the size of any object in memory.
  // Or use data() to get a pointer to the underlying array and use pointer arithmetic to access elements.
  std::println("Accessing element at constexpr index {} using data(): {}", index, *(numbers.data() + index));
  print_vector(numbers);

  print_vector(fruits);

  //
  return 0;
}
