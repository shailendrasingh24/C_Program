//Q. WAP To Check Weather given Numbers is perfect or not perfect :
#include<stdio.h>
#include<conio.h>
 void main()
 {
 	int i,n,sum=0;
 	//printf("Enter the Any number:");
 	//scanf("%d",&n);
 	for(n=2; n<=100; n++)
 	{
	 sum =0;
 	for(i=1; i<=n/2; i++)
 	  {
 	   if(n%i==0)
 	   {
 	   	 sum=sum+i;
 	   	
		}
	}
	if(sum==n)
	
 	  	printf("perfect number   %d"  ,n);
		
 	  	
}
 	  	
 	//else
 	  	//printf("its is Not Perfect Number");
 	  
 	  getch();
 }
