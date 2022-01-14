//23_this keyword
//7/3/18
#include<iostream>
using namespace std;
class A
{
	int x;
public:
	void set(int x)
	{
		/*x=x; this is an anomaly
		because the x can be either the
		argument or the one in the class
		'this' keyword means that the x here is the class member variable x
		*/
		//this is used to refer member variable of current instance
		this->x = x; // (*this).x=x;
	}

	void show()
	{
		cout << x << endl;
	}

};
int main()
{
	A ob;
	ob.set(15);
	ob.show();
}
