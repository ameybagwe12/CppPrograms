#include<iostream>

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6}; // declare and initialize an array of integers
    int n = sizeof(arr) / sizeof(arr[0]); // calculate the size of the array

    // SORTING THE ARRAY IN ASCENDING ORDER
    for(int i=0;i<n - 1; i++) {
        for(int j=0;j<n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) { // compare adjacent elements
                std::swap(arr[j], arr[j + 1]); // swap if they are in the wrong order
            }
        }
    }

    for(int num : arr) { // range-based for loop to iterate through the array
        std::cout << num << " "; // print each element of the sorted array
    }
}