#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the three numbers : ";
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << a;
    }
    else
    {
        if (b > a && b > c)
        {
            cout << b;
        }
        else
        {
            if (c > a && c > b)
            {
                cout << c;
            }
        }
    }
}