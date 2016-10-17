#include<stdio.h>
#include<conio.h>
void main()
{
int i[5],j,k;
clrscr();
printf("enter the no: ");
scanf("%d",&k);
for(j=0;j<5;j++)
{
printf("%d",j);
scanf("%d",&i[j]);
}
for(j=0;j<5;j++)
{
if(i[k]!=i[j])
{
printf("%d",i[j]);
}
}
getch();
}