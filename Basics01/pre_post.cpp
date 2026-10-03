#include <iostream>

using namespace std;

int main()
{
    int x = 2, y, z;
    y = x++;
    int x1 = x;
    z = ++x + x++;
    int x2 = x;

    cout << y << z << x1 << x2 << endl;
    return 0;
}