#include<monil.h>
void main()
{
	int i,j;
	clrscr();
	p("enter value of i: ");
	s("%d",&i);
	p("Enter value of j:\a ");
	s("%d",&j);
	p("\n\tsum=%d",sum(i,j));
	p(" \"monil\" ");
getch();
}

