//40_cae
//14/3/18
//catching all exceptions pg: 390
#include<iostream>
using namespace std;
void test(int x)
{
	try
	{
		if (x == 0) throw x;
		if (x == -1) throw 'x';
		if (x == 1) throw 1.0;

		cout << "2 or 9" << endl;// when this line doesn't exist, why does throw exist
	}

	catch (...)
	{
		cout << "caught an exception" << endl;
	}
}

int main()
{
	cout << "testing generic catch" << endl;
	test(-1);
	test(0);
	test(1);
	test(2);
	test(9);
}
