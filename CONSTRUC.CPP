/*
	constructor
	-----------

constructor is a special function which initialize the member variable

- constructor name and class name must be same
- it does not have any return type
- it called it self when objct of class is defined
- it is not allowed in array and pointer

destructor
----------

to destroy the constructor

it called when program is terminate

~
*/

#include<iostream.h>
#include<conio.h>
class student
{
	public:
		int no;
		student() // default constructor without argument
		{
			no=5;
			cout<<"\n\t First constructor is called..."<<no;
		}
		student(int); // constructor overloading
		student(int a,int b)
		{
			cout<<"\n\t third constructor is called...."<<a+b;
		}
		student(student &t)
		{
			no=t.no;
			cout<<"\n\t Copy constructor is called...."<<no;
		}
		~student()
		{
			cout<<"\n\t Destructor is called...";
		}

};
student :: student(int i)
{
	cout<<"\n\t Second constructor is called......"<<i;
}
void main()
{
	clrscr();
	student s,s1(10),s2(15,20),s3(s),s4(s3);

//	cout<<"\n\t no="<<s.no;
getch();
}