//37_abstraction
#include<iostream>
#include<conio.h>
using namespace std;
class Shape
{
	int x, y;
public:
	virtual void area() = 0;
	virtual void perimeter() = 0;

	//you can't continue without overriding abstract functions
};

class Rect :public Shape
{
	int a, b;
public:
	Rect(int x, int y)
	{
		a = x;
		b = y;
	}

	void area()
	{
		cout << (a * b) << endl;
	}

	void perimeter()
	{
		cout << (a + b + a + b) << endl;
	}
};

class Cir : public Shape
{
	int r;
public:
	Cir(int x)
	{
		r = x;
	}
	void area()
	{
		cout << (3.14 * r * r) << endl;
	}

	void perimeter()
	{
		cout << (2 * 3.14 * r) << endl;
	}
};

int main()
{
	Shape* ptr;

	Rect r(10, 20);
	ptr = &r;
	ptr->area();
	ptr->perimeter();

	Cir c(5);
	ptr = &c;
	ptr->area();
	ptr->perimeter();
}
