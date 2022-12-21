//WAp To Print All Armstrong Number between 100 to 1000 :
#include<stdio.h>
#include<conio.h>
#include <math.h>
 void main()
 {
 	int n,digit,sum,p;
 	for(n=101; n<=1000; n++)
 	{
	 
 	p=n;
 	sum=0;
 	while(p!=0)
 	 {
	  
 	 	digit=p%10;
 	 	p=p/10;
 	 	sum= sum+pow(digit,3);
     }
 	 	if(sum==n) 
     	printf("%d \n",n);
        }
     	  getch();
	  
	  
 }
 
