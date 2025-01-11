#include <iostream>
#include <string>

// Define a namespace
namespace MyNamespace {
    int number = 10;

    void printNumber() {
        std::cout << "Number from MyNamespace: " << number << std::endl;
    }

    // Nested namespace
    namespace InnerNamespace {
        void printMessage() {
            std::cout << "This is from InnerNamespace!" << std::endl;
        }
    }
}

// Anonymous namespace
namespace {
    int secretValue = 42;

    void secretFunction() {
        std::cout << "This is a secret function!" << std::endl;
    }
}

int main() {
    // Accessing variables and functions from MyNamespace
    std::cout << "Accessing MyNamespace number: " << MyNamespace::number << std::endl;
    MyNamespace::printNumber();

    // Accessing nested namespace InnerNamespace
    MyNamespace::InnerNamespace::printMessage();

    // Using `using` keyword to bring elements into scope
    using MyNamespace::number;  // Bringing only 'number' into the global scope
    using MyNamespace::printNumber;  // Bringing 'printNumber' into the global scope

    std::cout << "Accessing number after using keyword: " << number << std::endl;
    printNumber();

    // Accessing anonymous namespace (secret variable and function)
    std::cout << "Accessing secret value: " << secretValue << std::endl;
    secretFunction();

    // Standard library example
    std::string message = "This is an example of std::string!";
    std::cout << message << std::endl;

    return 0;
}
