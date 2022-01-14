//8_static concept
#include<iostream.h>
#include<stdio.h>
#include<conio.h>

class college
{
	static int nos;
	public:
	void incr()
	{
		nos++;
	}

	void show()
	{
		cout<<nos<<endl;
			printf("%d",nos);
	}
};

int college::nos;//this means it is initialized with 0
void main()
{
	college d1,d2,d3;
	d1.incr();
	d1.incr();
	d2.incr();
	d3.show();
   getch();

}
-------------------------------------------------------------------------------------------------------------------------------
#include<iostream>
#include<conio.h>
using namespace std;

class static_concept
{
	
	public:
	static int s;
	void show()
	{
		cout << "int:" << s << endl;
	}
};

int static_concept::s = 10;
int main()
{
	static_concept s1,s2;
	s1.show();
	s2.s++;
	s1.show();
	s2.s++;
	s1.s++;
	s2.show();
	return 0;
}