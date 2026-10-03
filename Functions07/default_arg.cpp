#include <iostream>
using namespace std;

int sum(int b, int c, int a = 10);
int main()
{
    int tot = sum(5, 8);
    int tot1 = sum(5, 8, 6);

    cout << tot << "\n"
         << tot1 << endl;
}
int sum(int b, int c, int a)
{
    return a + b + c;
}
