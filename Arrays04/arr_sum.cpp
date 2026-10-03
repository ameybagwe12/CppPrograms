#include <iostream>

using namespace std;

int main()
{
    int a[10] = {2, 4, 6, 8, 10}, sum = 0;
    for (auto i : a)
    {
        sum += i;
    }

    cout << "SUM OF ELEMENTS OF ARRAY IS : " << sum;
}