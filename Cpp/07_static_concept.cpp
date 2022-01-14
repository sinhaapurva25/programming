//7_static concept
#include<iostream.h>
#include<conio.h>
class college
{
	static int nos;
public:
	void incr()
	{
		nos++;
	}

	void show()
	{
		cout << nos << endl;
	}
};

int college::nos = 10; //static
void main()
{
	college d1, d2, d3;
	d1.incr();
	d1.incr();
	d2.incr();
	d3.show();
	getch();
}