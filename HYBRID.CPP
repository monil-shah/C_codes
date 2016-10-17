/*
	multiple & hybrid inheritance
	-----------------------------

		personal

	student		faculty

		cdac
*/

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class personal
{
	public:
		char name[15],add[15],ph[15];
	public:
		void p_entry();
		void p_view();
};
class student : public personal
{
	public:
		char course[15],duration[15];
		float fees,dis,total;
	public:
		void s_entry();
		void s_view();
};
class faculty : public personal
{
	public:
		float salary,hra,ta,da,pf,it,gross,net;
	public:
		void f_entry();
		void f_view();
};
class cdac : public student, public faculty
{
	public:
		void entry();
		void view();
};
void personal :: p_entry()
{
	cout<<"Enter name: ";
	cin>>name;
	cout<<"Enter add: ";
	cin>>add;
	cout<<"Enter phno: ";
	cin>>ph;
}
void personal :: p_view()
{
	cout<<"Name : "<<name<<endl;
	cout<<"Add  : "<<add<<endl;
	cout<<"Ph_no: "<<ph<<endl;
}
void student :: s_entry()
{
	p_entry();
	cout<<"Enter course: ";
	cin>>course;
	cout<<"Enter duration: ";
	cin>>duration;
	cout<<"Enter fees: ";
	cin>>fees;
	dis=fees*0.05;
	total=fees-dis;
}
void student :: s_view()
{
	p_view();
	cout<<"Course: "<<course<<endl;
	cout<<"Duration: "<<duration<<endl;
	cout<<"Fees: "<<fees<<endl;
	cout<<"dis: "<<dis<<endl;
	cout<<"total: "<<total<<endl;
}
void faculty :: f_entry()
{
	p_entry();
	cout<<"Enter salary: ";
	cin>>salary;
	hra=salary*0.5;
	da=salary*0.25;
	ta=salary*0.05;
	it=salary*0.025;
	gross=salary+hra+da+ta;
	net=gross-it;
}
void faculty :: f_view()
{
	p_view();
	cout<<"Salary: "<<salary<<endl;
	cout<<"Gross: "<<gross<<endl;
	cout<<"net: "<<net<<endl;
}
void cdac :: entry()
{
	int i;
	cout<<"\n\t 1. student";
	cout<<"\n\t 2. faculty";
	cout<<"\n\t 3. main menu";

	cout<<"\n\t Select Option: ";
	cin>>i;

	switch(i)
	{
		case 1:
			s_entry();
			break;
		case 2:
			f_entry();
			break;
		case 3:
			cout<<"back to main menu";
			getch();
			break;
	}
}
void cdac :: view()
{
	int i;
	cout<<"\n\t 1. student";
	cout<<"\n\t 2. faculty";
	cout<<"\n\t 3. main menu";

	cout<<"\n\t Select Option: ";
	cin>>i;

	switch(i)
	{
		case 1:
			s_view();
			break;
		case 2:
			f_view();
			break;
		case 3:
			cout<<"back to main menu";
			getch();
			break;
	}
}
void main()
{
	cdac s;
	int j;
	cout<<"\n\t 1. Entry";
	cout<<"\n\t 2. view";
	cout<<"\n\t 3. Exit";

	cout<<"\n\t Select Option: ";
	cin>>j;

	switch(j)
	{
		case 1:
			s.entry();
			break;
		case 2:
			s.view();
			break;
		case 3:
			exit(0);

	}
getch();
}






