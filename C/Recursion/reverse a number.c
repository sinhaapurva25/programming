/*
reverse a number
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int noOfDigits(int,int);
int reverse(int);

int sum=0;

void main()
{
int x,r;
scanf("%d",&x);
r=reverse(x);
printf("reverse = %d",r);

getch();
}

int reverse(int x)
{
if(x==0)
return sum;
else
sum=sum*10+(x%10);
return reverse(x/10);
}


