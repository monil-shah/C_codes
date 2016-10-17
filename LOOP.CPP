/*
	loop:

	1) while
	2) do while
	3) for
*/
#include<iostream.h>
#include<conio.h>
void main()
{
	int i,j=0;
	clrscr();
	cout<<"\nWhile\n";
	i=1;
	while(i<=100)
	{
		cout<<" "<<i;
		i++;
	}
	cout<<"\ndo While\n";
	i=1;
	do
	{
		cout<<" "<<i;
		j+=i;
		i++;
	}
	while(i<=100);
	cout<<"\t"<<j;
	cout<<"\nfor\n";
	for(i=0;i<=100;i++)
	{
		if(i%5==0 && i%7!=0)
		cout<<" "<<i;
	}
getch();
}
