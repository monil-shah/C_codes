// udf with pointer

#include<stdio.h>
#include<conio.h>
void sum(int *,int *);
void main()
{
	int i,j,*a,*b;
	clrscr();
	a=&i;
	b=&j;
	printf("Enter value of i: ");
	scanf("%d",a);
	printf("enter value of j: ");
	scanf("%d",b);
	sum(a,b);
getch();
}
void sum(int *a,int *b)
{
	printf("\n\t sum=%d",*a+*b);
}