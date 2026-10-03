#include<iostream>
using namespace std;
    
int x=10; // global var
int main()
{
	int x=20;
	{
		int x=30;
		cout<<x<<endl;
	}
	    
	cout<<x<<endl; // local var inside main
	cout<<::x<<endl; //access global var
	    
}
    