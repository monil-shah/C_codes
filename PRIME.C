#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,t=0;
	clrscr();
	printf("Enter value of i: ");
	scanf("%d",&i);
	for(j=2;j<=i;j++)
	{

		if(i/j>=j && i%j==0)
		{
		t++;
		}
	}
	if(t>0)
	{
		printf("Entered value is not prime");
	}
	else
	{
		printf("Entered value is prime");
	}
	getch();
	}