//9_function overloading
#include<iostream.h>
#include<stdio.h>
#include<conio.h>


class shape
{
	int x, y;
public:
	void area(int x)
	{
		printf("%d\n", x * x);
	}

	void area(int x, int y)
	{
		printf("%d\n", x * y);
	}

	void area(int x, float pi)
	{
		printf("%f\n", pi * x * x);
	}
};


void main()
{
	shape ob;
	ob.area(10);
	ob.area(10, 20);
	ob.area(10, 3.14f);

	getch();
}
/* what is this???? idiot!
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
int area(int);
int area(int,int);
float area(int,float);

void main()
{
int x,y;
cout<<"enter x"<<endl;
scanf("%d",&x);
printf("enter y\n");
cin>>y;

cout<<"area of square:"<<area(x);
cout<<endl;
printf("area of rect.:%d\n",area(x,y));
printf("area of circle:%f\n",area(x,3.14f));
getch();
}

int area(int x)
{
	return (x*x);
}

int area(int x,int y)
{
	return (x*y);
}

float area(int x,float pi)
{
	return (pi*x*x);
}
*/

#include<iostream>
using namespace std;

class shape
	public:
{	int x, y;
int area(int x)
{
	return x * x;
}


int area(int x, int y)
{
	return x * y;
}


float area(float x)
{
	return 3.14f * x * x;
}
};

int main()
{
	shape x;
	cout << x.area(10) << endl;
	cout << x.area(10, 20) << endl;
	cout << x.area(10.0f) << endl;

	return 25;
}