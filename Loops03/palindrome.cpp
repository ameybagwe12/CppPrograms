#include <iostream>
using namespace std;

int main()
{
    int i, n, d, rev = 0, temp;
    cout << "Enter the number : ";
    cin >> n;
    temp = n;
    while (n != 0)
    {
        d = n % 10;
        rev = rev * 10 + d;
        n = n / 10;
    }

    if (rev == temp)
    {
        cout << "palindrome\n";
    }
    else
    {
        cout << "not a palindrome\n";
    }
    cout << rev;
    return 0;
}
