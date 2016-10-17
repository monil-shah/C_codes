/*
	multi level inheritance
	-----------------------

	personal
	    |
	faculty
	   |
	sheet
*/

#include<iostream.h>
#include<conio.h>
class personal
{
	public:
		char name[15],add[15],ph[15];
	public:
		void p_entry();
		void p_view();
};
class faculty : public personal
{
	public:
		float salary,hra,ta,da,pf,it,gross,net;
	public:
		void f_entry();
		void f_view();
};
class sheet : public faculty
{
	public:
		int no;
	public:
		void s_entry();
		void s_view();
};
void personal :: p_entry()
{
	cout<<"enter name: ";
	cin>>name;
	cout<<"Enter address: ";
	cin>>add;
	cout<<"Enter ph no: ";
	cin>>ph;
}
void personal :: p_view()
{
	cout<<"name: "<<name<<endl;
	cout<<"address: "<<add<<endl;
	cout<<"ph no: "<<ph<<endl;
}
void faculty :: f_entry()
{
	p_entry();
	cout<<"Enter salary: ";
	cin>>salary;
	hra=salary*0.05;
	ta=salary*0.04;
	da=salary*0.25;
	gross=salary+hra+da+ta;
	pf=gross*0.09;
	it=gross*0.03;
}
void faculty :: f_view()
{
	p_view();
	cout<<"salary: "<<salary<<endl
	    <<"hra: "<<hra<<endl
	    <<"ta: "<<ta<<endl
	    <<"da: "<<da<<endl
	    <<"gross: "<<gross<<endl
	    <<"pf: "<<pf<<endl
	    <<"it: "<<it<<endl;
}
void sheet :: s_entry()
{
	cout<<"enter no: ";
	cin>>no;
	f_entry();
}
void sheet :: s_view()
{
	cout<<"no: "<<no<<endl;
	f_view();
}
void main()
{
	sheet s;
	clrscr();
	s.s_entry();
	s.s_view();
getch();
}

