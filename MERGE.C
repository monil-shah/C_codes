#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],b[5],c[10],i,j,k,l;
	clrscr();
	printf("1st Array:\n");
	for(i=0;i<5;i++)
	{
		printf("Enter no: ");
		scanf("%d",&a[i]);
	}
	printf("\n2nd Array:\n");
	for(i=0;i<5;i++)
	{
		printf("Enter no: ");
		scanf("%d",&b[i]);
	}
	j=k=l=0;
	while(j<10)
	{
		if(k<5 && l<5)
		{
			if(a[k]<b[l])
			{
				c[j]=a[k];
				k++;
			}
			else
			{
				c[j]=b[l];
				l++;
			}
			j++;
		}
		else if(k==5)
		{
			while(j<10)
			{
				c[j]=b[l];
				l++;
				j++;
			}
		}
		else
		{
			while(j<10)
			{
				c[j]=a[k];
				k++;
				j++;
			}
		}
	}
	printf("\n Merge 1st and 2nd array\n");
	for(i=0;i<10;i++)
	{
		printf(" %d",c[i]);
	}
getch();
}

