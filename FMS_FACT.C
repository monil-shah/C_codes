#include<stdio.h>
#include<conio.h>
void main()
{

	int i,j,m=1;
	FILE *p;
	clrscr();
	printf("enter value of i: ");
	scanf("%d",&i);
	for(j=1;j<=i;j++)
	{
		m=m*j;
	}
	printf("%d!=%d",i,m);
	p=fopen("d:\\bhupesh\\monil\\ms4.doc","a");
	fprintf(p," %d %d",i,m);
	fclose(p);
	fopen("d:\\bhupesh\\monil\\ms4.doc","r");
	while(feof(p)==0)
	{
		fscanf(p,"%d%d",&i,&m);
		printf("\n\t %d %d",i,m);
	}
	fclose(p);
	getch();
	}

