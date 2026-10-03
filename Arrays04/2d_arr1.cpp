#include <iostream>
using namespace std;

int main()
{
    int A[2][3] = {{1, 2, 3}, {4, 5, 6}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << A[i][j];
        }
        cout << endl;
    }
    cout << "Printing matrix using different for syntax";
    for (auto &x : A)
    {
        for (auto &y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}