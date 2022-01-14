//21_operator overloading
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

	complex operator+(complex c2)
	{
		complex c3;
		c3.a = a + c2.a;
		c3.b = b + c2.b;
		return c3;
	}
};

int main()
{
	complex c1(10, 20);
	complex c2(20, 30);
	complex c3;
	c3 = c1 + c2;// two operands
	c1.show();
	c2.show();
	c3.show();

}

