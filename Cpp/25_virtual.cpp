//25_virtual
//7/3/18
#include<iostream>
using namespace std;
class Aperson
{
public:
	virtual void show()
	{
		cout << "hello in A\n";
	}
};
class Bperson :public Aperson
{
public:
	void show()
	{
		cout << "hello in B\n";
	}
};

int main()
{
	Aperson* ptr;
	Bperson ob;
	Aperson ob1;

	ptr = &ob;
	ptr->show();

	ptr = &ob1;
	ptr->show();

}

/*
this gives an error

#include<iostream>
using namespace std;
class Aperson
{
	public:
		virtual void show()
		{
			cout<<"hello in A\n";
		}
};
class Bperson:public Aperson
{
	public:
		void show()
		{
			cout<<"hello in B\n";
		}

		void view()
		{
			cout<<"hello noo in B\n";
		}
};

int main()
{
	Aperson *ptr;
	Bperson ob;
	Aperson ob1;

	ptr=&ob;//upcasting
	ptr->show();
	ptr->view();

	ptr=&ob1;
	ptr->show();

}
*/
----------------------------------------------------------------------------------------------------------------------------------------------------
//25_virtual
//7/3/18
#include<iostream>
using namespace std;
class shape
{
public:
	virtual void show()
	{
	}
};
class rect : public shape
{
	int x, y;

public:
	rect()
	{
		x = 1, y = 1;
	}
	rect(int a, int b)
	{
		x = a;
		y = b;
	}
	void show()
	{
		cout << "rect area: x*y= " << x * y << endl;
	}
};

class circle : public shape
{
	int r;

public:
	circle()
	{
		r = 1;
	}
	circle(int radius)
	{
		r = radius;
	}
	void show()
	{
		cout << "circ area: 3.14*r*r= " << 3.14 * r * r << endl;
	}
};

int main()
{
	shape* ptr;
	rect r(10, 20);
	ptr = &r;
	r.show();

	circle c(10);
	ptr = &r;
	c.show();
}

