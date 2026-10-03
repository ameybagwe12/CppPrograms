#include <iostream>
using namespace std;

class Base{
    public:
        Base(){ // Priorities to non parameterized during execution
            cout << "Non-param Base" << endl;
        }
        Base(int x){
            cout << "Param of Base " << x << endl;
        }
};

class Derived : public Base{
    public :
        Derived(){ // Priorities to derived class non-parameterized
            cout << "Non-param Derived "<< endl;
        }
        Derived(int y){
            cout << "Param of Derived " << y << endl;
        }
        Derived(int x, int y): Base(x){ // Calling base class from derived class
            cout << "Param of Derived " << y << endl;
        }
};

int main(){
    Derived d; // Both default
    Derived d1(10); // Param of derived and default of base
    Derived d2(5,12); // Param of derived and param of base
}