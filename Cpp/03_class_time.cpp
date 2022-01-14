//3_class_time
#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
	int a, b, c;

public:

	void setdata(int x, int y, int z)
	{
		a = x;
		b = y;
		c = z;
	}

	void add(int x, int y, int z)
	{
		a += x;
		b += y;
		c += z;
		cout << a << ":" << b << ":" << c << "\n";
	}

};
int main()
{
	complex t1, t2;
	t1.setdata(10, 20, 30);
	t2.setdata(20, 30, 40);
	t1.add(10, 20, 30);
	t2.add(20, 30, 40);
	getch();
	return 0;

}

---------------------------------------------------------------------------------------------------------------------------- -
#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
	int h, m, s;
public:
	void setdata(int x, int y, int z)
	{
		h = x;
		m = y;
		s = z;
	}

	void show()
	{
		cout << h << ":" << m << ":" << s << endl;//end of line
	}

	complex add(complex A)
	{
		complex f;
		f.s = s + A.s;
		f.m = f.s / 60;
		f.s = f.s % 60;
		f.m = f.m + m + A.m;
		f.h = f.m / 60;
		f.m = f.m % 60;
		f.h = f.h + h + A.h;
		return f;
	}
};

int main()
{
	complex c1, c2, c3;
	c1.setdata(10, 20, 30);
	c2.setdata(20, 30, 40);
	c1.show();
	c2.show();
	c3 = c1.add(c2);
	c3.show();
	getch();
	return 0;
}
----------------------------------------------------------------------------------------------------------------------------------------------------
complex add(complex c)
{
	complex f;
	//		f.s=s+c.s;
	//		f.m=m+c.m;
	//		f.h=h+c.h;
	f.s = (s + c.s) % 60;
	f.m = ((s + c.s) / 60 + m + c.m) % 60;
	f.h = ((s + c.s) / 60 + m + c.m) / 60 + c.h + h;
	return f;
}