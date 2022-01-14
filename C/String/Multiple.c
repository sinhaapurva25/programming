//first occurence of a character in a string
#include<stdio.h>
#include<conio.h>
void main()
{

char a[50],c;
int i,flag,k;

printf("enter a string ");
gets(a);

printf("enter a character ");
scanf("%c",&c);

i=0;
flag=0;
	while(a[i]!='\0')
		{
       if(a[i]==c)
       {
       k=i;
       flag=1;
       break;
       }
       i++;
      }
if(flag==1)
 printf("character %c occurs at %d",c,k+1);
else
 printf("character %c doesn't occur");

getch();
}

--------------------------------------------------------------------------------------------------------------------------------
//maximum&minimun occurring character in a string
#include<stdio.h>
#include<conio.h>
void main()
{
char a[50],t;
int i,len,j,c,max,min,flag;
printf("enter a string ");
i=0;
do
	{
    scanf("%c",&a[i]);
    i++;
   }while(a[i-1]!='\n');
a[i-1]='\0';
len=i-1;
//printf("%d",len);

//maximum
max=0;
for(i=0;i<len-i;i++)
	{
    c=1;
   for(j=i+1;j<len-1;j++)
   	{
       if(a[i]==a[j])
       c++;
      }
   if((c>max)&&(c!=max))
   	{
   		max=c;
   		t=a[i];
         flag=1;
   	}
   if(c==max)
   	{
      	flag=0;
      }
   }


if(flag==1)
 printf("frequency of max character %c = %d\n",t,max);
else
 {
 	printf("no character occurs max times or ");
   printf("more than two characters have the same max freq.\n");
 }


//minimum
min=len;
for(i=0;i<len-i;i++)
	{
   c=1;
   for(j=i+1;j<len-1;j++)
   	{
       if(a[i]==a[j])
       {
       a[j]=' ';
       c++;
       }
      }
   if((c<min)&&(c!=max))
   	{
   		min=c;
   		t=a[i];
         flag=1;
   	}
   if(c==min)
   	{
        flag=0;
      }
   }


 if (flag==1)
 printf("frequency of min character %c = %d",t,min);
 else
 {
 	printf("no character occurs min times or ");
   printf("more than two characters have the same min freq.\n");
 }



getch();

}

--------------------------------------------------------------------------------------------------------------------------------
//merge two strings (with space in bw)
#include<stdio.h>
#include<conio.h>
void main()
{

	char a[20];
	char c[50];
	char b[20];
	int i,len1,len2,k;
	printf("enter first string\n");

	i=0;
	do
	{
		scanf("%c",&a[i]);
		i++;
	}while(a[i-1]!='\n');

	a[i-1]='\0';
	len1=i-1;

	printf("enter second string\n");
	i=0;
	do
	{
		scanf("%c",&b[i]);
		i++;
	}while(b[i-1]!='\n');

	b[i-1]='\0';
	len2=i-1;



	for(i=0;i<len1;i++)
	c[i]=a[i];

	c[i]=' ';

	k=0;
	for(i=len1+1;i<=len1+len2+1;i++)
	{
	  c[i]=b[k];
	  k++;
	}
	
	printf("%s",c);
	
getch();
}
-------------------------------------------------------------------------------------------------------------------------
//no of words in a string
#include<stdio.h>
#include<conio.h>
void main()
{

	char a[50];
	int i,word;

	printf("enter a string\n");

	i=0;
   word=0;

	do
	{
		scanf("%c",&a[i]);
      if((a[i])==' ')
      word++;
		i++;

	}while(a[i-1]!='\n');

	a[i-1]='\0';

   printf("total length of characters=%d\n",i-1);
   printf("total number of words=%d\n",word+1);
getch();
}
-------------------------------------------------------------------------------------------------------------------------
//number of digits_alphabts_sc_in_string
#include<stdio.h>
#include<conio.h>
void main()
{

	char a[50];
	int i,digit,alphabet,specialCharacter;

	printf("enter a string\n");

	i=0;
   digit=0;
   alphabet=0;
   specialCharacter=0;
	do
	{
		scanf("%c",&a[i]);
      if(a[i]>=48 && a[i]<=57)
       digit++;
      else if((int(a[i])>=65 && int(a[i])<=90) || (int(a[i])>=97 && int(a[i])<=122))
       alphabet++;
      else
       specialCharacter++;
		i++;
	}while(a[i-1]!='\n');

	a[i-1]='\0';

   printf("total length of character=%d\n",i-1);
   printf("total number of digits=%d\n",digit);
   printf("total number of alphabet=%d\n",alphabet);
   printf("total number of specialCharacter=%d\n",specialCharacter);


getch();
}
--------------------------------------------------------------------------------------------------------------------------------
//palindrome string
#include<stdio.h>
#include<conio.h>
void main()
{

	char a[50],b[50];
	int i,j,len,flag;

	printf("enter a string\n");

	i=0;


	do
	{
		scanf("%c",&a[i]);

		i++;

	}while(a[i-1]!='\n');
 a[i-1]='\0';
 len=i-1;
 //reversing the string
 for(j=0;j<len;j++)
 	{
   	b[j]=a[i-2];
      /*
      if you need to print the reverse array
      printf("%c",b[j]);
      */

      i--;
   }

 flag=0;
 for(i=0;i<len;i++)
 	{
    if(a[i]!=b[i])
    	flag=-1;
    break;
	}

 if(flag==-1)
 printf("not palidrome");
 else
 printf("palidrome");
getch();
}

