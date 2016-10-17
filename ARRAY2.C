#include<stdio.h>
#include<conio.h>
void main()
{
int i[5],j;
clrscr();
for(j=0;j<5;j++)
{
printf("%d",j);
scanf("%d",&i[j]);
}
for(j=4;j>=0;j--)
{
printf("%d",i[j]);
}
getch();
}