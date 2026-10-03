#include<iostream>
using namespace std;

class Base
{
    public:
	void display() // not declared as virtual func call is based on ptr
	{
		cout<<"Display of Base"<<endl;
	}

};

class Derived:public Base
{
    public:
	void display()
	{
		cout<<"Display of Derived"<<endl;
	}

};

int main()
{
	Derived d;
	d.display();
	Base *ptr = new Derived();
	ptr->display(); // because base cls func of display is not virtual

}
