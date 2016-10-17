#include<stdio.h>
#include<conio.h>
void main()
{
int i[3][3],j,k,a[3][3],b,c,p=0,m=0,l=0;
clrscr();
for(j=0;j<3;j++)
{
	for(k=0;k<3;k++)
	{
	printf("Enter no:",j,k);
	scanf("%d",&i[j][k]);
	}

}
for(j=0;j<3;j++)
{
	for(k=0;k<3;k++)
	{
	printf("%d",i[j][k]);
	p=p+i[j][k];
	}
	printf("\n");
}
for(b=0;b<3;b++)
{
	for(c=0;c<3;c++)
	{
	printf("Enter no:",b,c);
	scanf("%d",&a[b][c]);
	}

}
for(b=0;b<3;b++)
{
	for(c=0;c<3;c++)
	{
	printf("%d",a[b][c]);
	m=m+a[b][c];
	}
	printf("\n");
}
l=p+m;
printf("%d",l);
getch();
}
