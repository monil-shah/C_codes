// object with pointer
#include<iostream.h>
#include<conio.h>
class student
{
	public:
		char name[15];
		int pri,qty;
	public:
		void entry();
		void view();
};
void student :: entry()
{
	cin>>name>>pri>>qty;
}
void student :: view()
{
	cout<<name<<"\t"<<pri<<"\t"<<qty<<"\t"<<pri*qty<<endl;
}
void main()
{
	student *s,std[3];
	clrscr();
	cout<<"\nname\tprice\tqty\n";
	for(s=std;s<std+3;s++)
	{
		s->entry();
	}
	cout<<"\nname\tprice\tqty\ttotal\n";
	for(s=std;s<std+3;s++)
	{
		s->view();
	}
getch();
}





