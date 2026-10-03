#include<iostream>
#include<cmath>

int main () {
    double num1 = 4;
    double num2 = 2;
    double result = std::pow(num1, num2);
    double squareRoot = std::sqrt(num1);

    float floatNum = 3.14f; // declare and initialize a float variable

    std::cout << "Result: " << result << std::endl;
    std::cout << "Square Root: " << squareRoot << std::endl;
    std::cout << "Float Number Absolute Value: " << std::abs(floatNum) << std::endl;
    std::cout << "Float Number Ceiling Value: " << std::ceil(floatNum) << std::endl;
    std::cout << "Float Number Floor Value: " << std::floor(floatNum) << std::endl;
    std::cout << "Float Number Rounded Value: " << std::round(floatNum) << std::endl;
    return 0;
}