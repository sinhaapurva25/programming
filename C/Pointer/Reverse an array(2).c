/*
reverse an array
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int n,*ptr,i,*b;
	printf("enter the size of array ");
	scanf("%d",&n);

	ptr=(int*)malloc(n*sizeof(int));

printf("enter the array:\n");
	for(i=0;i<n;i++)
		{
		scanf("%d",ptr);
		  ptr++;
		}
ptr--;
printf("reverse array:\n");

	for(i=n-1;i>=0;i--)
		{
		printf("%d\t",*ptr);
		  ptr--;
	    }

getch();
}


