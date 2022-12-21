#include<stdio.h>
#include<conio.h>
  void main ()
  {
  	int i,j;
  	char ch;
      for(i=5; i>=1; i--)
      
      {
      	ch='A';  
      	for(j=i; j<=5; j++)
      	   {
      	   	printf(" *");
      	   	ch--;
		   }
      	printf("\n");
	  }
  	
  	 getch();
  }
