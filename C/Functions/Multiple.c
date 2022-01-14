//Factorial_NRHA
#include<stdio.h>
#include<conio.h>
void factorial(int);
void main()
{
	int n;
   printf("enter a number ");
	scanf("%d",&n);

	factorial(n);
   getch();

}

void factorial(int n)
{
   int i,s;
   s=1;
	for(i=1;i<=n;i++)
   	{
      	s=s*i;
      }
   printf("factorial of %d is %d ",n,s);
   return;
}
--------------------------------------------------------------------------------------------------------------------------------
//Factorial_NRNA
#include<stdio.h>
#include<conio.h>
void factorial();
void main()
{
	factorial();
   getch();
}

void factorial()
{
	int i,n,s;
   printf("enter a number");
	scanf("%d",&n);

   s=1;

   for(i=1;i<=n;i++)
   	{
       s=s*i;
      }

	printf("factorial of %d is %d ",n,s);
}


--------------------------------------------------------------------------------------------------------------------------------
//prime numbers_from array_NRNA
#include<conio.h>
#include<stdio.h>
void primeArray();


void main()
{
	primeArray();
getch();
}

void primeArray()
{
int a[50],n,i,c,j;
printf("enter the length of array ");
scanf("%d",&n);
printf("enter %d array elements\n",n);

for(i=0;i<n;i++)
	{
   scanf("%d",&a[i]);
   }

for(i=0;i<n;i++)
	{
   c=0;
   for(j=1;j<=a[i];j++)
   	{
      if (a[i]%j==0)
      c++;
      }
   if(c==2)
   printf("element %d = %d is a prime number\n",i+1,a[i]);
   }
}
--------------------------------------------------------------------------------------------------------------------------------
//prime_armstrong_perfect
#include<stdio.h>
#include<conio.h>
#include<math.h>

int prime(int);
int armstrong(int);
int perfect(int);
void main()
{
  int n;
  printf("enter a number ");
  scanf("%d",&n);

  (prime(n)==1)?printf("prime number\n"):printf("not prime number\n");

  (armstrong(n)==1)?printf("armstrong number\n"):printf("not armstrong number\n");

  (perfect(n)==1)?printf("perfect number\n"):printf("not perfect number\n");



getch();
}

int prime(int x)
{
 int i,c;
 c=0;

 for(i=1;i<=x;i++)
 	{
		if(x%i==0)
      c++;
   }
   if(c==2)
   return 1;
   else
   return 0;
}
int armstrong(int x)
{
 int m,c,p,s;
 m=x,c=0,s=0;

 while(m!=0)
 	{
   	m%10;
      c++;
      m=m/10;
	}
   m=x;
 while(m!=0)
 	{
      p=m%10;
      s=s+pow(p,c);
      m=m/10;
   }

   if(s==x)
   return 1;
   else
   return 0;
}
int perfect(int x)
{
	int m,s,p;
   m=x,s=0;
   while(m!=0)
   	{
      	p=m%10;
         s=s+p;
         m=m/10;
      }
   if(s==x)
   return 1;
   else
   return 0;
}

--------------------------------------------------------------------------------------------------------------------------------
//prime_strong_armstrong_perfect_within range_using function
#include<stdio.h>
#include<conio.h>
#include<math.h>

void prime(int,int);
void strong(int,int);
void armstrong(int,int);
void perfect(int,int);

void main()
{
	int x,y;
	printf("enter start and end values\n");
	scanf("%d %d",&x,&y);

	prime(x,y);
	strong(x,y);
	armstrong(x,y);
   perfect(x,y);


getch();
}


void prime(int x,int y)
{
	printf("\nprime numbers in range %d to %d are:\n",x,y);
   int i,j,c,flag;
   flag=0;
	for(i=x;i<=y;i++)
   	{
       c=0;
       for(j=2;j<=i/2;j++)
       	{
          	if(i%j==0)
            	{
            		c=1;
                  break;
                }
        }
      	if(c==0)
        {
			flag=1;
			printf("\n%d",i);
	    }
    }
   if(flag==0)
   printf("none\n");
return;
}

void strong(int x,int y)
{
printf("\nstrong numbers in range %d to %d are:\n",x,y);
   int i,n,j,s,f,p,flag;
   flag=0;
	for(i=x;i<=y;i++)
   	{
       n=i;
       s=0;
       while(n!=0)
       	{
         f=1;
         p=n%10;

         for(j=1;j<=p;j++)
            f=f*j;
         s=s+f;
         n=n/10;
         }

       if(s==i)
	   	{
				flag=1;
				printf("\n%d",i);
	   	}
     }
   if(flag==0)
   printf("none\n");
return;
}

void armstrong(int x,int y)
{
   printf("\narmstrong number in the range %d to %d are:\n",x,y);
   int i,c,n,p,flag,s;
   flag=0;
	for(i=x;i<=y;i++)
   	{
       c=0,n=i;
       while(n!=0)
       	{
          n%10;
          c++;
          n=n/10;
        }
      s=0,n=i;
       while(n!=0)
       	{
          p=n%10;
          s=s+pow(p,c);
          n=n/10;
        }
       if(s==i)
       	{
         	flag=1;
       		printf("\n%d",i);
        }
    }
   if(flag==0)
   printf("none\n");
return;
}


void perfect(int x,int y)//a perfect number is the sum of it's factors
{
   printf("\nperfect number in the range %d to %d are:\n",x,y);
   int i,j,s,flag;
   flag=0;
	for(i=x;i<=y;i++)
   {
    s=0;
    	for(j=1;j<i;j++)
    		{
        		if(i%j == 0)
        		s=s+j;
    		}
    	if(s==i)
    		{
    			flag=1;
    			printf("\n%d",i);
    		}
   }

   if(flag==0)
   printf("none\n");
return;
}
--------------------------------------------------------------------------------------------------------------------------------
//strong_number_NRNA
#include<stdio.h>
#include<conio.h>
void sumOfDigits();
void main()
{
	sumOfDigits();

	getch();
}

void sumOfDigits()
{
int n,m,s,p,k,i;
printf("enter a number ");
scanf("%d",&n);
m=n,s=0;

	while(m!=0)
	{
		p=1;
		k=m%10;
			for(i=1;i<=k;i++)
			p=p*i;
		s=s+p;
		m=m/10;
	}

	if(s==n)
	printf("krishnamurthy number");
	else
	printf("not krishnamurthy number");
}
--------------------------------------------------------------------------------------------------------------------------------
//Sum_of_digits_NRNA
#include<stdio.h>
#include<conio.h>
void sumOfDigits();
void main()
	{
   sumOfDigits();
   getch();
   }

void sumOfDigits()
{
int n,m,s,k;
printf("enter a number ");
scanf("%d",&n);
m=n;
s=0;

	while(m!=0)
   	{
      k=m%10;
      s=s+k;
      m=m/10;
      }

   printf("sum of digits of the number %d is %d",n,s);
}
--------------------------------------------------------------------------------------------------------------------------------
//



