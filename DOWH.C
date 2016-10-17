#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k=0,m=0;
clrscr();
i=1;
do
{
if(i%3==0 && i%6!=0)
{
printf("\n%d",i);
k++;
}
else
{
m++;
}
i++;
}
while(i<=100);
printf("\n\tnos divisible by 3 and not divisible by 6=%d",k);
printf("\n\tremaining values=%d",m);
getch();
}
