#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
	int i=20,j=5,m;
	char k;
	clrscr();
	i=i++ + j;
	j=++j+10;
	printf("\n%d",i);
	printf("\n%d",j);
	printf("Enter k: ");
	scanf("%c",&k);
	for(k='a';k<='z';)
	{

	};
	printf("%c",toupper(k));


	getch();
}
