// WAP To print All Print Number Between 1 To 200 :
#include<stdio.h>
#include<conio.h>
 void main()
 {
 	int i,n,a;

 	for(n=2;n<=200;n++)
 	{
 	a=0;
 	for(i=2; i<=n/2; i++)
 	 
 	 	if(n%i==0)
 	 	{
		  
 	 	a++;
 	 	break;
 	      }
 	      if(a==0)
 	      printf("%d \t",n);   
 }
      getch();
 }
