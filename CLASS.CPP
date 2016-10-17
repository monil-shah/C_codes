/*
	class : bunch of related data
	object : is a unique medium which bind data with reterence class
*/
#include<iostream.h>
#include<conio.h>
class student   // class name
{
	public:
		int no; // member variable
}s; // global object
void main()
{
	student s,s1,s2;// local object
	clrscr();
	cout<<"Enter no: ";
	cin>>s.no;  //5
	cout<<"Enter no: ";
	cin>>s1.no;  //10
	s.no=25;
	s1=s;
	s1.no=50;
	s2=s1=s;
	cout<<"\n\t no: "<<s.no;
	cout<<"\n\t no1: "<<s1.no;
	cout<<"\n\t no2: "<<s2.no;
getch();
}

