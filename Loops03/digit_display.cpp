#include <iostream>
using namespace std;

int main()
{
    int i, n, d, num;
    cout << "Enter the number : ";
    cin >> n;
    while (n != 0)
    {
        d = n % 10;
        n = n / 10;
        cout << d << endl;
    }
    return 0;
}
