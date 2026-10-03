#include<iostream>
using namespace std;
    
class Rectangle
{
    private:
	int length;
	int breadth;
	    
    public:
	Rectangle()
	{
    	length=0;
		breadth=0;
	}
	    
	int area()
	{
		return length*breadth;
	}
	
};
    
int main()
{
	Rectangle r1;
	cout<<r1.area()<<endl;
    	
}
    