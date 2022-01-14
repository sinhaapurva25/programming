/*
reverse an array
*/
#include<stdio.h>
#include<stdlib.h>

void main()
{
	int n,*ptr,i,*t;
	printf("enter the size of array ");
	scanf("%d",&n);

	ptr=(int*)malloc(n*sizeof(int));
	t=(int*)malloc(n*sizeof(int));

printf("enter the array:\n");
	for(i=0;i<n;i++)
		{
		scanf("%d",ptr++);
		}
ptr--;
printf("reverse array:\n");

	for(i=n-1;i>=0;i--)
		{
          *t=*ptr;
          printf("%d\t",*t);
		  t++;
		  ptr--;
	    }
}
/*
#include<stdio.h>
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
}
*/
