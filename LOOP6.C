#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k;
clrscr();
for(i=1;i<=5;i++)
{
for(j=i;j>=1;j--)
{
for(k=i;k<=5;k++)
{
printf("%d",k);
}
}
printf("\n");
}
getch();
}