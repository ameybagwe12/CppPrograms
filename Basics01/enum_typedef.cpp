#include <iostream>

using namespace std;

typedef int marks;

enum day // user defined -- constants
{
    // mon = 1, if mon = 1 then it follows next serially
    mon,
    tues,
    wed,
    thur,
    // fri = 8 then sat = 9 sun = 10
    fri,
    sat,
    sun
};

int main()
{
    // m1 and m2 are int type but given diff name
    marks m1, m2;
    day d;
    d = mon;

    cout << d << " " << tues; // will print 0
}