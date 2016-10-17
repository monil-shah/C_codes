#include<stdio.h>
#include<conio.h>
int main()
{
	int *ptr_one;
	clrscr();
ptr_one=(int*)malloc(sizeof(int));
if(ptr_one==0)
{
printf("ERROR:Out of memory\n");
return 1;
}
*ptr_one=25;
printf("%d",*ptr_one);
free(ptr_one);

getch();
return 0;
}



