#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int u, v, a;

    float speed;

    cout << "Enter u, v, a : ";
    cin >> u >> v >> a;

    speed = (v * v - u * u) / (2.0 * a);

    cout << "Speed = " << speed << endl;
    return 0;
}
