//5_object
#include<iostream.h>
#include<conio.h>
class complex
{
	int a, b;
public:
	void setdata(int x, int y)
	{
		a = x;
		b = y;
	}

	void show()
	{
		cout << a << "+" << b << "j\n";
	}

	complex add(complex A)
	{
		complex f;
		f.a = a + A.a;
		f.b = b + A.b;

		return f;
	}
};

void main()
{
	complex c1, c2, c3;
	c1.setdata(10, 20);
	c2.setdata(20, 30);
	c1.show();
	c2.show();
	c3 = c1.add(c2);
	c3.show();
	getch();
}