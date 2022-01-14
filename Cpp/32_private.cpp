//32_private
//9/3/18
#include<iostream>
using namespace std;
class A
{
	int x;
	//BY DEFAULT THE CLASS BECOMES PRIVATE
	void show()
	{
		cout << "bari jabo\n" << x << endl;
	}
};

int main()
{
	A ob;
	ob.show();
}



