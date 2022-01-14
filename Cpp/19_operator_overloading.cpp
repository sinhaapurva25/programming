//19_operator_overloading
//6/3/18
//some more
#include<iostream>
using namespace std;
class code
{
	int id;
public:

	code()
	{
		id = 1;
	}
	code(int x)
	{
		id = x;
	}

	void show()
	{
		cout << id << endl;
	}

	/*void ulta()
	{
		id=-id;
	}*/

	code operator-()
	{
		code t;
		t.id = -id;
		return t;
	}
};

int main()
{
	code ob(10);
	code t;
	ob.show();
	//ob.ulta();
	t = -ob;
	ob.show();
	t.show();

}
