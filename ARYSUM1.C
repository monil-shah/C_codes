#include<stdio.h>
#include<conio.h>
void main()
{
int i[5],l,j[5],m,k[10],p,n;
clrscr();
for(p=0;p<5;p++)
{
printf("no %d=",p);
scanf("%d",&i[p]);
}
for(p=0;p<5;p++)
{
printf("no %d=",p);
scanf("%d",&j[p]);
}
l=0;
m=0;
for(p=0;p<10;p++)
{
if(i[p]%2==0)
{
	k[p]=i[p];

	printf("\n%d",k[p]);
	}
	else
	{
	k[p]=i[p];
	printf("\n%d",i[p]);
	}
	if(j[p]%2==0)
	{
	k[p]=j[p];
	printf("\n%d",k[p]);
	}
	else
	{
	k[p]=j[p];
	printf("\n%d",j[p]);
	}}
getch();
}