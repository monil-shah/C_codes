#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,m=0;
clrscr();
printf("enter the limit: ");
scanf("%d",k);
i=1;
while(i<=k)
{
scanf("%d",j);
if(j>m)
{
m=j;
}
i++;
}
getch();
}
