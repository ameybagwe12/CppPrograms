#include <iostream>

using namespace std;

int main()
{
    int a[10] = {2, 4, 10, 6, 8 }, large;
    large = a[0];
    for (int i : a)
    {
        if (large < i)
        {
            large = i;
        }
    }

    cout << "Largest element of array is : " << large;
}
