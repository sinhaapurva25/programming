//exchange arrays
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int n,i,*a,*b,*x,*y;
	printf("enter the length of array ");
	scanf("%d",&n);

	a=(int*)malloc(n*sizeof(int));
	x=a;
	b=(int*)malloc(n*sizeof(int));
	y=b;

	printf("enter array a\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",a++);
	}

	printf("enter array b\n");
	for(i=0;i<n;i++)
	{
			scanf("%d",b++);
	}


	//array swapping
	a=x;
	b=y;
	for(i=0;i<n;i++)
	{
		*a=*a+*b;
		*b=*a-*b;
		*a=*a-*b;
		a++;
		b++;
	}
	a=x;
	b=y;


	//printing array
printf("after exchanging\n");
	printf("array a:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*a);
		a++;
	}

	printf("array b:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*b);
		b++;
	}

getch();
}


