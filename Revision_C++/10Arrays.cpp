#include <iostream>

double getTotal(double arr[], int size); // function declaration to calculate the total of an array of doubles

int main() {
    std::string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"}; // declare and initialize an array of strings
    for (int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++) {
        std::cout << cars[i] << std::endl;
    }

    // FOR EACH LOOP
    for (std::string car : cars) {
        std::cout << car << std::endl; // print each element of the array
    }

    double prices[5] = {10000.50, 20000.75, 15000.25, 30000.00, 25000.99}; // declare and initialize an array of doubles
    int size = sizeof(prices) / sizeof(prices[0]);
    double total = getTotal(prices, size); // call the getTotal function to calculate the total of the prices array
    
    std::cout << "Total: " << total << std::endl; // print the total of the prices array

    std::cout << sizeof(cars) << std::endl; // print the size of the array in bytes
    return 0;
}

double getTotal(double arr[], int size) { // function to calculate the total of an array of doubles
    double total = 0; // initialize total to 0
    for (int i = 0; i < size; i++) { // loop through the array
        total += arr[i]; // add each element to total
    }

    return total; // return the total
}