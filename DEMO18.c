//WAP To find The Lorgest Element of Given n Number :
#include<stdio.h>
#include<conio.h>
 void main()
 {
 	int i,n,a[100],max;
 	printf("How Many Number To be Stored :");
 	scanf("%d",&n);
 	printf("Enter All Number :");
 	 for(i=0; i<n; i++)
 	  {
 	  	scanf("%d",&a[i]);
 	  	
	   }
	    max=a[0];
	    for(i=0; i<n; i++)
	    {
	    	if(max<a[i])
	    	max=a[i];
		}
		 printf("Lorgest Number Is %d",max);
		  getch();
 }
