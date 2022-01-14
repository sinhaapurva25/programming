//34_protected
//9/3/18
#include<iostream>
using namespace std;
class A
{
protected:
	void show()
	{
		cout << "bari jabo\n" << endl;
	}
};

/*class B:public A
{

}*/

int main()
{
	A ob;
	ob.show();

}
