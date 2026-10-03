#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Enter age : ";
    cin >> age;

    if (age >= 12 && age <= 15)
    {
        cout << "young";
    }
    else
    {
        cout << "not young";
    }
}