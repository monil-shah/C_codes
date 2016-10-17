#include<iostream.h>
#include<conio.h>
class railway
{
	public:
		char train[15],time[15],number[15];
	public:
		void r_entry();
		void r_view();
};
class passenger : public railway
{
	public:
		char name[5][15],age[5][3],gender[5][2],origin[15],destinationplace[15],
		     date[15];


		int j,k,m,total;

	public:
		void p_entry();
		void p_view();
};
class general : public passenger
{
	public:
		int no;
	public:
		void g_entry();
		void g_view();
};
void railway :: r_entry()
{
	cout<<"train to be boarded: "<<endl;
	cin>>train;
	cout<<"Train timmings: "<<endl;
	cin>>time;
	cout<<"train number: "<<endl;
	cin>>number;
}
void railway :: r_view()
{
	cout<<"Train: "<<train<<endl;
	cout<<"Train time: "<<time<<endl;
	cout<<"Train number: "<<number<<endl;
}
void passenger :: p_entry()
{
	cout<<"Enter no of passengers: "<<endl;
	cin>>k;
	r_entry();
	for(j=0;j<k;j++)
	{
	cout<<"name: "<<endl;
	cin>>name[j];
	cout<<"gender: "<<endl;
	cin>>gender[j];
	cout<<"age: "<<endl;
	cin>>age[j];
	}
	cout<<"select class: "<<endl;
	cout<<"	1:first ac"<<endl;
	cout<<"	2:second tier ac"<<endl;
	cout<<"	3:third tier ac"<<endl;
	cout<<"	4:second class"<<endl;
	cout<<"	5:general"<<endl;
	cin>>m;
	if(m==1)
	{

		total=1000*k;
	}
	else if(m==2)
	{
		total=750*k;
	}
	else if(m==3)
	{
		total=500*k;
	}
	else if(m==4)
	{
		total=250*k;
	}
	else
	{
		total=50*k;
	}
	cout<<"date of departure(dd/mm/yyyy): "<<endl;
	cin>>date;
	cout<<"oringin place: "<<endl;
	cin>>origin;
	cout<<"destination place: "<<endl;
	cin>>destinationplace;
}
void passenger :: p_view()
{
	r_view();
	for(j=0;j<k;j++)
	{
	cout<<"\nname: "<<name[j]<<endl;
	cout<<"gender: "<<gender[j]<<endl;
	cout<<"age: "<<age[j]<<endl;
	}
	if(m==1)
	{
		cout<<"selected class is first ac"<<endl;
	}
	else if(m==2)
	{
		cout<<"selected class is two tier ac"<<endl;
	}
	else if(m==3)
	{
		cout<<"selected class is three tier ac"<<endl;
	}

	else if(m==4)
	{
		cout<<"selected class is second class"<<endl;
	}
	else
	{
		cout<<"selected class is general"<<endl;
	}
	cout<<"Total fare: "<<total<<endl;
	cout<<"date of departure: "<<date<<endl;
	cout<<"oringin place: "<<origin<<endl;
	cout<<"destination place: "<<destinationplace<<endl;
}
void general :: g_entry()
{
	cout<<"enter no: "<<endl;
	cin>>no;
	p_entry();
}
void general :: g_view()
{
	cout<<"no: "<<no<<endl;
	p_view();
}
void main()
{
	general g;
	clrscr();
	g.g_entry();
	g.g_view();
	getch();
}
