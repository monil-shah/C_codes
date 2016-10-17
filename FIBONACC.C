#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,m=0,n=1;
clrscr();
printf("enter the value of k: " );
scanf("%d",&k);
printf(" %d",m);
printf(" %d",n);
for(i=1;i<=k;i++)
{
     i=m+n;
printf(" %d",i);
m=n;
n=i;
}
getch();
}

