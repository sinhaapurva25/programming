//36_abstraction
#include<iostream>
using namespace std;
class A
{
public:
	virtual void show() = 0;// pure virtual function
	//virtual void show1()=0;// pure virtual function
	void view()
	{
		cout << "oop";
	}


};

class B :public A
{
public:
	void show()
	{
		cout << "fghg";
	}
};
int main()
{
	A* ob;
	B ok;

	ob = &ok;
	ob->show();


}
