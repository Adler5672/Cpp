#include <iostream>
#include <memory>

/**
 * @file main.cpp
 * @brief Demonstrates various pointer operations in C++ including initialization, 
 *        dereferencing, dynamic memory allocation, and memory management.
 * 
 * This program covers the following topics:
 * - Pointer initialization and nullptr usage.
 * - Pointer dereferencing to access and modify values.
 * - Dynamic memory allocation and deallocation using `new` and `delete`.
 * - Avoiding dangling pointers by setting pointers to nullptr after deletion.
 * - Differences between static and dynamic arrays.
 * - Memory leaks and how to prevent them.
 * - Verbose nullptr checks and pointer safety practices.
 * 
 * Key Concepts:
 * - Pointers can be reassigned to point to different memory locations.
 * - Dynamic memory allocation allows creating arrays and variables at runtime.
 * - Proper memory management is crucial to avoid memory leaks and undefined behavior.
 * - Static arrays have fixed sizes and live on the stack, while dynamic arrays live on the heap.
 * 
 * The program includes examples of:
 * - Initializing pointers to nullptr.
 * - Using pointers to access and modify variables.
 * - Allocating and deallocating memory for arrays and single variables.
 * - Demonstrating undefined behavior when accessing uninitialized or deleted pointers.
 * - Comparing static and dynamic arrays in terms of memory allocation.
 * 
 * @return int Returns 0 on successful execution.
 */
