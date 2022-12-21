//Q. WAP To Store Twenty Numbers From The Keyboard And Find Sum Of The All Numbers:

#include<stdio.h>
#include<conio.h>
 void main()
  {
  	int i,a[20],sum=0;
  	printf("Enter The Twenty Elements :");
  	  
  	  for(i=0; i<20; i++)
  	   {
  	   	
  	   	scanf("%d",&a[i]);
		 }
  	   for(i=0; i<20; i++)
  	     {
  	     	sum=sum+a[i];
  	     	
		   }
		    printf("Sum Of the All Numbers:%d",sum);
		    
		    getch();
  }
