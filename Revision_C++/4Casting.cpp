#include <iostream> // include the iostream library for input and output operations


int main () {

    // Implicit Casting - Automatic type conversion
    // Explicit Casting - Manual type conversion

    // Implicit Casting
    int a = 10; // declare and initialize an integer variable a
    double b = a / 5.5; // implicitly cast the integer a to a double and assign it to b
    std::cout << "Implicit Casting: " << b << std::endl; // print the value of b

    // Explicit Casting
    double c = 9.78; // declare and initialize a double variable c
    int d = (int)c; // explicitly cast the double c to an integer and assign it to d
    std::cout << "Explicit Casting: " << d << std::endl; // print the value of d

    return 0;
}