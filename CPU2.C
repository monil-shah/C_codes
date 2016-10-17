#include<stdio.h>
#include<conio.h>
#include<ctype.h>

void main()
{
	int k,m=0;
	clrscr();
	printf("Enter k: ");
	scanf("%d",&k);
	for(k='A';k<='Z';k++)
	{
	 k=m;
		m=m+32;
	}
	printf("%c",k);
	getch();
	}


