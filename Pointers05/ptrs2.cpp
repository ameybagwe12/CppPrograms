#include <iostream>

using namespace std;

int main()
{
    int size;
    cout << "Enter the number of elements : ";
    cin >> size;
    int A[size];

    cout << sizeof A << endl;

    int *p = new int[20];

    delete[] p;
    p = new int[40];
}