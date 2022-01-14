//copy one array to another using DMA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int n,*a,*b,i;
printf("enter the length of array");
scanf("%d",&n);

a=(int*)malloc(n*sizeof(int));
b=a;

//array input and copying
printf("enter the array");
for(i=0;i<n;i++)
{
	scanf("%d",a);

	a++;

}

//array printing
for(i=0;i<n;i++)
{
	printf("%d\t",*b);
	b++;
}
getch();
}