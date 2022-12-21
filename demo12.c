//Q.WAP To Print all Perfect Number Between 1 And 1000 :

#include<stdio.h>
#include<conio.h>
 void main()
 {
 	int i,n,sum=0;
 	for(n=2; n<=1000; n++)
 	{
 		for(i=2; i<=n/2; n++)
 		{
 			if(n%i==0)
 			{
 				sum=sum+i;
			 }
	  }
 		
 		if (sum==i)
 		printf("%d",n);
	 }
 	getch();
 }
