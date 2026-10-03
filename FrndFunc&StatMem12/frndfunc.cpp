#include<iostream>
using namespace std;

class Derived; // class declaration before using friend attr

class Test
{
    private : int a;
    protected : int b;
    public : int c;

    // friend attr is used to get hold of non-accessible values in diff class/func
    // friend void func();
    friend Derived; // also can be used for any class
};

class Derived {
    Test t;
    void func() {
    t.a = 10;
    t.b = 20;
    t.c = 30;
}
};

int main()
{
    cout << "Hello world";
}
