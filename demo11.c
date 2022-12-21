//Q. WAP To Check Weather given Numbers is perfect or not perfect :
#include<stdio.h>
#include<conio.h>
 void main()
 {
 	int i,n,sum=0;
 	printf("Enter the Any number:");
 	scanf("%d",&n);
 	for(i=1; i<=n/2; i++)
 	  {
 	   if(n%i==0)
 	   {
 	   	 sum=sum+i;
 	   	
		}
	}
 	  	if(sum==n)
 	  	printf("its is Perfect Number");
 	  	else
 	  	printf("its is Not Perfect Number");
 	  
 	  getch();
 }
