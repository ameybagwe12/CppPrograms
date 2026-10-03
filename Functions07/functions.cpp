#include<iostream>
using namespace std;

void display() // return type void
{
    cout << "Hello" << endl;
}

float add(float x , float y){ // return type float

    float z = x+y;
    return z;
}

int max(int a, int b, int c){ // return type int
    if (a>b && a>c)
        return a;
    else if (b > c)
        return b;
    else return c;
}

int main(){
    display();

    float z = add(5.67,6.77);
    int large = max(7,10,5);
    cout << z << endl;
    cout << large << endl;
    return 0;
}
