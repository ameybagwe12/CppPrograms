#include <iostream>

using namespace std;

int main()
{
    // Compile time array declaration
    int a[5] = {2, 4, 6, 8, 10};
    int b[] = {1, 3, 5, 7, 9};

    string str[] = {"Hello", "Amey"};
    for(string s : str) {
        for(int i=0; i< s.length(); i++) {
            cout << s[i];
        }
        cout << "\n";
    }
    
    for (int i = 0; i < sizeof(a); i++)
    {
        cout << a[i] << endl;
        ;
    }

    // Another way of iterating through whole array
    // For Each
    for (int i : b) // auto --> type if dont know the datatype
    {
        cout << ++i; // 246810
    }
    return 0;
}
