/*
binary search
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(void)
{
	int n,i,x[20],num,beg,end,flag,mid;

	printf("size of array? ");
	scanf("%d",&n);
	beg=0;
	end=n-1;

	printf("enter the arrray:\n");
	for(i=0;i<n;i++)
		{
			scanf("%d",&x[i]);
		}

	printf("enter an element to search arrray: ");
	scanf("%d",&num);

	flag=0;

while(beg<=end)
	{
	 mid=(beg+end)/2;
	 if(x[mid]==num)
		 {
			printf("element found at index = %d",mid);
			flag=1;
			break;
		 }

	 else if(x[mid]<num)
		beg=mid+1;

	 else
		end=mid-1;

	}
if(flag==0)
	printf("element not found");

getch();
}
--------------------------------------------------------------------------------------------------------------------------------
Linear search is the one that you normally did �search the element in an array�
