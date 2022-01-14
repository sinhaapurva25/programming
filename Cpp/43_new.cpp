//43_new
//15/3/18
#include<iostream.h>
void main()
{
	int* a;
	a = new int();
	cin >> *a;
	cout << *a;
}

/*
In C:
int *a;
a=(int*)malloc(n*sizeof(int));
*/
