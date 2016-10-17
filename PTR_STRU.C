// Structure with pointer

#include<stdio.h>
#include<conio.h>
struct product
{
	char name[15];
	int price,qty;
};
void main()
{
	struct product pro[3],*p;
	clrscr();
	printf("\n\t Product Sheet ");
	printf("\n\t ששששששששששששש\n");
	printf("name\tprice\tqty\n");
	for(p=pro;p<pro+3;p++)
	{
		scanf("%s%d%d",p->name,&p->price,&p->qty);
	}
	printf("name\tprice\tqty\ttotal\n");
	for(p=pro;p<pro+3;p++)
	{
		printf("%s\t%d\t%d\t%d\n",p->name,p->price,p->qty,p->price * p->TOTAL);
	}
getch();
}
