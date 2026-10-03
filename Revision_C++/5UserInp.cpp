#include <iostream>

int main () {
    std::string name;
    std::cout << "Enter your name :" << std::endl;
    std::cin >> name; // read user input and store it in the variable name
    std::cout << "Hello, " << name << "!" << std::endl; // print a greeting with the user's name
    
    // To remove newline character from the input buffer before reading a line of text use ws manipulator
    std::string city;
    std::cout << "Enter your city :";
    std::getline(std::cin >> std::ws, city); // read user input with whitespace and store it in the variable city
    std::cout << "You live in " << city << "." << std::endl; // print the user's city

    int age;
    std::cout << "Enter your age :"; 
    std::cin >> age; // read user input and store it in the variable age
    std::cout << "You are " << age << " years old." << std::endl; // print the user's age

    return 0;
}