//18_operator_overloading
//6/3/18
#include<iostream>
using namespace std;
class code
{
	int id;
public:
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

	void operator-()
	{
		id = -id;
	}
};

int main()
{
	code ob(10);
	ob.show();
	//ob.ulta();
	-ob;
	ob.show();
}

/*
#include<iostream>
using namespace std;
class code
{
	int id;
	public:
		code()
		{
			id=0;
		}
		code(int x)
		{
		id=x;
		}

		void show()
		{
		cout<<id<<endl;
		}

		void operator-()
		{
			id=-id;
		}
};

int main()
{
	code ob;
	ob.show();
	//ob.ulta();
	-ob(10); //legit, you'll get an error. Code has no operator provided
	ob.show();
}
*/