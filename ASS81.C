#include<stdio.h>
#include<conio.h>
void main()
{
	char str[127];
	int a,b=0,c=0,m=1;
	clrscr();
	printf("Enter : ");
       //	gets(str);
	scanf("%[a-z A-Z] %s[127]",str);
	puts(str);
	for(a=0;str[a]!=NULL;a++)
	{
	       if(str[a]!=' ')
		{
		 b++;
		}



	}
	c=(a-b)+1;
	printf("no. of char=%d",b);
	printf("\nno. of words=%d",c);

	getch();
}
