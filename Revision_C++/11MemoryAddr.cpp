#include<iostream>

void swap (std::string &str2, std::string &str3) { // function to swap the values of two strings using pass by reference
    std::string temp = str2; // store the value of str2 in a temporary variable
    str2 = str3; // assign the value of str3 to str2
    str3 = temp; // assign the value of temp (original str2) to str3
}

int main () {
    // Memory Address - A location in memory where data is stored. Each variable has a unique memory address.
    std::string str1 = "Hello, ";
    
    std::string *p = &str1; // store the memory address of str1 in the variable p
    std::cout << "Memory address of str1: " << p << std::endl; 

    std::cout << "Memory address of str1: " << &str1 << std::endl;


    // PASS BY VALUE AND PASS BY REFERENCE

    
    std::string str2 = "Cold Drinks";
    std::string str3 = "Hot Drinks";
    swap(str2, str3); // call the swap function to swap the values of str2 and str3
    
    std::cout << "str2: " << str2 << std::endl; // print the value of str2
    std::cout << "str3: " << str3 << std::endl; //

    // CONST POINTERS AND POINTERS TO CONST
    const std::string *ptr1 = &str2; // pointer to a constant string
    std::cout << "Value pointed to by ptr1: " << *ptr1 << std::endl;

}