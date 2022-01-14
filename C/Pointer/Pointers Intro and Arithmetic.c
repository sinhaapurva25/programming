#include<stdio.h>
#include<conio.h>
int main()
{
int x,*p;
x=90;
p=&x;
printf("%d\n",p);//address of x
printf("%d\n",*p);//value of x
printf("%d\n",&p);//adress of ptr

//addition
int a,b,*m,*n;
m=&a;
n=&b;
printf("\nenter two numbers\n");
scanf("%d",m);
scanf("%d",n);
printf("%d\n",*m+*n);//sum of a and b

//swapping
printf("\nBefore swapping:\n");
printf("x=%d\ty=%d",*m,*n);
*m=*m+*n;
*n=*m-*n;
*m=*m-*n;
printf("\nAfter swappig:\n");
printf("x=%d\ty=%d",*m,*n);



getch();
}
--------------------------------------------------------------------------------------------------------------------------------
//Pointer Search an element in an array
#include<stdio.h>
#include<conio.h>
void main()
{
int n,num,*q,i,a[20];
printf("enter lenth of the array ");
scanf("%d",&n);
printf("enter the array\n");

for(i=0;i<n;i++)
	{
   q=&a[i];
   scanf("%d",q);
   }
printf("enter no. to search ");
scanf("%d",&num);
q=a;
for(i=0;i<n;i++)
	{
   if(*q==num)
   	{
       printf("element found = %d\n",*q);
       break;
      }
   q++;
   }
if(i==n)
printf("element not found ");

getch();
}
--------------------------------------------------------------------------------------------------------------------------------

