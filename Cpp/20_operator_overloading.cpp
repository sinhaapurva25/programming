//20_operator_overloading
//6/3/18
#include<iostream>
using namespace std;
class complex
{
	int a, b;
public:

	complex()
	{
		a = 0;
		b = 0;
	}
	complex(int x, int y)
	{
		a = x;
		b = y;
	}

	void show()
	{
		cout << a << "+";
		cout << b << "j" << endl;
	}

	void operator+(complex A)
	{
		complex t;
		/*complex t(0,0);
		you can write it like this but it is a bad approach
		say you have many functions, in that case you will
		have to pass parameters (0,0) every time you use it

		*/

		t.a = A.a + a;
		t.b = A.b + b;
		t.show();

	}
};

int main()
{
	complex c1(10, 20);
	complex c2(20, 30);
	c1.show();
	c2.show();
	c1 + c2;// two operands

}
/*
you asked a question if we can write c1.c2+show(), you can

Change operator overloading fnc. to:
complex operator+(complex A)
		{
			complex t;
			t.a=A.a+a;
			t.b=A.b+b;
			return t;
		}
Change main fnc. to:
int main()
{
	complex c1(10,20);
	complex c2(20,30);
	c1.show();
	c2.show();
	c1+c2;// two operands
}
*/
