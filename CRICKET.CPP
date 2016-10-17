#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<graphics.h>

class personal
{
	public:
		char name[15],country[15],speciality[15];
	public:
		void m_entry();
		void m_view();
};
class ODI : public personal
{
	public:

		char team[15];
		int r,s,f,i,noo,b;
		float strrate,avg;
	public:
		void o_entry();
		void o_view();
};
class test : public personal
{
	public:
		char teamt[15];
		int rt,st,ft,it,not,bt;
		float strratet,avgt;
	public:
		void t_entry();
		void t_view();
	};
class ipl : public personal
{
	public:
		char baseprice[15],teamjoined[15],c[15],m[15];
		int innings,runs,balls,
		sixes,no;
		float strikerate;
	public:
		void i_entry();
		void i_view();
};
class t20 : public ipl
{
	public:
		char team2[15];
		int r2,s2,f2,i2,not20,bt20;
		float strrate2,avg2;
	public:
		void t20_entry();
		void t20_view();
};
class icc : public ODI,public test,public t20
{
	public:
		void view();
};
void personal :: m_entry()
{
	cout<<"Enter player name: "<<endl;
	gets(name);
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
void ODI :: o_entry()
{
	cout<<"Enter no: ";
	cin>>noo;
	m_entry();
	cout<<"Team name: ";
	gets(team);
	cout<<"Innings played: ";
	cin>>i;
	cout<<"No of runs: ";
	cin>>r;
	cout<<"No. of balls: ";
	cin>>b;
	cout<<"No. of sixes: ";
	cin>>s;
	cout<<"No of fours: ";
	cin>>f;
	strrate=((float)r/(float)b)*100;
	avg=r/i;
}
void ODI :: o_view()
{
	clrscr();
	gotoxy(25,2);
	cout<<"OUTPUT"<<endl;
	cout<<" no: "<<noo<<endl;
	m_view();
	puts(team);
	cout<<"Innings played: "<<i<<endl;
	cout<<"No of runs: "<<r<<endl;
	cout<<"No of balls: "<<b<<endl;
	cout<<"No. of sixes: "<<s<<endl;
	cout<<"No of fours: "<<f<<endl;
	cout<<" strikerate: "<<strrate<<endl;
	cout<<"ODI average: "<<avg<<endl;
}
void test :: t_entry()
{
	cout<<"Enter no: ";
	cin>>not;
	m_entry();
	cout<<"Team name: ";
	gets(teamt);
	cout<<"Innings played: ";
	cin>>it;
	cout<<"No of runs: ";
	cin>>rt;
	cout<<"No. of balls: ";
	cin>>bt;
	cout<<"No. of sixes: ";
	cin>>st;
	cout<<"No of fours: ";
	cin>>ft;
	strratet=((float)rt/(float)bt)*100;
	avgt=rt/it;
}
void test :: t_view()
{
		clrscr();
	gotoxy(25,2);
	cout<<"OUTPUT"<<endl;
	cout<<" no: "<<not<<endl;;
	m_view();
	puts(teamt);
	cout<<"Innings played: "<<it<<endl;
	cout<<"No of runs: "<<rt<<endl;
	cout<<"No of balls: "<<bt<<endl;
	cout<<"No. of sixes: "<<st<<endl;
	cout<<"No of fours: "<<ft<<endl;
	cout<<" strikerate: "<<strratet<<endl;
	cout<<"Test average: "<<avgt<<endl;
}
void ipl :: i_entry()
{
	cout<<"Enter IPL no: "<<endl;
	cin>>no;
	m_entry();
	cout<<"Enter IPL baseprice: "<<endl;
	cin>>baseprice;
	cout<<"Enter IPL teamjoined: "<<endl;
	cin>>teamjoined;
	cout<<"Enter IPL innings: "<<endl;
	cin>>innings;
	cout<<"Enter IPL runs: "<<endl;
	cin>>runs;
	cout<<"No. of balls played in IPL: ";
	cin>>balls;
	cout<<"Enter IPL sixes: "<<endl;
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
	strikerate=((float)runs/(float)balls)*100;

}
void ipl :: i_view()
{
		clrscr();
	gotoxy(25,2);
	cout<<"OUTPUT";
	cout<<"no: "<<no<<endl;
	m_view();
	cout<<"IPL Baseprice: "<<baseprice<<endl;
	cout<<"IPL teamjoined: "<<teamjoined<<endl;
	cout<<"IPL innings: "<<innings<<endl;
	cout<<"IPL runs: "<<runs<<endl;
	cout<<"No of balls played ipl: "<<balls<<endl;
	cout<<"IPL sixes: "<<sixes<<endl;
       if(strcmp(country,"india")==0)
	{
	cout<<"player of auction?: "<<c<<endl;
	}
	if(strcmp(c,"n")==0)
	{
	cout<<"Ranji Team: "<<m<<endl;
	}
	cout<<"IPL strikerate: "<<strikerate<<endl;

}
void t20 :: t20_entry()
{
	cout<<"Enter no: ";
	cin>>not20;
	i_entry();
	cout<<"Team name: ";
	gets(team2);
	cout<<"Innings played: ";
	cin>>i2;
	cout<<"No of runs: ";
	cin>>r2;
	cout<<"No. of balls: ";
	cin>>bt20;
	cout<<"No. of sixes: ";
	cin>>s2;
	cout<<"No of fours: ";
	cin>>f2;
	strrate2=((float)r2/(float)bt20)*100;
	avg2=r2/i2;
}
void t20 :: t20_view()
{
		clrscr();
	gotoxy(25,2);
	cout<<"OUTPUT";
	cout<<" no: "<<not20<<endl;;
	i_view();
	puts(team2);
	cout<<"Innings played: "<<i2<<endl;
	cout<<"No of runs: "<<r2<<endl;
	cout<<"No of balls: "<<bt20<<endl;
	cout<<"No. of sixes: "<<s2<<endl;
	cout<<"No of fours: "<<f2<<endl;
	cout<<" strikerate: "<<strrate2<<endl;
	cout<<"T20 average: "<<avg2<<endl;
	cout<<"Total runs: "<<r2+runs<<endl;
}
void icc :: view()
{
	clrscr();
	o_entry();
	o_view();

}


void main()
{       personal p;
	ipl i;
	ODI o;
	test t;
	t20 T20;
	icc ICC;
	int m;
	char c;

	do

       {
	clrscr();
	textbackground(YELLOW);
	gotoxy(25,2);
	cout<<"Cricket Career"<<endl;
	cout<<"1.ODI career"<<endl;
	cout<<"2.Test career"<<endl;
	cout<<"3.Ipl career"<<endl;
	cout<<"4.T20 career"<<endl;
	cout<<"5.exit"<<endl;
	cout<<"Select option: ";
	cin>>m;
	switch(m)
	{
		case 1:
			clrscr();
	int far getcolor(void);
	void far setcolor(int BLUE);

			o.o_entry();

			o.o_view();
			break;
		case 2:
			clrscr();
			t.t_entry();
			t.t_view();
			break;
		case 3:
		       clrscr();
		       i.i_entry();
		       i.i_view();
		       break;
		case 4:
			clrscr();
			T20.t20_entry();
			T20.t20_view();
			break;
		case 5:
			exit(0);
	    }

	cout<<"do you wanna continue?(y/n): ";
	cin>>c;
	}
	while(c=='y');

getch();
}







