#include <cctype>
#include <cstddef>
#include <cstdint>
#include <cstring>
#include <iostream>
#include <iterator>
#include <ostream>
#include <string>

int main() {
  std::string str = "Hello, World!";
  std::cout << str << '\n';
  std::cout << "Length: " << str.length() << '\n';
  str[0] = 'h'; // Change first character to lowercase
  std::cout << "Modified string: " << str << '\n';

  // Check if character is alphanumeri
  std::cout << '\n';
  std::cout << "std::isalnum('A'): " << std::isalnum('A') << '\n';
  std::cout << "std::isalnum('^'): " << std::isalnum('^') << '\n';
  std::cout << "std::isalnum('1'): " << std::isalnum('1') << '\n';

  if (std::isalnum('A')) {
    std::cout << "'A' is alphanumeric" << '\n';
  } else {
    std::cout << "'A' is not alphanumeric" << '\n';
  }

  // Check if character is alphabetic
  std::cout << '\n';
  std::cout << "std::isalpha('A'): " << std::isalpha('A') << '\n';
  std::cout << "std::isalpha('1'): " << std::isalpha('1') << '\n';
  std::cout << "std::isalpha('^'): " << std::isalpha('^') << '\n';

  // Check if character is blank
  std::cout << "std::isblank(' '): " << std::isblank(' ') << '\n';
  std::cout << "std::isblank('\\t'): " << std::isblank('\t') << '\n';
  std::cout << "std::isblank('A'): " << std::isblank('A') << '\n';

  int blankcount{};
  char message[] = "Hello World!";
  for (size_t i = 0; i < std::size(message); i++) {
    if (std::isblank(message[i])) {
      std::cout << "Blank character found: " << message[i] << " At index " << i << '\n';
      blankcount++;
    }
  }
  std::cout << "Number of blank characters: " << blankcount << '\n';

  const char message3[] = {"the sky is blue"};
  const char *message4 = {"Alabama"};
  std::cout << "Original message: " << message3 << '\n';
  // strlen ignores null character
  std::cout << std::strlen(message3) << '\n'; // Output: 15 (length of the string)
  // includes null charachter
  std::cout << sizeof(message3) << '\n';
  // strlen works with decayed array
  std::cout << std::strlen(message4) << '\n';
  // size of a pointer
  std::cout << sizeof(message4) << '\n';

  // std::strcmp
  std::cout << "strcmp : " << '\n';
  const char *string_data1 = {"Hello"};
  const char *string_data2 = {"Bello"};
  std::cout << std::strcmp(string_data1, string_data2) << '\n';

  string_data1 = {"Hello"};
  string_data2 = {"Zello"};
  std::cout << std::strcmp(string_data1, string_data2) << '\n';

  string_data1 = {"Hello"};
  string_data2 = {"Hello"};
  std::cout << std::strcmp(string_data1, string_data2) << '\n';

  // std::strncmp

  size_t n{3};

  std::cout << std::strncmp(string_data1, string_data2, n) << '\n';

  // std::std::strchr

  std::cout << '\n';
  std::cout << "std::strchr : " << '\n';

  const char *str2{"Try this. Do, or do not. There's ni try"};
  char target = 'T';
  const char *result = str2;
  uint16_t iterations{};

  while ((result = std::strchr(result, target)) != nullptr) {
    std::cout << "Found: '" << target << "' starting at '" << result << "'\n";

    ++result;
    ++iterations;
  }
  std::cout << "Iteration: " << iterations << '\n';

  // Find last occurence
  std::cout << '\n';
  std::cout << "strrchr: " << '\n';

  char input[] = "home/user/hell.cpp";
  char *output = std::strrchr(input, '/');

  if (output)
    std::cout << output + 1 << '\n';

  // Concatenatiom
  std::cout << '\n';
  std::cout << "std::strcat" << '\n';

  char dest[50] = "Hello ";
  char src[50] = "World";

  std::strcat(dest, src);
  std::cout << "dest : " << dest << '\n';
  std::strcat(dest, " Goodbye world");
  std::cout << "dest : " << dest << '\n';

  // More concatenatioj

  std::cout << '\n';
  std::cout << "More strcat" << '\n';

  char *dest1 = new char[30]{'f', 'i', 'r', 'e', 'l', 'a', 'r', 'd', '\0'};
  char *source1 = new char[30]{',', 't', 'h', 'e', '.', 'p', 'h', 'o', 'n',
                               'i', 'e', 'x', '.', 'k', 'i', 'n', 'g', '\0'};

  std::cout << "std::strlen(dest1)" << std::strlen(dest1) << '\n';
  std::cout << "std::strlen(source1)" << std::strlen(source1) << '\n';

  std::cout << "Concateniating" << '\n';
  std::strcat(dest1, source1);

  std::cout << "std::strlen(dest1) :" << std::strlen(dest1) << '\n';
  std::cout << "dest1 : " << dest1 << '\n';
  delete[] dest1;
  delete[] source1;
  dest1 = nullptr;
  source1 = nullptr;

  // std::strncat

  std::cout << '\n';
  std::cout << "std::strncat" << '\n';
  char dest2[50] = {"hello"};

  char source2[30] = {" There is a hird on my winwow"};

  std::cout << std::strncat(dest2, source2, 6) << '\n';

  std::strncat(dest2, source2, 6);
  std::cout << "The concatenated string is : " << dest2 << '\n';

  // std::stdcpy

  std::cout << '\n';
  std::cout << "std::strcpy : " << '\n';
  const char *source3 = "C++ is multipurpose programming languangs";
  char *dest3 = new char[std::strlen(source3) + 1];

  std::strcpy(dest3, source3);

  std::cout << "sizeof(dest3) : " << sizeof(dest3) << '\n';
  std::cout << "std::strlen(dest3) : " << std::strlen(dest3) << '\n';
  std::cout << "dest3 : " << dest3 << '\n';

  // strncpy

  std::cout << '\n';
  std::cout << "std::strncpy: " << '\n';
  const char *source4 = "Hello";
  char dest4[] = {'a', 'b', 'c', 'd', 'e', 'f', '\0'};

  std::cout << "dest4 : " << dest4 << '\n';

  std::cout << "Copying... " << '\n';
  std::strncpy(dest4, source4, 5);

  std::cout << "dest4 : " << dest4 << '\n';
  delete[] dest3;
  source4 = nullptr;
  source3 = nullptr;
  dest3 = nullptr;
  output = nullptr;
  string_data1 = nullptr;
  string_data2 = nullptr;
  str2 = nullptr;
  message4 = nullptr;

  return 0;
}