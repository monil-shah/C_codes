/*
	polymorphism
	------------

same name use different

1) compile time

	1. function overloading
	2. operator overloading

2) run time

	virtual function

function overloading
====================

function name must be same either return type is different or argument is
different
*/

#include<iostream.h>
#include<conio.h>
int sum(int i,int j)
{
	return i+j;
}
int sum(int i,int j,int k)
{
	return i+j+k;
}
float sum(int i,float j)
{
	return i+j;
}
void sum(int i)
{
	cout<<"\n\t sum="<<i;
}
void main()
{
	int i,j,k;
	clrscr();
	cout<<"enter value of i: ";
	cin>>i;
	cout<<"enter value of j: ";
	cin>>j;
	cout<<"enter value of k: ";
	cin>>k;
	cout<<"\n\t sum="<<sum(i,j);
	cout<<"\n\t sum="<<sum(i,j,k);
	cout<<"\n\t sum="<<sum(i,j);
	sum(i);
getch();
}
