// inline function : do fast process

#include<iostream.h>
#include<conio.h>
inline int sum(int i,int j)
{
	return i+j;
}
inline int mul(int a,int b)
{
	return a*b;
}
void main()
{
	int i,j;
	clrscr();
	cout<<"enter value of i: ";
	cin>>i;
	cout<<"enter value of j: ";
	cin>>j;
	cout<<"\n\t sum="<<sum(i,j);
	cout<<"\n\t mul="<<mul(i,j);
getch();
}