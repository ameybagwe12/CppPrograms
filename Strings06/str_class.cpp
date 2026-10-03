#include <iostream>
#include<string> // inbuilt string class

using namespace std;

int main () {
    string str; // Internally will create an array
    cout << "Enter a string : ";
    getline(cin,str);
    getline(cin,str); // can read two lines
}
