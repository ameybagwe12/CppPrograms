#include <iostream>
using namespace std;

int main()
{
    int i, n, d, rev = 0;
    cout << "Enter the number : ";
    cin >> n;
    while (n != 0)
    {
        d = n % 10;
        rev = rev * 10 + d;
        n = n / 10;
    }
    cout << rev;
    return 0;
}
