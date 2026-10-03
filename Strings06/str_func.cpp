#include<iostream>
#include<cstring>

using namespace std;

int main () {

    char s[] = "hello world";
    cout << "Length of string : " << strlen(s) <<endl;

    char s2[10] = "Morning";
    strncat(s,s2,4); // First four char of s2 string
    cout << s << endl; // New s variable

    char s3[100] = "";
    strcpy(s3,s);
    cout << s3 << endl;

    char s4[10] = "o";
    cout << strstr(s,s4) << endl;

    cout << strcmp(s,s2) <<endl;

    return 0;
}
