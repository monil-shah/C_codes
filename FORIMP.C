#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k=1;
	clrscr();
	for(i=1;i<=5;i++)
	{
		if(i%2!=0)
		{
			for(j=1;j<=i;j++)
			{
			printf("%d",k);
			k++;
			}

		}
		else
		{        k=k+i-1;
			for(j=1;j<=i;j++)
			{
			printf("%d",k);
			k--;
			}
		k=k+i+1;
		}
		printf("\n");
	}
	getch();
	}
