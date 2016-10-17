#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,m=0,k=0;
clrscr();
printf("enter n: ");
scanf("%d",&n);
i=1;
while(i<=n)
{
scanf("%d",&j);
if(j%2==0)
{
m++;
}
else
{
k++;
}
i++;
}
printf("even=%d",m);
printf("\n\t odd=%d",k);
getch();
}
