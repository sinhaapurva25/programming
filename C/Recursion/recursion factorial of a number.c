/*
recursion factorial of a number
*/
#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
int n;
printf("enter a no.");
scanf("%d",&n);
printf("factorial=%d",fact(n));
getch();
}

int fact(int d)
{
if(d<=1)
return 1;
else
return d*fact(d-1);
}

