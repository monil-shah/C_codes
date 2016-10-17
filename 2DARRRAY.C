#include<stdio.h>
#include<conio.h>
void main()
{
int i[3][3],j,k,p=0,m=0;
clrscr();
for(j=0;j<3;j++)
{
	for(k=0;k<3;k++)
	{
	printf("Enter no[%d][%d]:",j,k);
	scanf("%d",&i[j][k]);
	}

}
for(j=0;j<3;j++)
{
	for(k=0;k<3;k++)
	{
	printf("%d",i[j][k]);
	p=p+i[j][k];
	m=m+i[k][j];
	}
	printf("\tsum of row=%d",p);
	printf("\t\t sum of column=%d",m);
	printf("\n");
}

getch();
}