int main()
{
    int *numbers{};
    double *fractional{};

    // Explicitly initialize the pointers to nullptr
    int *p1 = nullptr;
    double *p2 = nullptr;

    std::cout << "Numbers pointer: " << numbers << std::endl;
    std::cout << "Fractional pointer: " << fractional << std::endl;
    std::cout << "p1 pointer: " << p1 << std::endl;
    std::cout << "p2 pointer: " << p2 << std::endl;
    std::cout << "Size of int pointer: " << sizeof(p1) << std::endl;
    std::cout << "Size of double pointer: " << sizeof(p2) << std::endl;

    int var1{50};
    int *ptr1{&var1}; // Pointer to var1

    std::cout << "Value of var1: " << var1 << std::endl;
    std::cout << "Addrhujess of var1: " << &var1 << std::endl;
    std::cout << "Value of ptr1: " << ptr1 << std::endl;
    std::cout << "Value pointed to by ptr1: " << *ptr1 << std::endl;
    std::cout << "Address of ptr1: " << &ptr1 << std::endl;

    int int_var2 {65};
    int_var2 = 120;

    ptr1 = &int_var2; // Now ptr1 points to int_var2
    std::cout << "Value of int_var2: " << int_var2 << std::endl;
    std::cout << "Address of int_var2: " << &int_var2 << std::endl;
    
    //Dereferencing a pointer
    int *ptr3{nullptr};
    int var3{100};
    ptr3 = &var3; // ptr3 points to var3

    std::cout << "Value of var3: " << var3 << std::endl;
    std::cout << "Address of var3: " << &var3 << std::endl;
    std::cout << "Value pointed to by ptr3: " << *ptr3 << std::endl; // Dereferencing ptr3 to get the value of var3
    std::cout << "Address of ptr3: " << &ptr3 << std::endl; // Address of the pointer itself

    
    //char *p_char_var{nullptr};
    //char char_var{'A'};
    //p_char_var = &char_var; // p_char_var points to char_var
    //std::cout << "Value of char_var: " << char_var << std::endl;
    //std::cout << "Address of char_var: " << &char_var << std::endl;
    //std::cout << "Value pointed to by p_char_var: " << *p_char_var << std::endl; // This line will cause undefined behavior since p_char_var is not initialized

    //char char_var2{'B'};
    //char *p_char_var = nullptr;
    //p_char_var = &char_var2; // p_char_var now points to char_var2
    //std::cout << "Value of char_var2: " << char_var2 << std::endl;
    // std::cout << "Address of char_var2: " << &char_var2 << std::endl;

    char mutable_message[] {"Hello, World!"};
    char *p_message = mutable_message; // Pointer to the mutable array
    std::cout << "Message: " << p_message << std::endl; // Output: Hello, World!

    // Correct dynamic array allocation
    int *dynamic_array{nullptr};
    dynamic_array = new int[5]; // Allocate memory for 5 integers
    dynamic_array[0] = 1;
    dynamic_array[1] = 2;
    dynamic_array[2] = 3;
    dynamic_array[3] = 4;
    dynamic_array[4] = 5; // Initialize the array
    

    for (int i = 0; i < 5; ++i) // Ensure the loop matches the allocated size
    {
        std::cout << "Value at index " << i << ": " << *(dynamic_array + i) << std::endl;
    }

    // Deallocate memory and avoid dangling pointers
    delete[] dynamic_array;
    dynamic_array = nullptr;

    {
        int local_var{100};
        int *local_ptr_var = new int; 
        std::cout << "Local variable: " << local_var << std::endl;
        std::cout << "Local pointer variable: " << local_ptr_var << std::endl; // Address of the dynamically allocated memory
        std::cout << "Value pointed to by local pointer variable: " << *local_ptr_var << std::endl; // Undefined behavior, as the memory is not initialized
        delete local_ptr_var; // Deallocate the memory allocated for the local pointer variable
        local_ptr_var = nullptr; // Avoid dangling pointer

    }
    // The local_ptr_var goes out of scope here, but the memory is not deallocated
    // This will cause a memory leak if not handled properly
    // To avoid this, always deallocate memory when it is no longer needed
    std::cout << "Local pointer variable goes out of scope" << std::endl;
    int *nole{new int};
    *nole = 200; // Assign a value to the dynamically allocated memory
    std::cout << "Value of nole: " << nole << std::endl; // Undefined behavior, as the memory is not initialized
    std::cout << "Value pointed to by nole: " << *nole << std::endl;
    delete nole; // Deallocate the memory allocated for the local pointer variable
    nole = nullptr; // Avoid dangling pointer

    //Writing to a uninitialized pointer
    //int *uninitialized_ptr; // Uninitialized pointer (contains garbage value)
    //*uninitialized_ptr = 83;
    // This will cause undefined behavior, as the pointer is not initialized to a valid memory location
    // std::cout << "Value pointed to by uninitialized pointer: " << *uninitialized_ptr << std::endl; // Undefined behavior
    //std::cout << "Dereferencing uninitialized pointer: " << *uninitialized_ptr << std::endl; // Undefined behavior
    // This will cause a segmentation fault or access violation error, as the pointer is not initialized to a valid memory location
    // To avoid this, always initialize pointers to nullptr or a valid memory location before dereferencing them

    //int *ptr5{};
    //*ptr5 = 790; // This will cause undefined behavior, as the pointer is not initialized to a valid memory location
    //    // std::cout << "Value pointed to by ptr3: " << *ptr5 << std::endl; // Undefined behavior
    // This will cause a segmentation fault or access violation error, as the pointer is not initialized to a valid memory location
    int *p_number{new int{62}}; // Dynamically allocate memory for an integer
    delete p_number; // Deallocate the previously allocated memory
    p_number = new int{20}; // Dynamically allocate memory for another integer
    std::cout << "Value pointed to by p_number: " << *p_number << std::endl; // Output: 20
    delete p_number; // Deallocate the memory allocated for the pointer
    p_number = nullptr; // Avoid dangling pointer

    // Different way to declare arrays
    size_t size{10};
    double *p_salaries {new double[size]}; // Dynamically allocate memory for an array of 10 doubles (contains garbage values)'
    int *p_students {new (std::nothrow) int[size]{}}; // Dynamically allocate memory for an array of 10 integers (contains garbage values)
    double *p_scores {new (std::nothrow) double[size]{1,2,3,4,5}}; // Dynamically allocate memory for an array of 10 doubles (contains garbage values)
    for (size_t i = 0; i < size; ++i)
    {
        std::cout << "Value at index " << i << ": " << *(p_salaries + i) << std::endl; // Output: 0 (default value for double)
        std::cout << "Value at index " << i << ": " << *(p_students + i) << std::endl; // Output: 0 (default value for int)
        std::cout << "Value at index " << i << ": " << *(p_scores + i) << std::endl; // Output: 1, 2, 3, 4, 5, 0, 0, 0, 0, 0 (default value for double)
    }
    if (p_scores){
        for (size_t i = 0; i < size; ++i)
        {
            std::cout << "Value at index " << i << ": " << *(p_scores + i) << std::endl; // Output: 1, 2, 3, 4, 5, 0, 0, 0, 0, 0 (default value for double)
        }
    }
    delete[] p_salaries; // Deallocate the memory allocated for the array of doubles
    delete[] p_students; // Deallocate the memory allocated for the array of integers
    delete[] p_scores; // Deallocate the memory allocated for the array of doubles
    p_salaries = nullptr; // Avoid dangling pointer
    p_students = nullptr; // Avoid dangling pointer
    p_scores = nullptr; // Avoid dangling pointer

    /*
     Pointers are different from arrays in C++
        - Pointers can be reassigned to point to different memory locations, while arrays cannot be reassigned.
        - Pointers can be dynamically allocated and deallocated, while arrays have a fixed size and cannot be resized.
        - Pointers can point to any data type, while arrays are of a specific data type.

    */
    double *temperatures = new double[size] {10.5, 20.5, 30.5, 40.5, 50.5, 60.5, 70.5, 80.5, 90.5, 100.5}; // Dynamically allocate memory for an array of doubles
    // std::cout << std::size(temperatures) << std::endl; // Error: cannot use std::size on a pointer
    for (size_t i = 0; i < size; ++i)
    {
        std::cout << "Temperature: " << temperatures[i] << std::endl; // Output: 10.5, 20.5, 30.5, 40.5, 50.5, 60.5, 70.5, 80.5, 90.5, 100.5
    }
    
    // Verbose nullptr check
    int *p_check{};
    p_check = nullptr; // Initialize the pointer to nullptr
    // p_check = new int{100}; // Dynamically allocate memory for an integer
    if (!(p_check == nullptr))
    {
        std::cout << "Pointer is null" << std::endl; // Output: Pointer is null
    }
    else
    {
        std::cout << "Pointer is not null" << std::endl; // This will not be executed
    }

    std::cout << "size of p_salaries: " << sizeof(p_salaries) << std::endl; // Output: size of pointer (usually 8 bytes on 64-bit systems)
    std::cout << "Address of p_salaries: " << &p_salaries << std::endl; // Output: address of the pointer itself
    // std::cout << "Value pointed to by p_salaries: " << *p_salaries << std::endl; // Undefined behavior, as the pointer is not initialized
    std::cout << "size of p_students: " << sizeof(p_students) << std::endl; // Output: size of pointer (usually 8 bytes on 64-bit systems)
    std::cout << "Address of p_students: " << &p_students << std::endl;
    // std::cout << "Value pointed to by p_students: " << *p_students << std::endl;
    std::cout << "size of p_scores: " << sizeof(p_scores) << std::endl; // Output: size of pointer (usually 8 bytes on 64-bit systems)
    std::cout << "Address of p_scores: " << &p_scores << std::endl; // Output: address of the pointer itself
    // std::cout << "Value pointed to by p_scores: " << *p_scores << std::endl; // Undefined behavior, as the pointer is not initialized
    std::cout << "size of temperatures: " << sizeof(temperatures) << std::endl; // Output: size of pointer (usually 8 bytes on 64-bit systems)
    delete p_check;
    // if (p_check) {
    //    delete p_check; // This will not be executed
        p_check = nullptr; // Avoid dangling pointer
    //}
    delete[] temperatures;
    delete[] dynamic_array; // Deallocate the memory allocated for the array of doubles
    delete[] p_students; // Deallocate the memory allocated for the array of integers
    delete[] p_scores; // Deallocate the memory allocated for the array of doubles
    delete[] p_salaries; // Deallocate the memory allocated for the array of doubles
    temperatures = nullptr; // Avoid dangling pointer
    dynamic_array = nullptr; // Avoid dangling pointer
    p_students = nullptr; // Avoid dangling pointer
    p_scores = nullptr; // Avoid dangling pointer
    p_salaries = nullptr; // Avoid dangling pointer

    // Static array vs dynamic array
    int static_array[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Static array of integers, Lives on the stack
    std::cout << "static_array size: " << std::size(static_array) << std::endl; // Output: 10 (size of the array)
    for (size_t i = 0; i < std::size(static_array); ++i)
    {
        std::cout << "Value at index " << i << ": " << static_array[i] << std::endl; // Output: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
    }

    int *dynamic_array2 = new int[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Dynamically allocate memory for an array of integers (Lives on the heap)
    // std::cout << "dynamic_array2 size : " << std::size(dynamic_array2) << std::endl; // Error: cannot use std::size on a pointer
    /* for (auto s : dynamic_array2)
    {
        std::cout << "Value at index " << s << ": " << s << std::endl; // Output: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
    }
    */
    for (size_t i = 0; i < 10; ++i)
    {
        std::cout << "Value at index " << i << ": " << *(dynamic_array2 + i) << std::endl; // Output: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
    }
    delete[] dynamic_array2;
    dynamic_array2 = nullptr;
    
    // Smart pointers
    std::unique_ptr<int> smart_ptr1(new int(100)); // Unique pointer to an integer
    std::cout << "Value pointed to by smart_ptr1: " << *smart_ptr1 << std::endl; // Output: 100
    std::cout << "Address of smart_ptr1: " << &smart_ptr1 << std::endl; // Output: address of the unique pointer itself
    // Don't need to delete smart_ptr1, it will be automatically deleted when it goes out of scope
    smart_ptr1.reset(); // Explicitly delete the object and set the pointer to nullptr
    return 0;
}
