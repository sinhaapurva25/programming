/*
dma pointer using structure

*/


#include<stdio.h>
#include<stdlib.h>
struct student
{
	int a,b;
};
typedef struct student STU;
void main()
{
	STU *ptr;
	ptr=(STU*)malloc(sizeof(STU));
	scanf("%d",&(*ptr).a);
	scanf("%d",&ptr->b);

	printf("%d\n",ptr);
//	printf("%d\n",&st);
  //	printf("%d\n",&st.a);
	printf("%d\n",ptr->a);
	printf("%d\n",(*ptr).b);



}

