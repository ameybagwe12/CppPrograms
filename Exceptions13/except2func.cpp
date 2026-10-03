#include <iostream>
using namespace std;

int division (int a, int b)
{
    if(b == 0)
        throw 1;
    else 
        return a/b;
}

int main() {
    int x = 10, y = 0, z; // Change y to any other value to avoid exception
    try {
        z = division(x,y) ; // error div by zero
        cout << z << endl;
    }
    catch (int e){
        cout << "Division by zero " << e << endl;
    }
    cout << "Bye "<< endl; // Terminated successfully
}