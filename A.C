#include<stdio.h>
#include<conio.h>
void main()
{
int i[5],j,k,l;
clrscr();
for(j=0;j<5;j++)
{
printf("%d",j);
scanf("%d",&i[j]);
}
for(j=0;j<5;j++)
{
for(k=j+1;k<5;k++)
{
if(i[j]<i[k])
{
l=i[k];
i[k]=i[j];
i[j]=l;
}}}
for(j=0;j<5;j++)
{
printf("%d",i[j]);
}
getch();
}

