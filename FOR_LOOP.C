      #include<stdio.h>
      #include<conio.h>
      void main()
      {
      int i,j,k=1;
      clrscr();
      for(i=1;i<=5;i++)
      {
      for(j=1;j<=i;j++)
      {
      if(k<=i)
     { printf("%d",k);
     k++;

 }
  else
  {
  printf("%d",k);
  k=j+i;

     }  }
      printf("\n");
      }
      getch();
      }