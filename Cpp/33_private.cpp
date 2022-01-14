//33_private
//9/3/18
#include<iostream>
using namespace std;
class A
{
	int x;
public:
	void show()
	{
		cout << "bari jabo\n" << x << endl; //this will run, x will be some garbage value
	}
};

int main()
{
	A ob;
	ob.show();
	cout << ob.x; //x is private, you'll get an error
}

