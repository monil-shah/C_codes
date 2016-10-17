/*
	FMS
	---

File Management System


file:-

notepad    - .txt
word       - .doc
excel      - .xls
powerpoint - .ppt

fopen - to create(open) the file
fclose - to close the file
fprintf - to print in the file
fscanf - to scan on the file

feof - end of file

mode:-
"w" - write
"r" - read
"a" - append

FILE *fp;

*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	FILE *p;
	clrscr();
	printf("enter value of i: ");
	scanf("%d",&i);
	printf("enter value of j: ");
	scanf("%d",&j);
	p=fopen("d:\\bhupesh\\monil\\monil.doc","a");
	fprintf(p," %d %d",i,j);
	fclose(p);
	p=fopen("d:\\bhupesh\\monil\\monil.doc","r");
	while(feof(p)==0)
	{
		fscanf(p,"%d%d",&i,&j);
		printf(" %d %d",i,j);
	}
	fclose(p);
getch();
}



