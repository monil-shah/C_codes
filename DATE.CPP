#include<iostream.h>
#include<conio.h>
void main()
{
	int i,j,k,l,m,n,o,p,q;
	clrscr();
	cout<<"Enter date: "<<endl;
	cin>>i;
	cout<<"Enter month: "<<endl;
	cin>>j;
	cout<<"Enter year: "<<endl;
	cin>>k;
	cout<<"Enter date 2: "<<endl;
	cin>>l;
	cout<<"Enter month 2: "<<endl;
	cin>>m;
	cout<<"Enter year2: "<<endl;
	cin>>n;
	cout<<"date 1: "<<i<<"/"<<j<<"/"<<k<<endl;
	cout<<"date 2: "<<l<<"/"<<m<<"/"<<n<<endl;
if(i==l && j==m && k!=n)
	{
	if(k>n)
	{
		o=k-n;
		cout<<"no. of years: "<<o<<endl;
	}
	else
	{
		o=n-k;
		cout<<"no. of years: "<<o<<endl;
	}}
if(i==l && k==n && j!=m)
	{


			if(j>m)
			{
			p=j-m;
			cout<<"no. of months: "<<p<<endl;
			}
			else
			{
			p=m-j;
			cout<<"no. of months: "<<p<<endl;
			}
	}
if(k==n && i!=l && j==m)
	{
		if(i>l)
		{
		q=i-l;
		cout<<"no. of days: "<<q<<endl;
		}
		else
		{
		q=l-i;
		cout<<"no. of days: "<<q<<endl;
		}
	}
if(k==n && i!=l && j!=m)
	{
		if(j>m && l<=i)
		{
		p=(j-m)-1;
		}
		else if(j>m && i<=l)
		{
		p=j-m;
		}
		else if(m>j && l<=i)
		{
		p=(m-j)-1;
		}
		else
		{
		p=m-j;
		}
		if(i>l)
		{
		q=30-(i-l);
		}
		else
		{
		q=30-(l-i);
		}
	cout<<"no. of days: "<<q<<endl;
	cout<<"no. of months: "<<p<<endl;
	}
if(k!=n && i!=l && j==m)
	{
		if(k>n && l<=i)
		{
		o=(k-n)-1;
		}
		else if(k>n && i<=l)
		{
		o=k-n;
		}
		else if(n>k && l<=i)
		{
		o=(n-k)-1;
		}
		else
		{
		o=n-k;
		}
		if(i>l)
		{
		q=30-(i-l);
		}
		else
		{
		q=30-(l-i);
		}
		if(o<1)
		{
		p=(12-(j-m))-1;
		cout<<"no. of months: "<<p<<endl;
		}
		else if(o<1)
		{
		p=(12-(m-j))-1;
		cout<<"no. of months: "<<p<<endl;
		}
	cout<<"no. of days: "<<q<<endl;
	cout<<"no. of years: "<<o<<endl;
	}
if(k!=n && j!=m && i!=l)
	{
		if(i>l)
		{

		q=30-(i-l);
		}
		else
		{

		q=30-(l-i);
		}
		if(j>m && l<=i)
		{
				if(k>n && p>=12)
			{
			o=k-n;
			cout<<"no. of years: "<<o<<endl;
			}
			else if(n>k && p>=12)
			{
			o=n-k;
			cout<<"no. of years: "<<o<<endl;
			}
		p=(j-m)-1;
		}
	       else if(j>m && i<=l)
		{
				if(k>n && p>=12)
			{
			o=k-n;
			cout<<"no. of years: "<<o<<endl;
			}
			else if(n>k && p>=12)
			{
			o=n-k;
			cout<<"no. of years: "<<o<<endl;
			}
		p=(j-m);
		}
		else if(m>j && l<=i)
		{
				if(k>n && p>=12)
			{
			o=k-n;
			cout<<"no. of years: "<<o<<endl;
			}
			else if(n>k && p>=12)
			{
			o=n-k;
			cout<<"no. of years: "<<o<<endl;
			}
		p=(m-j)-1;
		}
		else if(m>j && l>=i)

		{
				if(k>n && p>=12)
			{
			o=k-n;
			cout<<"no. of years: "<<o<<endl;
			}
			else if(n>k && p>=12)
			{
			o=n-k;
			cout<<"no. of years: "<<o<<endl;
			}
		p=m-j;
		}



	cout<<"no. of months: "<<p<<endl;
	cout<<"no. of days: "<<q<<endl;
	}
	getch();
	}

