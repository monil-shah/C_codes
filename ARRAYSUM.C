#include<stdio.h>
#include<conio.h>
void main()
{
int i[5],l,j[5],m,k[10],p,n;
clrscr();
for(l=0;l<5;l++)
{
printf("%d",l);
scanf("%d",&i[l]);
}
for(m=0;m<5;m++)
{
printf("%d",m);
scanf("%d",j[m]);
}
for(p=0;p<10;p++)
{
k[p]=i[l];
i[l]=j[m];
k[p]=i[l];


printf("%d",k[p]);
}
getch();
}