#include <iostream>
#include <string>

int main() {
    // Integer data type (whole numbers)
    int age = 25;

    // Floating-point data type (numbers with decimal points)
    float height = 5.9f;
    double weight = 72.5;

    // Character data type (single character)
    char initial = 'A';

    // Boolean data type (true/false)
    bool isStudent = true;

    // String data type (sequence of characters)
    std::string name = "John Doe";

    // Long integer (larger range than int)
    long population = 1000000;

    // Short integer (smaller range than int)
    short year = 2025;

    // Unsigned integer (positive numbers only)
    unsigned int positiveCount = 50;

    // Long long integer (very large integers)
    long long distance = 123456789012345;

    const int x = 10;
    // x = 20; // Error: x is a constant and cannot be modified

    std::cout<< "Value of x: " << x <<std::endl;

    // Printing values
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Height: " << height << " feet" << std::endl;
    std::cout << "Weight: " << weight << " kg" << std::endl;
    std::cout << "Initial: " << initial << std::endl;
    std::cout << "Student: " << (isStudent ? "Yes" : "No") << std::endl;
    std::cout << "Population: " << population << std::endl;
    std::cout << "Year: " << year << std::endl;
    std::cout << "Positive Count: " << positiveCount << std::endl;
    std::cout << "Distance: " << distance << " meters" << std::endl;

    return 0;
}
