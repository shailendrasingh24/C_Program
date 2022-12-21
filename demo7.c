//WAP To Find Sum of All Even Digits og Given Number:
#include<stdio.h>
#include<conio.h>
 void main()
 
 {
 	int n,digit,sum=0,p;
 	printf("Enter The Any Value");
 	while(n!=0)
 	
     {
     	digit= n%10;
     	n= n/10;
     	
     	if(digit%2==0)
     	 {
		  
     		sum=sum+digit;
		 
		 printf("sum of even digits %d",sum);
	   }
	   
	 }
	 getch();
 }
