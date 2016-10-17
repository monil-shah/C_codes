#include<stdio.h>
#include<conio.h>
void main()
{
int i[5],j,k=4;
clrscr();
for(j=0;j<5;j++)
{
	printf("%d",j);
	scanf("%d",&i[j]);
	}
for(j=0;j<5;j++)
{
	while(k>i[j])
	{
	k=i[j];
	k++;
	}

	}
	printf("%d",k);

getch();
}