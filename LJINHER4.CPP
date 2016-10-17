#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class student
{
	public:
		char id_no[5];
	public:
		void input();
		void output();
};
class marks
{
	public:
		char sub[15];
		int mark;
	public:
		void put();
		void get();
};
class result  : public marks
{
	public:
		int total;
	public:
		void entry();
		void view();
};
void student :: input()
{
	cout<<"Enter id_no: "<<endl;
	cin>>id_no;

}
void student :: output()
{
	cout<<"id_no : "<<id_no<<endl;
}
void marks :: put()
{

	cout<<"Enter Subject: ";
	cin>>sub;
	cout<<"Enter Marks: ";
	cin>>mark;

}
void marks :: get()
{

	cout<<"Subject: "<<sub<<endl;
	cout<<"Mark: "<<mark<<endl;

}
void result :: entry()
{
	total=0+mark;

}
void result :: view()
{
	cout<<"total : "<<total<<endl;
}
/*void employee :: entry()
{
	a_entry();
	ac_entry();
}
void employee :: view()
{
	a_view();
	ac_view();
} */
void main()
{
	student s;
	marks e[10];
	result r;
	int j=0;
	clrscr();
	s.input();
	s.output();
	for(j=0;j<6;j++)
	{
	e[j].put();
	}
	for(j=0;j<6;j++)
	{
	e[j].get();
	}
	r.view();
	getch();
}
