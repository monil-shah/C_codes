#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	printf("Enter value of i: ");
	scanf("%d",&i );
	for(;i!=0;)
	{
	j=i%10;
	printf("%d",j);
	i=i/10;
	}
	getch();
	}

