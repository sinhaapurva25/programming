//30_sum of each row and columns of a matrix
#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10];
int r,c,s,i,j;
printf("enter row and column of the matrix\n");
scanf("%d %d",&r,&c);
printf("enter the matrix\n");
for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
		{
		scanf("%d",&a[i][j]);
		}
	}
printf("sum of rows\n");
for(i=0;i<r;i++)
	{
	s=0;
	printf("sum of row %d ",i);
	for(j=0;j<c;j++)
		{
		s=s+a[i][j];
		}
	printf("%d\n",s);
	}
printf("sum of columns\n");
for(j=0;j<c;j++)
	{
	s=0;
	printf("sum of column %d ",i);
	for(i=0;i<c;i++)
		{
		s=s+a[i][j];
		}
	printf("%d\n",s);
	}
getch();
}

