#include<iostream>
using namespace std;

class Test{
    public :
        int a;
        static int count;

        Test(){
            a = 10;
            count ++;
        }
};

//global var with scope of test class
int Test :: count = 0;

int main () {

}