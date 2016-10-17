#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,m=1;
clrscr();
printf("enter the value of k: ");
scanf("%d",&k);
for(i=1;i<=k;i++)
{
m=m*i;
}
printf("\n\t factorial= %d",m);
getch();
}