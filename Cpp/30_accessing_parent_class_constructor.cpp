//30_accessing parent class constructor
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
	B(int x) :A(14)
		/*
		when nothing is mentioned, it's default
		when parameters are passed it's parametrized
		*/
	{
		cout << "one in B";
	}
};

int main()
{
	//B ob;
	B oba(10);
}
