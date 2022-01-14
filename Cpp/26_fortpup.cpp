//26_fortpup
//function overriding and run-time polymorphism and up-casting
//7/3/18
#include<iostream>
using namespace std;

class shape
{
	int a;
public:
	virtual void area()
	{
		cout << "matha mota" << endl;
	}
};
class rect : public shape
{
public:
	int x, y;
	rect()
	{
		x = 1;
		y = 1;
	}
	rect(int a, int b)
	{
		x = a;
		y = b;
	}
	void area()
	{
		cout << (x * y) << endl;
	}
};
class cir : public shape
{
public:
	int r;
	cir()
	{
		r = 1;
	}
	cir(int R)
	{
		r = R;
	}

	void area()
	{
		cout << (3.14 * r * r) << endl;
	}
};

int main()
{
	shape* ptr;

	rect r(10, 20);
	ptr = &r; //upcastingf
	ptr->area();

	cir c(10);
	ptr = &c;
	ptr->area();

}
