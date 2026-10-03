#include <iostream>

using namespace std;

int main()
{
    float area;
    int b, h;
    cout << "Enter the base and height of triangle : ";
    cin >> b >> h;
    area = (float)b * h / 2; // type casting
    cout << "The area of triangle is : " << area;
    
    return 0;
}