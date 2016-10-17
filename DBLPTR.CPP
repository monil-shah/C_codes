#include<iostream.h>
#include<conio.h>
void main()
{
	int no,*p,**ptr;
	clrscr();
	cout<<"Enter no: ";
	cin>>no;
	p=&no;
	cout<<"\n\t address of no: "<<(unsigned)p;
	cout<<"\n\t value of no: "<<*p;
	ptr=&p;
	cout<<"\n\t address of p: "<<(unsigned)ptr;
	cout<<"\n\t value of p: "<<**ptr;
getch();
}
