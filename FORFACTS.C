#include<stdio.h>
#include<conio.h>
void main()
{
float i,k,m=0,n=1;
clrscr();
printf("enter the value of k: ");
scanf("%f",&k);
for(i=1;i<=k;i++)
{
n=n*i;
m=m+(1/n);
}
printf("\n\t sum=%f",m,n);
getch();
}