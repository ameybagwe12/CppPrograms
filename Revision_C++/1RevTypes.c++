#include <iostream> // include the iostream library for input and output operations
#define PI 3.14159 // define a macro for the value of pi
int main () {

    int x; // declare an integer variable x
    x = 5;
    int y = 10; // declare and initialize an integer variable y
    int sum = x + y; // calculate the sum of x and y

    double pi = PI; // declare and initialize a double variable pi using the macro
    double circumference = 2 * pi * 5; // calculate the circumference of a circle with radius 5
    
    char letter = 'A'; // declare and initialize a char variable letter

    bool isTrue = true; // declare and initialize a boolean variable isTrue

    std::string name = "Amey Bagwe"; // declare and initialize a string variable name
    std::cout << "Name: " << name << std::endl; // print the name variable to the console

    // Standard output stream
    std::cout << "Hello, World!" << std::endl; // end line after printing "Hello, World!"
    std::cout << "This is a C++ program. x = " << x << ", y = " << y << ", sum = " << sum << '\n';
    std::cout << "pi = " << pi << ", letter = " << letter << ", isTrue = " << isTrue << '\n';

    // READ ONLY (CONSTANT) VARIABLES
    const double PI_CONSTANT = PI; // declare a constant double variable PI_CONSTANT using the macro
    std::cout << "PI_CONSTANT = " << PI_CONSTANT << '\n';

    return 0;
}
