
#include <iostream>
#include <vector>

// Typedef Example
typedef unsigned int uint; // 'uint' is now an alias for 'unsigned int'

// Using Example
using FloatVector = std::vector<float>;  // 'FloatVector' is now an alias for 'std::vector<float>'

int main() {
    uint num1 = 100;  // 'uint' is equivalent to 'unsigned int'
    std::cout << "Using typedef (uint): " << num1 << std::endl;

    // Using the using alias for a container type
    FloatVector values = {1.1f, 2.2f, 3.3f, 4.4f};
    std::cout << "Using using (FloatVector): ";
    for (const auto& value : values) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    // Fixing pointer type to match the type of num1
    typedef uint* IntPointer;  // Now 'IntPointer' is an alias for 'unsigned int*'
    IntPointer ptr = &num1;    // Initialize the pointer with the address of num1
    std::cout << "Using typedef for pointer (IntPointer): " << *ptr << std::endl;  // Dereference the pointer

    // Using `using` for a pointer type
    using IntPtr = uint*;  // Now 'IntPtr' is an alias for 'unsigned int*'
    IntPtr ptr2 = &num1;   // Initialize the pointer with the address of num1
    std::cout << "Using using for pointer (IntPtr): " << *ptr2 << std::endl;  // Dereference the pointer

    return 0;
}
