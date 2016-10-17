#include<stdio.h>
#include<conio.h>
void main()
{
int i[5],j,k;
clrscr();
printf("enter the position: ");
scanf("%d",k);
for(j=0;j<5;j++)
	{
	printf("%d",j);
	scanf("%d",&i[j]);
	}
	printf("Enter position: ");
	scanf("%d",&j);
	printf(" %d",i[j]);

	getch();
	}


