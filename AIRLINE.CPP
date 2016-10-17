#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class airline
{
	public:
		char name[15],fname[15],num[15],date[15];
	public:
		void entry();
		void view();
};
class telephonic : public airline
{
	public:
		int p;
	public:
		void t_view();
};
class online : public airline
{
	public:
		char inquiry[15];
	public:
		void o_entry();
		void o_view();
};
class cash : public online
{
	public:
		void c_entry();
		void c_view();
};
class credit : public online
{
	public:
		char card[15],bank[15];
		float price,dis,total;
	public:
		void cr_entry();
		void cr_view();
};

void airline :: entry()
{
	cout<<"Enter name: ";
	cin>>name;
	cout<<"enter fname: ";
	cin>>fname;
	cout<<"enter number: ";
	cin>>num;
	cout<<"enter date: ";
	cin>>date;
}
void airline :: view()
{
	cout<<"name: "<<name<<endl;
	cout<<"fname: "<<fname<<endl;
	cout<<"number: "<<num<<endl;
	cout<<"date: "<<date<<endl;
}
void telephonic :: t_view()
{
	view();
	cout<<"Pay the net amount at counter 3"<<endl;
}
void online :: o_entry()
{
	entry();

}
void online :: o_view()
{
	view();
}
void cash :: c_entry()
{
	o_entry();
}
void cash :: c_view()
{
	o_view();
}
void credit :: cr_entry()
{
	o_entry();
	cout<<"Enter type of card: ";
	cin>>card;
	cout<<"Enter bank name: ";
	cin>>bank;
	cout<<"enter price: ";
	cin>>price;
	dis=price*0.05;
	total=price-dis;
}
void credit :: cr_view()
{
	o_view();
	cout<<"type of card: "<<card<<endl;
	cout<<"bank name   : "<<bank<<endl;
	cout<<"price       : "<<price<<endl;
	cout<<"discount    : "<<dis<<endl;
	cout<<"total       : "<<total<<endl;
}

void main()
{
	cash c;
	credit cr;
	telephonic t;
	int i;
	do
	{
		clrscr();
		cout<<"\n\t 1.telephone booking"<<endl;
		cout<<"\n\t 2.online booking"<<endl;
		cout<<"\n\t 3.exit"<<endl;
		cout<<"\n\t Select option: ";
		cin>>i;
		switch(i)
		{
			case 1:
				clrscr();
				t.entry();
				t.t_view();
				getch();
				break;
			case 2:
				int a=0,b=0;



					clrscr();
					cout<<"\n\t1.cash payment";
					cout<<"\n\t2.credit card payment";
					cout<<"\n\t3.mainmenu";
					cout<<"Select option: ";
					cin>>a;
					switch(a)
					{
						case 1:
							c.c_entry();
							c.c_view();
							cout<<"pay amount at counter 2"<<endl;
							getch();
							break;
						case 2:
							cr.cr_entry();
							cr.cr_view();
							getch();
							break;
						case 3:
							getch();
							break;
					  }


					break;
				case 3:
					exit(0);
				}
			}
			while(i<3);
			getch();
			}



