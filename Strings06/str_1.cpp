#include <iostream>

using namespace std;

int main ()
{
    char S[] = {'H', 'E', 'L', 'L', 'O', '\0'};
    char s[] = "Hello";
    string str = "Hello";
    for(int i=0; i< str.length(); i++) {
        cout << str[i];
    }
    cout << S << s << str << endl;
    return 0;
}
