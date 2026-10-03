#include <iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10], d[10][10], r, c;
    cout << "Enter the rows/columns of matrix : ";
    cin >> r >> c;

    cout << "Enter the elements of matrix A : \n";

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "Enter the elements of matrix B : \n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            d[i][j] = a[i][j] + b[i][j];
        }
    }

    cout << "Sum of elements of matrix are : " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << d[i][j] << "\t";
        }
        cout << "\n";
    }

    // cout << "Enter elements of matrix A : ";
    // for (int i = 0; i < r; i++)
    //     for (int j = 0; j < c; j++)
    //         cin >> a[i][j];
    // cout << "Enter elements of matrix B : ";
    // for (int i = 0; i < r; i++)
    //     for (int j = 0; j < c; j++)
    //         cin >> b[i][j];
    // for (int i = 0; i < r; i++)
    //     for (int j = 0; j < c; j++)
    //         d[i][j] = a[i][j] + b[i][j];
    // cout << "Sum of matrices\n";
    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //         cout << d[i][j] << "  ";
    //     cout << "\n";
    // }
}
