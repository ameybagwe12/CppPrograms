#include <iostream>

using namespace std;

int main()
{
    int a[10] = {2, 4, 6, 8, 10}, x;

    cout << "Enter the number to be searched : ";
    cin >> x;
    for (int i = 0; i < 5; i++)
    {
        if (x == a[i])
        {
            cout << "Element found at index " << i + 1;
        }
    }
}
