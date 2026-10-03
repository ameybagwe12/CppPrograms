#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double r, area;

    cout << "Enter radius of circle : ";
    cin >> r;

    area = 22 / 7.0 * pow(r, 2);

    cout << "Area is : " << area << endl;
}
