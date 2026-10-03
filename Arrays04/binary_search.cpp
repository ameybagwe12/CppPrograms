#include <iostream>

using namespace std;

int main()
{
    int a[10] = {2, 4, 6, 8, 10}, x;
    int low = 0, high = 4;
    int mid = (low + high) / 2;

    cout << "Enter the number to be searched : ";
    cin >> x;
    while (low <= high)
    {
        if (x == a[mid])
        {
            cout << "Found at : " << mid;
            return 0;
        }
        else if (x < a[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << "Element not found";
}