//42_ttr
//14/3/18
//testing throw restrictions pg: 393
#include<iostream>
using namespace std;
void test(int x) throw(int, double)
{
	if (x == 0) throw x;
	else
		if (x == -1) throw 'x';
		else
			if (x == 1) throw 1.0;
	cout << "end of function block" << endl;
}

int main()
{
	cout << "testing throw restrictions" << endl;
	cout << "x==0" << endl;
	test(0);
	cout << "x==1" << endl;
	test(1);
	cout << "x==-1" << endl;
	test(-1);
	cout << "x==2" << endl;
	test(2);
}

