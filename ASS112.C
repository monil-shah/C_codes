#include<stdio.h>
#include<conio.h>
struct employee
{
	char name[15],designation[15];
	float hra,da,ta,it,total;
	float basicsalary;
}e;
void getdata()
{
	printf("\n\tEnter name         : ");
	scanf("%s",e.name);
	printf("\n\tEnter designation  : ");
	scanf("%s",e.designation);
	printf("\n\tEnter basic salary : ");
	scanf("%f",&e.basicsalary);
}
void calcnetsal()
{
       e.hra=(e.basicsalary)*(0.5);
	e.da=(e.basicsalary)*(0.25);
	e.ta=(e.basicsalary)*(0.05);
	e.it=(e.basicsalary)*(0.025);
	e.total=(e.basicsalary)+(e.hra)+(e.da)+(e.ta)-(e.it);
}
void putdata()
{
	printf("\n\t Name       =%s",e.name);
	printf("\n\t Designation=%s",e.designation);
	printf("\n\t Basicsalary=%f",e.basicsalary);
	printf("\n\t total      =%f",e.total);
}
void main()
{
		clrscr();
		getdata();
		calcnetsal();
		putdata();
	getch();
	}




