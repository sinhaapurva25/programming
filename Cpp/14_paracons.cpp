//14_paracons
//23/2/18
#include<iostream>
using namespace std;
class cons
{
	int x;
public:
	cons()
	{
		x = 0;
	}
	cons(int a)
	{
		x = a;
	}

	void disp()
	{
		cout << x << endl;
	}
};


int main()
{
	cons ob(14);
	//ob.set(10);
	ob.disp();

	cons tr;// no parameterized con or default cons
	tr = cons(456);
	tr.disp();
}
------------------------------------------------------------------------------------------------------------------------------ -
#include<iostream>
using namespace std;
class cons
{
	int x;
public:
	cons()
	{
		//=a;
	};
	display()
	{
		cout << x;
	}

};

int main()
{
	cons ob;
	ob.display();
	return 0;
}