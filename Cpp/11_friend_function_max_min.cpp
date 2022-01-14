//11_friend function max min
//23/2/18
#include<iostream>
using namespace std;
class B; class A;


class A
{
	int x;
public:
	void set(int a)
	{
		x = a;
	}
	void disp()
	{
		cout << x << endl;
	}
	friend void max(A, B);
};

class B
{

	int x;
public:
	void set(int a)
	{
		x = a;
	}
	void disp()
	{
		cout << x << endl;
	}

	friend void max(A, B);
};

void max(A t, B r)
{

	if (t.x > r.x)
		cout << t.x << " is greater";
	else
		cout << r.x << " is greater";
}

int main()
{
	A oa;
	B ob;
	oa.set(10);
	oa.disp();
	ob.set(20);
	ob.disp();
	max(oa, ob);
}