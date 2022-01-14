//6_object time
#include<iostream.h>
#include<conio.h>
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

void main()
{
	complex c1, c2, c3;
	c1.setdata(10, 20, 30);
	c2.setdata(20, 30, 40);
	c1.show();
	c2.show();
	c3 = c1.add(c2);
	c3.show();
	getch();
}