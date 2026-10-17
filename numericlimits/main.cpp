#include <iostream>
#include <limits> // for std::numeric_limits

/**
 * @file main.cpp
 * @brief Displays the minimum and maximum values for various data types using std::numeric_limits.
 *
 * This program demonstrates the use of the std::numeric_limits class template to retrieve
 * the minimum and maximum values for various fundamental data types in C++. It also
 * displays additional properties such as whether a type is signed and the number of
 * binary digits (precision) for the `int` type.
 *
 * @details
 * The program outputs the following information for each data type:
 * - Minimum value
 * - Maximum value
 * - Additional properties for specific types (e.g., signedness and precision for `int`)
 *
 * Supported data types include:
 * - Integer types: `int`, `unsigned int`, `short`, `unsigned short`, `long`, `unsigned long`
 * - Floating-point types: `float`, `double`, `long double`
 * - Character types: `char`, `unsigned char`, `wchar_t`, `char16_t`, `char32_t`
 * - Boolean type: `bool`
 * - Size type: `size_t`
 *
 * @note The program uses `std::cout` for output and requires the `<iostream>` and `<limits>` headers.
 */
int main()
{
    // Display the minimum and maximum values for various data types
    std::cout << "Minimum and Maximum values for various data types:\n";
    std::cout << "int: " << std::numeric_limits<int>::min() << " to " << std::numeric_limits<int>::max() << '\n';
    std::cout << "unsigned int: " << std::numeric_limits<unsigned int>::min() << " to " << std::numeric_limits<unsigned int>::max() << '\n';
    std::cout << "short: " << std::numeric_limits<short>::min() << " to " << std::numeric_limits<short>::max() << '\n';
    std::cout << "unsigned short: " << std::numeric_limits<unsigned short>::min() << " to " << std::numeric_limits<unsigned short>::max() << '\n';
    std::cout << "long: " << std::numeric_limits<long>::min() << " to " << std::numeric_limits<long>::max() << '\n';
    std::cout << "unsigned long: " << std::numeric_limits<unsigned long>::min() << " to " << std::numeric_limits<unsigned long>::max() << '\n';
    std::cout << "float: " << std::numeric_limits<float>::min() << " to " << std::numeric_limits<float>::max() << '\n';
    std::cout << "double: " << std::numeric_limits<double>::min() << " to " << std::numeric_limits<double>::max() << '\n';
    std::cout << "long double: " << std::numeric_limits<long double>::min() << " to " << std::numeric_limits<long double>::max() << '\n';
    std::cout << "char: " << std::numeric_limits<char>::min() << " to " << std::numeric_limits<char>::max() << '\n';
    std::cout << "unsigned char: " << +std::numeric_limits<unsigned char>::min() << " to " << +std::numeric_limits<unsigned char>::max() << '\n';
    std::cout << "bool: " << std::numeric_limits<bool>::min() << " to " << std::numeric_limits<bool>::max() << '\n';
    std::cout << "wchar_t: " << +std::numeric_limits<wchar_t>::min() << " to " << +std::numeric_limits<wchar_t>::max() << '\n';
    std::cout << "char16_t: " << +std::numeric_limits<char16_t>::min() << " to " << +std::numeric_limits<char16_t>::max() << '\n';
    std::cout << "char32_t: " << +std::numeric_limits<char32_t>::min() << " to " << +std::numeric_limits<char32_t>::max() << '\n';
    std::cout << "size_t: " << std::numeric_limits<size_t>::min() << " to " << std::numeric_limits<size_t>::max() << '\n';
    std::cout << "int is   signed: " << std::numeric_limits<int>::is_signed << '\n';
    std::cout << "digits: " << std::numeric_limits<int>::digits << '\n';
    return 0;
}