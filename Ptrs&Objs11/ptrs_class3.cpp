#include <iostream>
using namespace std;

class BasicCar
{
public:
    /* data */
    void start() {
        cout << "Car Started" <<endl;
    }
};

class AdvanceCar: public BasicCar
{
    public:
        void playMusic(){
            cout << "Music Playing" << endl;
        }
};

int main()
{
    // Vice versa is not possible (cannot create derived ptr pointing to Base)
    AdvanceCar a;
    BasicCar *b = &a;
    b->start();
    a.playMusic(); 
// b->fun2();
// Cannot call the classes of derived classes as ptr is of Base class
    return 0;
}
