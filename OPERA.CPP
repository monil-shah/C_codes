// operator overloading

#include<iostream.h>
#include<conio.h>
class student
{
	public:
		int i,j,k;
		void entry();
		void view();
		void operator -();

};
void student :: entry()
{
	i=25;
	j=50;
	k=75;
}
void student :: view()
{
	cout<<"\n\t i="<<i;
	cout<<"\n\t j="<<j;
	cout<<"\n\t k="<<k;
	i=-i;
	j=j;
	k=-k;
}
void student :: operator -()
{
	i=i;
	j=+j;
	k=-k;
}

void main()
{
	clrscr();
	student s;
	cout<<"\n\t Simple Data:\n";
	s.entry();
	s.view();
	s.operator -();
	cout<<"\n\t after +() opertor:\n";
	s.view();
getch();
}


