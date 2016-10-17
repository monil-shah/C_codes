#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class store
{
	public:
		char name[15],doctorname[15],company[15],mfg[15],
			expirydate[15];
		int no;
		float price,dis,total;
};
void main()
{
	store s[15];
	int i,j,k;
	clrscr();

		cout<<"\nNo. of medicines required: "<<endl;
		cin>>j;
		for(i=0;i<j;i++)
		{
		cout<<"Input:\n";
		cout<<"enter name: "<<endl;
		cin>>s[i].name;
		cout<<"enter doctorname: "<<endl;
		cin>>s[i].doctorname;
		cout<<"enter company: "<<endl;
		cin>>s[i].company;
		cout<<"enter mfg: "<<endl;
		cin>>s[i].mfg;
		cout<<"enter expirydate: "<<endl;
		cin>>s[i].expirydate;
		cout<<"enter price: "<<endl;
		cin>>s[i].price;
		s[i].dis=s[i].price*0.10;
		s[i].total=s[i].price-s[i].dis;
		}

		for(i=0;i<j;i++)
		{
		cout<<"output:\n";
		cout<<" name: "<<s[i].name<<endl;
		cout<<" doctorname: "<<s[i].doctorname<<endl;
		cout<<" company: "<<s[i].company<<endl;
		cout<<" mfg: "<<s[i].mfg<<endl;
		cout<<" expirydate: "<<s[i].expirydate<<endl;
		cout<<"price: "<<s[i].price<<endl;
		cout<<"discount: "<<s[i].dis<<endl;
		cout<<"total: "<<s[i].total<<endl;
		}


getch();
	}

