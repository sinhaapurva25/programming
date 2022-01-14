//39_overloadingtemplates
//overloading template
//13/3/18
#include<iostream>
using namespace std;

template <class T>

void display(T x)
{
	cout << "template display:" << x << endl;
}
template<class T1, class T2>
void view(T1 x, T2 y)
{
	cout << x << "   " << y << endl;
}

void display(int x)
{
	cout << "explicit display:" << x << endl;
}

int main()
{
	display(100);
	display(12.34);
	display('A');
	display("apurva sinha");
	view(25, 96.36);
	view(25, 96);
}
