#include <iostream>

void printMessage(std::string message); // function declaration

int areaOfSquare(int sideLength) { // function definition
    return sideLength * sideLength; // calculate and return the area of a square
}

int add (int a, int b) { // function definition for adding two integers
    return a + b; // return the sum of two integers
}

double add (double a, double b) { // function definition for adding two doubles
    return a + b; // return the sum of two doubles
}

int main() {
    printMessage("Hello, World!"); // function call with an argument
    int squareArea = areaOfSquare(5); // function call with an argument
    std::cout << "Area of square: " << squareArea << std::endl;
    return 0;

    // Function Overloading Example
    int sum1 = add(5, 10); // function call with two integer arguments
    double sum2 = add(3.5, 2.5); // function call with two double arguments
    std::cout << "Sum of integers: " << sum1 << std::endl;
    std::cout << "Sum of doubles: " << sum2 << std::endl;

}

void printMessage(std::string message) { // function definition
    std::cout << message << std::endl;
}