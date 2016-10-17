#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

class personal
{
	public:
		char name[15],country[15],speciality[15];
	public:
		void m_entry();
		void m_view();
};
class ipl : public personal
{
	public:
		char baseprice[15],teamjoined[15],c[15],m[15];
		int innings,runs,
		sixes,no;
		float strikerate;
	public:
		void i_entry();
		void i_view();
};
void personal :: m_entry()
{
	cout<<"Enter player name: "<<endl;
	cin>>name;
	cout<<"Enter country: "<<endl;
	cin>>country;
	cout<<"Enter speciality: "<<endl;
	cin>>speciality;
}
void personal :: m_view()
{
	cout<<"Name of player: "<<name<<endl;
	cout<<"Country: "<<country<<endl;
	cout<<"Speciality: "<<speciality<<endl;
}
void ipl :: i_entry()
{
	cout<<"Enter no: "<<endl;
	cin>>no;
	m_entry();
	cout<<"Enter baseprice: "<<endl;
	cin>>baseprice;
	cout<<"Enter teamjoined: "<<endl;
	cin>>teamjoined;
	cout<<"Enter innings: "<<endl;
	cin>>innings;
	cout<<"Enter runs: "<<endl;
	cin>>runs;
	cout<<"Enter sixes: "<<endl;
	cin>>sixes;
	if(strcmp(country,"india")==0)
	{
	cout<<"player of auction?: (y/n)"<<endl;
	cin>>c;
	}
	if(strcmp(c,"n")==0)
	{
	cout<<"Ranji team: "<<endl;
	cin>>m;
	}
	cout<<"Strikerate: "<<endl;
	cin>>strikerate;

}
void ipl :: i_view()
{
	cout<<"no: "<<no<<endl;
	m_view();
	cout<<"Baseprice: "<<baseprice<<endl;
	cout<<"teamjoined: "<<teamjoined<<endl;
	cout<<"innings: "<<innings<<endl;
	cout<<"runs: "<<runs<<endl;
	cout<<"sixes: "<<sixes<<endl;
       if(strcmp(country,"india")==0)
	{
	cout<<"player of auction?: "<<c<<endl;
	}
	if(strcmp(c,"n")==0)
	{
	cout<<"Ranji Team: "<<m<<endl;
	}
	cout<<"strikerate: "<<strikerate<<endl;

}
void main()
{
	ipl i;
	clrscr();
	i.i_entry();
	i.i_view();
getch();
}





