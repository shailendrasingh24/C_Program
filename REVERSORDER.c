//Q.WAP To Store Ten Numbers From the Keyboard then Print All The Numbers in 
// Reverse Order :

#include<stdio.h>
#include<conio.h>
 void main()
 {
 	int a[10],i,rev;
     printf("Enter The ten Element :");
	 
	  for(i=0; i<10; i++)
	   {
	   	
	   	scanf("%d",&a[i]);
		   }	
		   for(i=0; i<5; i++)
		   {
		   	rev=a[i];
		   	a[i]=a[9-i];
		   	a[9-i]=rev;
		   	
		   }
		    for(i=0; i<10; i++)
		    {
		    	printf("Reverse Order value :(%d)\n",a[i]);
			}
			 getch();
 }
