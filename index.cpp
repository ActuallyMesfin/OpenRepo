#include <iostream>

int main() {
    // Dynamically allocate an integer
    int* dynamicInt = new int;

    // Check if allocation was successful
    if (dynamicInt == nullptr) {
        std::cerr << "Memory allocation failed." << std::endl;
        return 1; // Exit with an error code
    }

    // Assign a value to the dynamically allocated integer
    *dynamicInt = 42;

    // Print the value
    std::cout << "Dynamically allocated integer value: " << *dynamicInt << std::endl;

    // Deallocate the dynamically allocated memory
    delete dynamicInt;

    return 0; // Exit successfully
}