--------------------------------------------------------------------------------------------------------------------------------
//reverse_of_a_string
#include<stdio.h>
#include<conio.h>
void main()
{
printf("ENTER A STRING:\t");
char a[50];
int i=0,j;
do
{
scanf("%c",&a[i]);
i++;
}
while(a[i-1]!='\n');
a[i-1]='\0';
//length of string
//printf("%d",i-1);

printf("REVERSE OF THE STRING:\t");
for(j=i-2;j>=0;j--)
	{
	printf("%c",a[j]);
	}

getch();
}


/*this logic is also right
#include<stdio.h>
#include<conio.h>
void main()
{

	char a[50],b[50];
	int i,j,len;

	printf("enter a string\n");

	i=0;


	do
	{
		scanf("%c",&a[i]);

		i++;

	}while(a[i-1]!='\n');
 a[i-1]='\0';
 len=i-1;

 for(j=0;j<len;j++)
 	{
   	b[j]=a[i-2];
      printf("%c",b[j]);
      i--;
   }
getch();
}


*/
--------------------------------------------------------------------------------------------------------------------------------
//search occurences of a character in a given string
#include<stdio.h>
#include<conio.h>
void main()
{
 char a[50],c;
 int i,j,b[50],flag;
 printf("enter a string ");
 gets(a);
 printf("enter a character ");
 scanf("%c",&c);
 flag=0,i=0,j=0;
 while(a[i]!='\0')
 	{
   if(a[i]==c)
   	{
      flag=1;
   	b[j]=i;
      j++;
      }
   i++;
   }

 if(flag==1)
 {
 printf("chacacter %c occurs at the following positions:\n",c);
 for(i=0;i<j;i++)
 printf("%d ",b[i]+1);
 }

 else
 printf("character %c doesn't occur",c);

getch();
}

 
--------------------------------------------------------------------------------------------------------------------------------//string scanning without using gets()
#include<stdio.h>
#include<conio.h>
void main()
{

char a[50];
int i=0;
do
{
scanf("%c",&a[i]);
i++;
}
while(a[i-1]!='\n');
a[i-1]='\0';
printf("%s",a);
getch();
}
--------------------------------------------------------------------------------------------------------------------------------
//#include<stdio.h>
#include<conio.h>
void main()
{
printf("enter string a containing only alphabets ");
char a[50];
int i,len;
//input string
i=0;
do
	{
	scanf("%c",&a[i]);
	i++;
	}while(a[i-1]!='\n');
a[i]='\0';
len=i-1;

for(i=0;i<len;i++)
		{
		if((int(a[i])>=65) && (int(a[i])<=90))
			a[i]=a[i]+32;

		else if((int(a[i])>=97) && (int(a[i])<=122))
			a[i]=a[i]-32;


		}
	printf("%s",a);




getch();
}
--------------------------------------------------------------------------------------------------------------------------------
//copy one string into another
#include<stdio.h>
#include<conio.h>
void main()
{
printf("enter string a: ");
char a[50],b[50];
int i;
//copying a[] into b[]
i=0;
do
	{
   scanf("%c",&a[i]);
   b[i]=a[i];
   i++;
   }while(a[i-1]!='\n');
a[i]='\0';



i=0;
printf("string b: ");
//printing b[]
do
	{
   printf("%c",b[i]);
   i++;
   }while(b[i-1]!='\n');
b[i]='\0';

getch();
}
--------------------------------------------------------------------------------------------------------------------------------
//