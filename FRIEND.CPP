// friend function : to access the private data (non member function)

#include<iostream.h>
#include<conio.h>
class discount;
class purchase
{
	char name[15];
	float price,total;
	int qty;
	public:
		void entry();
		void view();
		friend void data(purchase,discount);
};
class discount
{
	public:
		float dis;
		discount()
		{
			dis=0.05;
		}
		friend void data(purchase,discount);
};
void purchase :: entry()
{
	cout<<"enter name: ";
	cin>>name;
	cout<<"enter price: ";
	cin>>price;
	cout<<"enter qty: ";
	cin>>qty;
	total=price*qty;
}
void purchase :: view()
{
	cout<<"name: "<<name<<endl;
	cout<<"price: "<<price<<endl;
	cout<<"qty: "<<qty<<endl;
	cout<<"total: "<<total<<endl;
}
void data(purchase p,discount d)
{
	float net;
	net=p.total*d.dis;
	net=p.total-net;
	cout<<"\n\t Net amount after discount: "<<net;
}
void main()
{
	purchase p;
	discount d;
	clrscr();
	p.entry();
	p.view();
	data(p,d);
getch();
}