#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,p;
	clrscr();
	printf("Enter value of i: ");
	scanf("%d",&i);
	printf("Enter value of j: ");
	scanf("%d",&j);
	i=(i+j);
	j=i-j;
	i=i-j;
	p=i;
	printf("\n\tAddress of i:%u ",p);
	printf("\n\tValue of i:%d",*p);
	p=p-1;
	printf("\n\tAddress of j:%u ",p);
	printf("\n\tValue of j:%d",*p);
	getch();
	}
