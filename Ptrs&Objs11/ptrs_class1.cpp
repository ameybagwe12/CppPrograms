#include <iostream>
using namespace std;

class Base
{
public:
    /* data */
    void func1() {
        cout << "fun1 of Base " <<endl;
    }
};

class Derived: public Base
{
    public:
        void fun2(){
            cout << "fun2 of Derived" << endl;
        }
};

int main()
{
    // Vice versa is not possible (cannot create derived ptr pointing to Base)
    // Base *b = new Derived ()
    Derived d;
    Base *b = &d;
    b->func1();
    d.fun2(); 
// b->fun2();
// Cannot call the classes of derived classes as ptr is of Base class
    return 0;
}
