#include<stdio.h>
#include<conio.h>
void main()
{
float i,j,k,m=0;
clrscr();
printf("enter the value of k: ");
scanf("%f",&k);
for(i=1;i<=k;i++)
{
m=m+(1/i);
}
printf("\n\t sum of series=%f",m);
getch();
}