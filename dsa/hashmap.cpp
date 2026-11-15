#include <print>
#include <unordered_map>

auto printHashmap(const std::unordered_map<std::string, int>& hashmap) {
  for (const auto& [key, value] : hashmap) {
    std::println("{}: {}", key, value);
  }
}

auto main() -> int {

  std::unordered_map<std::string, int> hashmap = {
      {"apple", 1}, {"banana", 2}, {"orange", 3}};

  printHashmap(hashmap);

  // Accessing a value by key
  std::string key = "banana";
  if (hashmap.find(key) != hashmap.end()) {
    std::println("Value for key '{}': {}", key, hashmap[key]);
  } else {
    std::println("Key '{}' not found in hashmap.", key);
  }

  // Inserting a new key-value pair
  hashmap["grape"] = 4;
  std::println("After inserting 'grape':");
  printHashmap(hashmap);

  // Deleting a key-value pair
  hashmap.erase("orange");
  std::println("After deleting 'orange':");
  printHashmap(hashmap);

  hashmap.clear();
  std::println("After clearing the hashmap:");
  printHashmap(hashmap);

  return 0;
}
