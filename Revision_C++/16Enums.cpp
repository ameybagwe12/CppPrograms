#include<iostream>

int main () {
    // ENUMS - An enum is a user-defined data type that consists of a set of named integral constants. It is used to assign names to integral constants to make the code more readable and maintainable.
    enum Weekday {Monday=1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday}; // declare an enum named Weekday with 7 named integral constants
    Weekday today = Wednesday; // declare a variable of type Weekday and assign it the

    std::cout << "Today is: " << today << std::endl; // print the value of today (which is 2, the integral value of Wednesday)
}