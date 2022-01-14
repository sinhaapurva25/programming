//27_VBC
//Virtual Base Class(Diamond problem)
//7/3/18
#include<iostream>
using namespace std;

class A
{
public:
	void show()
	{
		cout << "show" << endl;
	}
};

class B :virtual public A //you can write virtual this way
{
public:
	void view()
	{
		cout << "view" << endl;
	}
};

class C :public virtual A //or this way
{
public:
	void put()
	{
		cout << "put" << endl;
	}
};

class D :public B, public C
{
public:
	void disp()
	{
		cout << "disp" << endl;
	}
};

int main()
{
	D ob;
	ob.show();
}

/*public virtual or virtual public is
a filter which shuts off the ambiguity
that whether class D will take path D->B->A or D->C->A
*/

