#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float i,j,k,m=0,n=1,x;
clrscr();
printf("enter the value of k: ");
scanf("%d",&k);
for(i=1;i<=k;i++)
{
n=n*i;
m=m+(pow(x,i)/n);
}
printf("\n\t sum=%d",m,n,pow(x,i));
getch();
}