/*
	fms
	---

file Management system

fstream.h

ofstream - for output

to create the function

ofstream udf;

to open (create) the file - udf.open("file path");
to print in the file - udf<<"statement";
to close the file - udf.close();


ifstream - for input

to create the function

ifstream udf;

to open (create) the file - udf.open("file path");
to scan on the file - udf>>"statement";
to close the file - udf.close();

mode:

write - ios :: out
read - ios :: in
append - ios :: app

eof - end of file

*/

#include<iostream.h>
#include<conio.h>
#include<fstream.h>
class student
{
	public:
		int no;
		char name[15];
};
void main()
{
	student s;
	clrscr();
	cout<<"enter name: ";
	cin>>s.name;
	cout<<"enter no: ";
	cin>>s.no;
	ofstream outf;
	outf.open("d:\\bhupesh\\monil\\vishal.ms",ios :: app);
	outf<<s.name<<" "<<s.no<<" ";
	outf.close();
	ifstream inf;
	inf.open("d:\\bhupesh\\monil\\vishal.ms",ios :: in);
	while(inf.eof()==0)
	{
		inf>>s.name>>s.no;
		cout<<"name="<<s.name<<endl<<"no="<<s.no<<endl;
	}
	inf.close();
getch();
}
