#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,m=1;
clrscr();
printf("enter the value of k: ");
scanf("%d",&k);
i=1;
while(i<=k)
{
m=m*i;
i++;
}
printf("factorial=%d",m);
getch();
}