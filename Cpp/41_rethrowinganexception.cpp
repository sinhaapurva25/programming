//41_rae
//14/3/18
//rethrowing an exception pg: 391
#include<iostream>
using namespace std;
void divide(double x, double y)
{
	cout << "inside function" << endl;
	try
	{
		if (y == 0.0)
			throw y;
		else cout << "division=" << x / y << endl;
	}

	catch (double)
	{
		cout << "caught double inside function" << endl;
	}
}

int main()
{
	cout << "inside main" << endl;
	try
	{
		divide(10.5, 2.0);
		divide(20.0, 0.0);
	}

	catch (double)
	{
		cout << "caught double inside main" << endl;
	}
	cout << "end of main" << endl;
}
