#include <iostream>

using namespace std;

int main()
{
    string name, name1;
    // cout << "May I know your name : ";
    // cin >> name; only read one word
    // cout << "Welcome " << name;

    cout << "\nMay I know your name : "; // \n - new line
    getline(cin, name1);                 // to read all the words
    cout << "Welcome " << name1 << endl; // endline
    return 0;
}