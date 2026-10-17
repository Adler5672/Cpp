#include <bitset>
#include <iostream>
#include <print>

enum Color : std::uint8_t { Red, Green, Blue };

enum FileReadResult : std::uint8_t { Success, NotFound, PermissionDenied };

auto readFile(const std::string &filename) -> FileReadResult {
  // Simulate file reading logic
  if (filename == "exists.txt") {
    return FileReadResult::Success;
  } else if (filename == "notfound.txt") {
    return FileReadResult::NotFound;
  } else {
    return FileReadResult::PermissionDenied;
  }
}

enum SortOrder : std::uint8_t { Alphabetical, Numerical, Date };

auto SortOrderToString(SortOrder order) -> std::string {
  switch (order) {
  case SortOrder::Alphabetical:
    return "Alphabetical";
  case SortOrder::Numerical:
    return "Numerical";
  case SortOrder::Date:
    return "Date";
  default:
    return "Unknown";
  }
}

namespace Feeling {
enum FeelingType : std::uint8_t { Happy, Sad, Excited, Angry, Blue };
}

auto constexpr getFromString(const Color &color) -> std::string_view {
  switch (color) {
  case Color::Red:
    return "Red";
  case Color::Green:
    return "Green";
  case Color::Blue:
    return "Blue";
  default:
    return "Unknown";
  }
}

auto main() -> int {
  Color c = Color::Red;
  std::println("The color is: {}", static_cast<int>(c));

  auto result = readFile("exists.txt");
  std::println("File read result: {}", static_cast<int>(result));

  SortOrder order = SortOrder::Alphabetical;
  std::println("Sort order: {}", SortOrderToString(order));

  // Enum also can be used for flags, for example:
  enum class FilePermissions : std::uint8_t {
    isReadable,
    isWritable,
    isExecutable
  };

  std::bitset<8> permissions;
  permissions.set(static_cast<std::size_t>(FilePermissions::isReadable));
  permissions.set(static_cast<std::size_t>(FilePermissions::isWritable));
  permissions.set(static_cast<std::size_t>(FilePermissions::isExecutable));
  std::println(
      "File permissions: {}",
      permissions.test(static_cast<std::size_t>(FilePermissions::isReadable))
          ? "Readable"
          : "Not Readable");
  std::println(
      "File permissions: {}",
      permissions.test(static_cast<std::size_t>(FilePermissions::isWritable))
          ? "Writable"
          : "Not Writable");
  std::println(
      "File permissions: {}",
      permissions.test(static_cast<std::size_t>(FilePermissions::isExecutable))
          ? "Executable"
          : "Not Executable");
  std::println("Feeling: {}", static_cast<int>(Feeling::FeelingType::Blue));

  // Assigning values to enum
  enum class StatusCode : std::uint16_t {
    OK = 200,
    NotFound = 404,
    InternalServerError = 500
  };

  StatusCode status = StatusCode::OK;
  std::println("Status code: {}", static_cast<int>(status));

  // Convert int to enum
  int code = 404;
  auto statusFromInt = static_cast<StatusCode>(code);
  std::println("Status from int: {}", static_cast<int>(statusFromInt));

  std::println(getFromString(Color::Green));

  std::println("Enter a color (0 for Red, 1 for Green, 2 for Blue): ");
  int input;
  std::cin >> input;
  auto userColor = static_cast<Color>(input);
  std::println("You selected color: {}", getFromString(userColor));
  
}
