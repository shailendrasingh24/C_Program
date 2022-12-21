#include<stdio.h>
#include<conio.h>
 void main()
 {
 	int i,n,a=0;
 	printf("Enter The Any Number To Check Prime Number:");
 	scanf("%d",&n);
 	//a=0;
 	for(i=2; i<=n/2; i++)
 	 {
 	 	if(n%i==0)
 	 	{
		  
 	 	a++;
 	 	break;
 	      }
 	      if(a==0)
 	      printf("Its is Prime number");
 	      else
 	      printf("its is Not Prime Number");
	  }
 	
 	getch();
 }
