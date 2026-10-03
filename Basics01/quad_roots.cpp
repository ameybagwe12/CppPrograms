#include <iostream>
#include <cmath> // to use math functions

using namespace std;

int main()
{
    float root1, root2, a, b, c;

    cout << "Enter the values of a, b and c : ";
    cin >> a >> b >> c;

    // using sqrt and pow functions of cmath
    root1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    root2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

    cout << "The roots are : " << root1 << " and " << root2 << endl;
    return 0;
}