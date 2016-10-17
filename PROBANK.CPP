#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class Bank
{       public:
	int i;
	char name[15],card[15];
	actual()
	{
		i=25000;
	}
	~actual()
	public:

	void b_entry();
	void b_view();
}
void Bank :: b_entry()
{
	cout<<"Enter name: ";
	cin>>name;
	cout<<"Enter type of card: ";
	cin>>card;
}
