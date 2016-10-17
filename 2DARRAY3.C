#include<stdio.h>
#include<conio.h>
void main()
{
int i[3][3],j,k,a[3][3],d[3][3],m=0;
clrscr();
for(j=0;j<3;j++)
{
	for(k=0;k<3;k++)
	{
	printf("Enter no [%d][%d]: ",j,k);
	scanf("%d",&i[j][k]);
	}
	}
	for(j=0;j<3;j++)
	{
	for(k=0;k<3;k++)
	{
	printf("%d",i[j][k]);
	}
	printf("\n");
	}
       for(j=0;j<3;j++)
{
	for(k=0;k<3;k++)
	{
	printf("Enter no [%d][%d]: ",j,k);
	scanf("%d",&a[j][k]);
	}
	}
	for(j=0;j<3;j++)
	{
	for(k=0;k<3;k++)
	{
	printf("%d",a[j][k]);
	}
	printf("\n");
	}
	 for(j=0;j<3;j++)
	{

	for(k=0;k<3;k++)
	{
	d[j][k]=0;
	for(m=0;m<3;m++)
	{
		d[j][k]+=i[j][m]*a[m][k];
	}
	printf("\t%d",d[j][k]);
	}
	printf("\n");
	}
getch();
}
