/*

	array
	-----

array is a group of same datatype.


	i[5];

	[0][1][2][3][4]

*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i[5],j;
	clrscr();
	for(j=0;j<5;j++)
	{
		printf("enter no[%d]: ",j);
		scanf("%d",&i[j]);
	}
	for(j=0;j<5;j++)
	{
		printf(" %d",i[j]);
	}
getch();
}
