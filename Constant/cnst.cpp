#include<iostream>
using namespace std;

int main () {
    int x = 10, y = 20;
    const int *ptr = &x; // cannot be modified
    // ++ *ptr; --> read only ptr

    int * const ptr1 = &x; // here the ptr is constnt
    // ptr1 = &y; --> cannot be pointed to two vars

    cout << *ptr << " " << x << endl;
    cout << ++*ptr1 << " " << y << endl;

}
