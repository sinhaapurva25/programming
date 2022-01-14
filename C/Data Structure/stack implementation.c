// stack implementation

#include<stdio.h>
#include<stdlib.h>
#define max 5
void push(int);
void pop();
void Disp();
int x[max];
int top=-1;
void main()
{
	int choice,no;
	while(1)
	{
		printf("\n1. Push\n");
		printf("\n2. Pop\n");
		printf("\n3. Display\n");
		printf("\n4. Exit\n");
		printf("\nEnter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
					printf("Enter a number");
					scanf("%d",&no);
					push(no);
					break;
			case 2:
					pop();
					break;
			case 3:
					Disp();
					break;
			case 4:
					exit(0);
     //exit(0); returns 0: not using exit while keep the block in infinite loop
					break;
			default:
					printf("\nyou boka\n");

		}

	}
}

void push(int data)
{
	if(top+1==max)
	{
		printf("\nOverflow ! no space stack is full\n");
	}
	else
	{
		top++;
		x[top]=data;
	}
}


void pop()
{
	if(top==-1)
	{
		printf("\nStack is Empty !! Underflow\n");
	}
	else
	{
		printf("\nDeleted element is : %d\n",x[top]);
		top--;
	}
}

void Disp()
{
	int i;
	if(top==-1)
	{
		printf("\nStack is Empty !! Underflow\n");
	}
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("%d\n",x[i]);
		}
	}
}



