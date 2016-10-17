#include<iostream.h>
#include<conio.h>
void main()
{
	int **i,j,k;
	clrscr();
	for(j=0;j<3;j++)
	{
		for(k=0;k<3;k++)
		{
			cout<<"Enter no: ";
			cin>>i[j][k];
		}
	}
	for(j=0;j<3;j++)
	{
		for(k=0;k<3;k++)
		{
			cout<<" "<<i[j][k];
		}
		cout<<"\n";
	}
getch();
}
