#include<stdio.h>
#include<conio.h>
void main()
{
char name[5][15],l[15];
int i,j;
clrscr();
for(i=0;i<=4;i++)
{
printf("enter name: ");
gets(name[i]);
}
for(i=0;i<=4;i++)
{
for(j=i+1;j<=4;j++)
{
if(strcmp(name[i],name[j])>0)
{
strcpy(l,name[i]);
strcpy(name[i],name[j]);
strcpy(name[j],l);
}}}
for(i=0;i<=4;i++)
{
printf("\n%s",name[i]);
}
getch();
}
