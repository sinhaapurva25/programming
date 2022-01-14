//12_swap using friend fcn.
//23/2/18
#include<iostream>
using namespace std;
class B; class A;


class A
{
	int x, y;
public:
	void set(int a, int b)
	{
		x = a;
		y = b;
	}
	void disp()
	{
		cout << x << endl << y << endl;
	}
	friend void swap(A&, B&);
};

class B
{
	int x, y;
public:
	void set(int a, int b)
	{
		x = a;
		y = b;
	}
	void disp()
	{
		cout << x << endl << y << endl;
	}
	friend void swap(A&, B&);
};

void swap(A& t, B& r)
{

	t.x = t.x + r.x;
	r.x = t.x - r.x;
	t.x = t.x - r.x;

	t.y = t.y + r.y;
	r.y = t.y - r.y;
	t.y = t.y - r.y;
}

int main()
{
	A oa;
	B ob;
	oa.set(25, 4);
	oa.disp();
	ob.set(21, 6);
	ob.disp();
	swap(oa, ob);
	oa.disp();
	ob.disp();
	return 0;
}