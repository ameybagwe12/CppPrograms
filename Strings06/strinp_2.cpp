#include <iostream>
using namespace std;

int main()
{
    char s[20];
    char s2[100];

    cout << "Enter your name : ";
    cin.get(s, 20); // Will include spaces
    //cin >> s; -> Will not take words after space
    cout << "Welcome " <<s <<endl;

    cin.ignore(); // Ignores the char after reading first string

    cout << "Enter your name : ";
    cin.getline(s, 100);
    cout << "Welcome " <<s <<endl;

    return 0;
}
