/*
    1
   12
  123
 1234
12345
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k;
clrscr();
for(i=1;i<=5;i++)
{
for(k=0;k<=4;k++)
{
printf(" ");
}
for(j=0;j<=i;j++)
{
printf("%d",j);
}
printf("\n");
}
getch();
}