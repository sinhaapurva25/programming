//22_simple inheritance
//6/3/18
#include<iostream>
using namespace std;

class A
{
public:
	void show()
	{
		cout << "A class";
	}
};

class B :public A
{
public:
	void view()
	{
		cout << "B class";
	}
};

int main()
{
	B ob;
	ob.show();

}
//in similar way, try out other 4 inheritances
