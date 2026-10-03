#include <iostream>

int main () {
    // Pointers - A pointer is a variable that stores the memory address of another variable. Pointers are used to store the address of variables and to access the value stored at that address.
    std::string freePizza[5] = {"Cheese Pizza", "Veggie Pizza", "Pepperoni Pizza", "BBQ Chicken Pizza", "Hawaiian Pizza"}; // declare and initialize an array of strings
    int age = 21;
    std::string name = "John Doe";

    std::string *ptr = freePizza; // declare a pointer to the first element of the array
    std::cout << "Memory address of freePizza: " << *ptr << std::endl; // print the memory address of the first element of the array    
    std::cout << "Memory address of freePizza: " << &freePizza[0] << std::endl; // print the memory address of the first element of the array

    // Nullptr - A pointer that does not point to any memory location. It is used to indicate that the pointer is not pointing to any valid memory location.
    std::string *ptr1 = nullptr; // declare a pointer and initialize it to nullptr
    std::cout << "Memory address of ptr1: " << ptr1 << std::endl; // print the memory address of ptr1
}