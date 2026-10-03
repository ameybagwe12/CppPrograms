#include <iostream>
#include<string> // inbuilt string class

using namespace std;

int main () {
    string str = "Hello";
    cout << str.length() << endl;
    cout << str.append(" World") << endl;
    cout << str.insert(5, " Insert") << endl;
    cout << str.replace (5,7, " New") << endl;
    cout << str << endl; // updated value

    string str2 = "Welcome";
    char s[10];
    str2.copy(s, str2.length());
    cout << s << endl;
    cout << str2[2] << endl; // character at post 2

    cout << str + str2 << endl;

    // Iterating over string
    string::iterator it; // reverse_iterator
    for (it=str.begin(); it!=str.end();it++){ // r_begin, r_end
        cout << *it;
    }
    cout << endl;

    for (int i=0 ;str[i]!='\0';i++){ // r_begin, r_end
        cout << str[i];
    }
    cout << endl;
}
