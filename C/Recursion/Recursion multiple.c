//Recursion
#include<stdio.h>
#include<conio.h>
void show(int);
void main()
{
show(5);
getch();
}
void show(int x)
{
if(x<0)
return;
else
{
	printf("hello ");
	show(x-1);
}
}
--------------------------------------------------------------------------------------------------------------------------------
//Recursion basics
/* print all numbers from 1 to n,
print even odd seperately
print sum of natural numbers
print factorial
*/
#include<stdio.h>
#include<conio.h>

void natural(int,int);
void oddEven(int ,int );
int add(int);
int fact(int);
void main()
{
int n;
printf("enter a number ");
scanf("%d",&n);

printf("all natural nos. from 1 to %d:\n",n);
natural(1,n);

printf("\nodd even list:\n");
oddEven(1,n);

printf("\nsum of these numbers: %d\n",add(n));

printf("\nfactorial of %d = %d\n",n,fact(n));

getch();
}

void natural(int i,int n)
{
if (i<=n)
   {
   printf("%d\n",i);
   natural(i+1,n);
   }
else
return;
}

void oddEven(int i,int n)
{
if (i<=n)
   {
   if(i%2==0)
    printf("%d is even\n",i);
   else
    printf("%d is odd\n",i);
   oddEven(i+1,n);
   }
else
return;
}

int add (int n)
{
if(n<=0)
return 0;
else
return (n+add(n-1));
}

int fact(int n)
{
if(n<=0)
return 1;
else
return n*fact(n-1);
}

--------------------------------------------------------------------------------------------------------------------------------
//Recursion_mul table range
#include<stdio.h>
#include<conio.h>
void mul(int,int,int);
void main()
{
int n,r1,r2;
printf("enter a no. ");
scanf("%d",&n);
printf("enter range\n");
scanf("%d%d",&r1,&r2);
mul(r1,n,r2);
getch();
}

void mul(r1,n,r2)
{
if(r1<=r2)
 {
	printf("%d*%d=%d\n",n,r1,n*r1);
	mul(r1+1,n,r2);
 }
else
return;

}
--------------------------------------------------------------------------------------------------------------------------------
/*
no. of digits
reverse
palindrome
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

int noOfDigits(int,int);
int reverse(int,int);

void main()
{
int n,m,d;
printf("enter a number ");
scanf("%d",&n);
m=n;
d=noOfDigits(0,m);
printf("\nno. of digits in %d = %d\n",n,d);

printf("\nreverse of %d = %d\n",n,reverse(d,n));
if(reverse(d,n)==n)
	printf("palindrome");
else
	printf("not palindrome");


getch();
}

int noOfDigits(c,m)
{

if (m!=0)
   {
   m%10;
   c++;
   m=m/10;
   noOfDigits(c,m);
   }
else
 return c;
}
int reverse(d,n)
{
while(d!=0)
	{
    return (n%10)*pow(10,d-1)+reverse(d-1,n/10);
   }
}


--------------------------------------------------------------------------------------------------------------------------------
//sum of natural numbers from 1 to n
#include<stdio.h>
#include<conio.h>
int sum(int);
void main()
{
int n;
printf("enter a no.");
scanf("%d",&n);
printf("sum=%d",sum(n));
getch();
}

int sum(int d)
{
if(d<=0)
return 0;
/*
if(d<=1)
return 1;

*/
else
return d+sum(d-1);
}

