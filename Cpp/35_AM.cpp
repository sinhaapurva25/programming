//35_AM
//Access Modifier Concept, diff. b/w protected and private 
//9/3/18
#include<iostream>
using namespace std;
class A
{
protected:
	int x;
	/*only member variables can be accessed in 'protected' mode,
	that too, only when in case of inheritance
	*/
public:
	void show()
	{
		cout << x << endl;
	}
};
class B :public A
{
	int y;
public:
	void set(int a, int b)
	{
		x = a;
		y = b;
	}

	void view()
	{
		cout << y << endl;
	}

	void multi()
	{
		cout << (x * y) << endl;
	}
};

int main()
{
	B ob;
	ob.set(10, 20);
	ob.show();
	ob.view();
	ob.multi();

}
