/*
	pointer
	-------

	pointer is a point out the memory location

	 i - location name
	25 - location value
     65524 - location address
     -----


     *p - pointer

     *p - pointer - to get location value
      p - pointer variable - to get location address
      */


#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,*p;
	clrscr();
	printf("enter value of i: ");
	scanf("%d",&i);
	printf("enter value of j: ");
	scanf("%d",&j);
	printf("enter value of k: ");
	scanf("%d",&k);
	p=&i;
	printf("\n\t Address of i: %u",p);
	printf("\n\t Value of i: %d",*p);
/*	p=p-1;
	printf("\n\t Address of j: %u",p);
	printf("\n\t Value of j: %d",*p);        */
	p=p-2;
	printf("\n\t Address of k: %u",p);
	printf("\n\t Value of k: %d",*p);

getch();
}
