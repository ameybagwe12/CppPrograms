#include <iostream>
using namespace std;

int main()
{
    int i, n, d, m, num = 0;
    cout << "Enter the number : ";
    cin >> n;
    m = n;
    while (n != 0)
    {
        d = n % 10;
        num = num + d * d * d;
        n = n / 10;
    }
    n = m;
    cout << num << endl;
    if (num == n)
    {
        cout << "Armstrong number";
    }
    else
    {
        cout << "Not an Armstrong number";
    }
    return 0;
}
