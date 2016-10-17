#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,m=0;
clrscr();
printf("enter limit: ");
scanf("%d",&n);
i=1;
while(i<=n)
{

//	printf(" %d",i);

	scanf("%d",&j);
	 if(j>m)
	 {
		m=j;
	 }
	 i++;
}

printf(" %d",m);

getch();
}