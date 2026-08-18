#include <iostream>
#include <iomanip> // for std::setw

/**
 * @file main.cpp
 * @brief Demonstrates various output formatting techniques in C++ using std::cout and manipulators.
 *
 * This program showcases the use of manipulators from the <iomanip> library to format output in C++.
 * It includes examples of setting fill characters, adjusting field widths, displaying boolean values,
 * showing positive signs, and formatting numbers in different bases (decimal, hexadecimal, octal).
 * Additionally, it demonstrates fixed-point and scientific notation for floating-point numbers,
 * as well as precision control and showing decimal points explicitly.
 *
 * Key Features:
 * - Output alignment and padding using std::setfill and std::setw.
 * - Boolean value representation with std::boolalpha.
 * - Display of positive signs using std::showpos.
 * - Number base formatting (decimal, hexadecimal, octal) with and without base prefixes.
 * - Uppercase formatting for hexadecimal output.
 * - Floating-point formatting with std::fixed, std::scientific, and precision control.
 * - Explicit display of decimal points using std::showpoint.
 *
 * @return int Exit status of the program (0 indicates successful execution).
 */


int main()
{
    // std::cout << "Hello, World!" << std::flush;
    std::setfill('-'); // Set fill character to '-'
    std::cout << std::setfill('-') << std::setw(10) << "LastName" << std::setw(10) << "FirstName" << std::setw(5) << "Age" << '\n';
    std::cout << std::setfill('-') << std::setw(10) << "Doe" << std::setw(10) << "John" << std::setw(5) << 30 << '\n';
    std::cout << std::setfill('-') << std::setw(10) << "Smith" << std::setw(10) << "Jane" << std::setw(5) << 25 << std::endl;
    std::cout << std::setfill('-') << std::setw(10) << "Brown" << std::setw(10) << "Emily" << std::setw(5) << 22 << std::endl;
    std::cout << std::setfill('-') << std::setw(10) << "Johnson" << std::setw(10) << "Michael" << std::setw(5) << 35 << std::endl;
    std::cout << std::setfill('-')  << std::setw(10) << "Williams" << std::setw(10) << "Sarah" << std::setw(5) << 28 << std::endl;
    std::cout << std::setfill('-') << std::setw(10) << "Jones" << std::setw(10) << "David" << std::setw(5) << 40 << std::endl;
    std::cout << std::setfill('-') << std::setw(10) << "Garcia" << std::setw(10) << "Maria" << std::setw(5) << 32 << std::endl;
    bool isTrue = true;
    bool isFalse = false;
    std::cout << std::boolalpha;
    std::cout << "isTrue: " << isTrue << std::endl;
    std::cout << "isFalse: " << isFalse << std::endl;
    int bc = -68;
    int ca = 39;
    std::cout << std::showpos;
    std::cout << "bc: " << bc << std::endl;
    std::cout << "ca: " << ca << std::endl;
    std::cout << bc << std::dec << std::endl; // Decimal]
    std::cout << ca << std::dec << std::endl; // Decimal
    std::cout << bc << std::hex << std::endl; // Hexadecimal
    std::cout << ca << std::hex << std::endl; // Hexadecimal
    std::cout << bc << std::oct << std::endl; // Octal
    std::cout << ca << std::oct << std::endl; // Octal
    std::cout << std::showbase;
    std::cout << bc << std::dec << std::endl; // Decimal with base
    std::cout << ca << std::dec << std::endl; // Decimal with base
    std::cout << bc << std::hex << std::endl; // Hexadecimal with base
    std::cout << ca << std::hex << std::endl; // Hexadecimal with base
    std::cout << bc << std::oct << std::endl; // Octal with base
    std::cout << ca << std::oct << std::endl; // Octal with base
    std::cout << std::uppercase;
    std::cout << bc << std::dec << std::endl; // Decimal without base
    std::cout << ca << std::dec << std::endl; // Decimal without base
    std::cout << bc << std::hex << std::endl; // Hexadecimal without base
    std::cout << ca << std::hex << std::endl; // Hexadecimal without base
    std::cout << bc << std::oct << std::endl; // Octal without base
    std::cout << ca << std::oct << std::endl; // Octal without base
    double pi = 3.14159265358979323846;
    double v = 2006.0;
    double z = 1.34e-10;
    std::cout << std::fixed;
    std::cout << std::setprecision(42); // Set precision to 2 decimal places
    std::cout << pi << std::endl; // Fixed-point notation
    std::cout << v << std::endl; // Fixed-point notation
    std::cout << z << std::endl; // Fixed-point notation
    std::cout << std::scientific;
    std::cout << pi << std::endl; // Scientific notation
    std::cout << v << std::endl; // Scientific notation
    std::cout << z << std::endl; // Scientific notation
    std::cout << std::setprecision(2); // Set precision to 2 decimal places
    std::cout << std::showpoint; // Show decimal point
    std::cout.unsetf(std::ios::scientific | std::ios::fixed); // No fixed-point notation
    std::cout << pi << std::endl; // Fixed-point notation with decimal point
    std::cout << v << std::endl; // Fixed-point notation with decimal point
    std::cout << z << std::endl; // Fixed-point notation with decimal point

    // return 0; is redundant in C++11 and later
    return 0;
}
