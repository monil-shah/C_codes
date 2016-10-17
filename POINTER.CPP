/*
	pointer
	-------

pointer is a point out the memory location
	 i - location name
	25 - location value
     65524 - location address

     *p;

     p - pointer variable - to get location address
    *p - pointer variable - to get location value

*/

#include<conio.h>
#include<iostream.h>
void main()
{
	int *p,i,j;
	clrscr();
	cout<<"enter value of i: ";
	cin>>i;
	cout<<"enter value of j: ";
	cin>>j;
	p=&i;
	cout<<"\n\t Address of i: "<<(unsigned)p;
	cout<<"\n\t Value of i: "<<*p;
       /*	p=&j;
	cout<<"\n\t Address of j: "<<(unsigned)p;
	cout<<"\n\t Value of j: "<<*p<<endl;  */
	*p=*p+*(p-1);
	*(p-1)=*p-*(p-1);
	*p=*p-*(p-1);
	cout<<"i: "<<*p<<endl;
	p=&j;
       /*	cout<<"\n\t Address of j: "<<(unsigned)p;
	cout<<"\n\t Value of j: "<<*p<<endl;      */
	cout<<"j: "<<*p<<endl;
	cout<<" "<<&j;



getch();
}
