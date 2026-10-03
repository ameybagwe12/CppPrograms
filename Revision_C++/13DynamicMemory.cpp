#include<iostream>

int main () {
    int *pNum = NULL; // declare a pointer and initialize it to nullptr
    std::cout << "Memory address of pNum: " << pNum << std::endl;

    pNum = new int; // allocate memory for an integer and assign the address to pNum
    *pNum = 42; // assign a value to the allocated memory

    std::cout << "Value of pNum: " << *pNum << std::endl; // print the value stored at the memory address pointed to by pNum
    std::cout << "Memory address of pNum: " << pNum << std::endl; // print the memory address of pNum

    delete pNum; // deallocate the memory allocated for pNum

    char *pGrades = NULL; // declare a pointer and initialize it to nullptr
    pGrades = new char[5]; // allocate memory for an array of 5 characters and assign the address to pGrades

    for (int i = 0; i < 5; i++) {
        std::cout << "Enter grade " << i + 1 << ": ";
        std::cin >> pGrades[i]; // read user input and store it in the allocated memory
    }
    std::cout << "Value of pGrades: " << *pGrades << std::endl; // print the value stored at the memory address pointed to by pGrades
    std::cout << "Memory address of pGrades: " << pGrades << std::endl; // print the memory address of pGrades

    delete pGrades; // deallocate the memory allocated for pGrades
}