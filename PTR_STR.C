// string with pointer
#include<stdio.h>
#include<conio.h>
void main()
{
	char *name;
	clrscr();
	puts("enter name: ");
	gets(name);
	puts(name);
	printf(" %d",strlen(name));
getch();
}