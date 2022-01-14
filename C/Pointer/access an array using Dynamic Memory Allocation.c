//access an array using Dynamic Memory Allocation
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int n,*a,*b,i;
printf("enter the length of array");
scanf("%d",&n);

a=(int*)malloc(n*sizeof(int));
printf("enter the array");
b=a;

for(i=0;i<n;i++)
{
	scanf("%d",a);
	a++;
}

for(i=0;i<n;i++)
{
	printf("%d",*b);
	b++;
}
getch();
}

