#include <iostream>
using namespace std;

int main() {
    int x = 10, y = 0, z; // Change y to any other value to avoid exception
    try {
        if (y == 0) { // If true goto catch
            throw 1; // Any type of data can be thrown
        }
        z = x/y ; // error div by zero
        cout << z << endl;
    }
    catch (int e){
        cout << "Division by zero " << e << endl;
    }
    cout << "Bye "<< endl; // Terminated successfully
}