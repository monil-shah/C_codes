/*
	hirarchical inheritance
	-----------------------

		big bazaar
		    |
	|			|
 purchase			sell

	1. purchase
		1. entry
		2. view
		3. main menu
	2. sell
		1. entry
		2. view
		3. main menu
	3. exit

*/

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class big
{
	public:
		char name[15],cname[15],code[15],mdate[15];
	public:
		void entry();
		void view();
};
class purchase : public big
{
	public:
		float price,qty,total,dis,net;
	public:
		void p_entry();
		void p_view();
};
class sell : public big
{
	public:
		float price,qty,total,dis,net;
	public:
		void s_entry();
		void s_view();
};
void big :: entry()
{
	cout<<"enter name: ";
	cin>>name;
	cout<<"enter cname: ";
	cin>>cname;
	cout<<"enter code: ";
	cin>>code;
	cout<<"enter mdate: ";
	cin>>mdate;
}
void big :: view()
{
	cout<<"name: "<<name<<endl;
	cout<<"cname: "<<cname<<endl;
	cout<<"code: "<<code<<endl;
	cout<<"mdate: "<<mdate<<endl;
}
void purchase :: p_entry()
{
	entry();
	cout<<"enter price: ";
	cin>>price;
	cout<<"enter qty: ";
	cin>>qty;
	total=price*qty;
	dis=total*0.05;
	net=total-dis;
}
void purchase :: p_view()
{
	view();
	cout<<"price: "<<price<<endl;
	cout<<"qty: "<<qty<<endl;
	cout<<"total: "<<total<<endl;
	cout<<"discount: "<<dis<<endl;
	cout<<"net: "<<net<<endl;
}
void sell :: s_entry()
{
	entry();
	cout<<"enter price: ";
	cin>>price;
	cout<<"enter qty: ";
	cin>>qty;
	total=price*qty;
	dis=total*0.25;
	net=total-dis;
}
void sell :: s_view()
{
	view();
	cout<<"price: "<<price<<endl;
	cout<<"qty: "<<qty<<endl;
	cout<<"total: "<<total<<endl;
	cout<<"discount: "<<dis<<endl;
	cout<<"net: "<<net<<endl;
}
void main()
{
	purchase p[10];
	sell s[10];
	int i;
	do
	{
		clrscr();
		cout<<"\n\t 1. Purchase ";
		cout<<"\n\t 2. Sell";
		cout<<"\n\t 3. Exit";

		cout<<"\n\t Select Option: ";
		cin>>i;

		switch(i)
		{
			case 1:
				int a=0,b=0;
				do
				{
					clrscr();
					cout<<"\nÞÞÞ PurchaseÞÞÞ";
					cout<<"\n\t 1. entry";
					cout<<"\n\t 2. view";
					cout<<"\n\t 3. main menu....";

					cout<<"\n\t Select option: ";
					cin>>a;

					switch(a)
					{
						case 1:
							char c;
							do
							{
								clrscr();
								cout<<"\n\t Entry";
								cout<<"\n\t ððððð\n";
								p[b].p_entry();
								cout<<"\n\t Do you want to continue?(y/n): ";
								cin>>c;
								b++;
							}
							while(c=='y');
							break;

						case 2:
							for(int j=0;j<b;j++)
							{
								clrscr();
								cout<<"\n\t View";
								cout<<"\n\t ðððð\n";
								p[j].p_view();
								getch();
							}
							break;

						case 3:
							cout<<"\n\t Back to main menu...";
							getch();
							break;
					}
				}
				while(a!=3);
				break;
			case 2:
				int x=0,y=0;
				do
				{
					clrscr();
					cout<<"\nÞÞÞ SellÞÞÞ";
					cout<<"\n\t 1. entry";
					cout<<"\n\t 2. view";
					cout<<"\n\t 3. main menu....";

					cout<<"\n\t Select option: ";
					cin>>x;

					switch(x)
					{
						case 1:
							char c;
							do
							{
								clrscr();
								cout<<"\n\t Entry";
								cout<<"\n\t ððððð\n";
								s[y].s_entry();
								cout<<"\n\t Do you want to continue?(y/n): ";
								cin>>c;
								y++;
							}
							while(c=='y');
							break;

						case 2:
							for(int k=0;k<y;k++)
							{
								clrscr();
								cout<<"\n\t View";
								cout<<"\n\t ðððð\n";
								s[k].s_view();
								getch();
							}
							break;

						case 3:
							cout<<"\n\t Back to main menu...";
							getch();
							break;
					}
				}
				while(x!=3);
				break;

			case 3:
				exit(0);
		}
	}
	while(i<3);
getch();
}