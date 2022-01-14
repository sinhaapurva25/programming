//15_paracons
//23/2/18
#include<iostream>
using namespace std;
class complex
{
	int x, y;
public:
	complex()
	{
		x = 0;
		y = 0;
	}
	complex(int a, int b)
	{
		x = a;
		y = b;
	}

	void disp()
	{
		cout << x << "+" << y << "j" << endl;
	}

	complex add(complex A)//4
	{
		complex f;
		f.x = x + A.x;
		f.y = y + A.y;
		return f;
	}
};


int main()
{
	complex c1(10, 20); //1

	complex c2;
	c2 = complex(100, 20); //2

	complex c3;         //3
	c3 = c1.add(c2);

	c1.disp();
	c2.disp();
	c3.disp();

}