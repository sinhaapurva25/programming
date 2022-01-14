//31_constructors in defined class
//3/7/18
#include<iostream>
using namespace std;

class aplha
{
	int x;
public:
	alpha(int i)
	{
		x = i;
		cout << "alpha initialized\n";
	}

	void show_x(void)
	{
		cout << "x=" << x << "\n";
	}
};

class beta
{
	float y;
public:
	beta(float j)
	{
		y = j;
		cout << "beta initialized\n";
	}

	void show_y(void)
	{
		cout << "y=" << y << "\n";
	}
};

class gamma :public beta, public gamma
{
	int m, n;
public:
	gamma(int a, float b, int c, int d) :alpha(a) : beta(b)
	{
		m = c;
		n = d;
		cout << "gamma initialized\n";
	}

	void show_mn(void)
	{
		cout << "m=" << m << "\n";
		cout << "n=" << n << "\n";
	}
};

int main()
{
	gamma g(5, 10.75, 20, 30);
	cout << "\n";
	g.show_x();
	g.show_y();
	g.show_mn();
	return 0;
}
