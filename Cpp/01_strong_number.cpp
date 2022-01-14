#include<iostream>
#include<conio.h>
using namespace std;
void strong(int);

int main(void)
{
	int num;
	cout << "enter num\n";
	cin >> num;
	strong(num);
	getch();
	return 0;
}

void strong(int num)
{
	int i, n, s, f, d;
	n = num;
	s = 0;

	while (n != 0)
	{
		f = 1;
		d = n % 10;
		for (i = 1; i <= d; i++)
			f = f * i;
		s = s + f;
		n = n / 10;
	}

	if (s == num)
		cout << "strong number";
	else
		cout << "not strong number";
}
