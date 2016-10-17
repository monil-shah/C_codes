#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class person
{
	public:
		char name[15],code[15];
	public:
		void p_entry();
		void p_view();
};
class admin : public person
{
	public:
		int exp;
	public:
		void a_entry();
		void a_view();
};
class account
{
	public:
		float pay;
	public:
		void ac_entry();
		void ac_view();
};
class employee : public admin,public account
{
	public:
		void entry();
		void view();
};
void person :: p_entry()
{
	cout<<"Enter name: "<<endl;
	cin>>name;
	cout<<"Enter Code: "<<endl;
	cin>>code;
}
void person :: p_view()
{
	cout<<"Name : "<<name<<endl;
	cout<<"Code : "<<code<<endl;
}
void admin :: a_entry()
{
	p_entry();
	cout<<"Enter Experince of Employee: "<<endl;
	cin>>exp;
}
void admin :: a_view()
{
	p_view();
	cout<<"Experince of Employee : "<<exp<<endl;
}
void account :: ac_entry()
{
	cout<<"Enter pay: "<<endl;
	cin>>pay;
}
void account :: ac_view()
{
	cout<<"Pay : "<<pay<<endl;
}
void employee :: entry()
{
	a_entry();
	ac_entry();
}
void employee :: view()
{
	a_view();
	ac_view();
}
void main()
{
	employee e;
	clrscr();
	e.entry();
	e.view();
	getch();
}
