//29_accessing parent class constructor
//accessing super/base/parent class constructor
//7/3/18
#include<iostream>
using namespace std;
class A
{
public:
	A()
	{
		cout << "zero in A";
	}
	A(int x)
	{
		cout << "one in A";
	}
};

class B : public A
{
public:
	B()
	{
		cout << "zero in B";
	}
	B(int x)
	{
		cout << "one in B";
	}
};

int main()
{
	//B ob;
	B ob(10);
}

//B has all the properties of A, so when B is executed, A is also executed
/*
When no value is passed->default constructor
When value is passed->parametirized constructor
*/
