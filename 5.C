#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
clrscr();
printf("enter n: ");
scanf("%d",&n);
i=1;
while(i<=n)
{
printf("%d*%d=%d",i,j,i*j);
i--;
}
getch();
}




