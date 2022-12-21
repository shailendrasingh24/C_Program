#include<stdio.h>
#include<conio.h>
  void main ()
  {
  	int i,j;
  	char ch;
      for(i=1; i<=5; i++)
      
      {
      	ch='A';
      	for(j=i; j<=5; j++)
      	   {
      	   	printf("%c",ch);
      	   	ch++;
		   }
      	printf("\n");
	  }
  	
  	 getch();
  }
