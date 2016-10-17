#include<iostream.h>
#include<conio.h>
void main()
{
	int i[5],j,k,m,n,p,l;
	clrscr();
	for(j=0;j<5;j++)
	{
	cout<<j<<".enter no: ";
	cin>>i[j];
	}
	cout<<"\n\t 1: ";
	cout<<"\n\t 2: ";
	cout<<"\n\t 3: ";
	cout<<"\n\t 4: ";
	cout<<"\n\tSelect Option:",
	cin>>k;
	switch(k)
	{
		case 1:
			for(j=0;j<5;j++)
			{
			cout<<" "<<i[j]<<endl;
			}
			break;
		case 2:
			cout<<"Enter value: ";
			cin>>m;
			cout<<" "<<i[m]<<endl;
			break;
		case 3:
			cout<<"Enter value: ";
			cin>>n;
			for(j=0;j<5;j++)
			{
				if(j!=n)
				{
				cout<<" "<<i[j]<<endl;
				}
			}
			break;
		case 4:
			cout<<"Enter value of p: ";
			cin>>p;
			cout<<"Enter value to be changed: ";
			cin>>l;
			for(j=0;j<5;j++)
			{
				if(j!=l)
				{
				cout<<" "<<i[j]<<endl;
				}
				else
				{
				cout<<" "<<p<<endl;
				}
				}
				break;
		}
	getch();
	}