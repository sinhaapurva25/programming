//Pointer call by reference

/*
CBV,CBR difference
swapping using function
*/

#include<conio.h>
#include<stdio.h>
void swap(int*,int*);
void main()
{
int x,y;
printf("enter two numbers\n");
scanf("%d%d",&x,&y);
	printf("\nbefore swap \n");
	printf("x = %d  ",x);
	printf("y = %d\n",y);

swap(&x,&y);


printf("\nafter  swap in main \n");
	printf("x = %d  ",x);
	printf("y = %d\n",y);
getch();
}

void swap(int *x,int *y) //address can only be stored in pointer type variable
{
	*x=*x+*y;
	*y=*x-*y;
	*x=*x-*y;
	printf("\nafter swap \n");
	printf("x = %d ",*x);
	printf("y = %d\n",*y);
}

/*
Call by value

#include<conio.h>
#include<stdio.h>
void swap(int,int);
void main()
{
int x,y;
printf("enter two numbers\n");
scanf("%d%d",&x,&y);
	printf("\nbefore swap \n");
	printf("x = %d  ",x);
	printf("y = %d\n",y);

swap(x,y);


printf("\nafter  swap in main \n");
	printf("x = %d  ",x);
	printf("y = %d\n",y);
getch();
}

void swap(int x,int y)//x and y are two variables diff. from the x and y in main()
{
	x=x+y;
	y=x-y;
	x=x-y;
	printf("\nafter swap \n");
	printf("x = %d ",x);
	printf("y = %d\n",y);
}

*/

