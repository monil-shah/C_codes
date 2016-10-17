#include<iostream.h>
#include<conio.h>
void main()
{
	int i,j;
	float m=1;
	clrscr();
	cout<<"Enter value of i: ";
	cin>>i;
	for(j=1;j<=i;j++)
	{
		m=m*j;
	}
	cout<<"\n\t factorial= "<<m<<endl;
	getch();
	}